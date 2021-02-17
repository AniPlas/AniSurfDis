function [q,errbnd] = vadapt(f,tinterval,MININTERVALCOUNT,NODES,WT,EWT,ATOL,RTOL,NW,MAXINTERVALCOUNT)       
        q=zeros(6,1);
        errbnd=zeros(6,1);      
        coder.varsize('x');
        coder.varsize('x_matrix', [15 MAXINTERVALCOUNT]);
        x_matrix=zeros(15,10);
        x=zeros(1,150);
        % Iterative routine to perform the integration.
        % Compute the path length and split tinterval if needed.
        [tinterval,pathlen] = split(tinterval,MININTERVALCOUNT);
        % Initialize array of subintervals of [a,b].
        subs = [tinterval(1:end-1);tinterval(2:end)];
        % Initialize partial sums.
        q_ok = zeros(6,1);
        err_ok = zeros(6,1);
        % Initialize main loop
        while true
            % SUBS contains subintervals of [a,b] where the integral is not
            % sufficiently accurate. The first row of SUBS holds the left end
            % points and the second row, the corresponding right endpoints.
            midpt = sum(subs)/2;   % midpoints of the subintervals
            halfh = diff(subs)/2;  % half the lengths of the subintervals
            NM=length(midpt);
            x_matrix = NODES*halfh + ones(NW,1)*midpt;
            x = reshape(x_matrix,1,[]);   % function f expects a row vector
            [fx,too_close] = f(x);
            % Quit if mesh points are too close.
            if too_close
                break
            end
            Q1=zeros(6,NM);
            Q2=zeros(6,NM);
            for n=1:6
                F = reshape(fx(n,:),NW,[]);
                % Quantities for subintervals.
                Q1(n,:) = (WT*F) .* halfh;
                Q2(n,:) = (EWT*F) .* halfh;
            end 
            % Calculate current values of q and tol.
            q = sum(Q1,2) + q_ok;
            tol = max(ATOL,RTOL*max(abs(q)));
            % Locate subintervals where the approximate integrals are
            % sufficiently accurate and use them to update the partial
            % error sum.
            ndx = find(max(abs(Q2),[],1) <= (2*tol/pathlen)*abs(halfh));
            err_ok = err_ok + sum(Q2(:,ndx),2);
            % Remove errsubs entries for subintervals with accurate
            % approximations.
            Q2(:,ndx) = [];
            errbnd = abs(err_ok) + sum(abs(Q2),2);
            % Check for nonfinites.
            finite_test=zeros(6,1);
            for j=1:6
                finite_test(j)=(isfinite(q(j)) && isfinite(errbnd(j)));
            end
            if ~finite_test
                break
            end
            % Test for convergence.
            if errbnd <= tol
                break
            end
            % Remove subintervals with accurate approximations.
            subs(:,ndx) = [];
            if isempty(subs)
                break
            end
            % Update the partial sum for the integral.
            q_ok = q_ok + sum(Q1(:,ndx),2);
            % Split the remaining subintervals in half. Quit if splitting
            % results in too many subintervals.
            nsubs = 2*size(subs,2);
            if nsubs > MAXINTERVALCOUNT
                break
            end
            midpt(ndx) = []; % Remove unneeded midpoints.
            subs = reshape([subs(1,:); midpt; midpt; subs(2,:)],2,[]);
        end
    end % vadapt