function [q,errbnd] = integrale_num_inf(FUN)
% quadgk function correction
q=zeros(6,1);
errbnd=zeros(6,1);
% % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights.
pnodes = [ ...
    0.2077849550078985; 0.4058451513773972; 0.5860872354676911; ...
    0.7415311855993944; 0.8648644233597691; 0.9491079123427585; ...
    0.9914553711208126];
pwt = [ ...
    0.2044329400752989, 0.1903505780647854, 0.1690047266392679, ...
    0.1406532597155259, 0.1047900103222502, 0.06309209262997855, ...
    0.02293532201052922];
pwt7 = [0,0.3818300505051189,0,0.2797053914892767,0,0.1294849661688697,0];
NODES = [-pnodes(end:-1:1); 0; pnodes];
WT = [pwt(end:-1:1), 0.2094821410847278, pwt];
EWT = WT - [pwt7(end:-1:1), 0.4179591836734694, pwt7];
NW=numel(WT);
MININTERVALCOUNT = 10; % Minimum number subintervals to start.
ATOL = 1.e-10;
RTOL = 1.e-6;
MAXINTERVALCOUNT = 5000;

% Initialize the FIRSTFUNEVAL variable.  Some checks will be done just
% after the first evaluation.
FIRSTFUNEVAL = true;

interval = [-1,1];
coder.varsize('tinterval');
[q,errbnd] = vadapt(@(t) f4(t,MAXINTERVALCOUNT),interval,MININTERVALCOUNT,NODES,WT,EWT,ATOL,RTOL,NW,MAXINTERVALCOUNT);
%==Nested functions=========================================================
    function [fx,too_close] = evalFun(x,MAXINTERVALCOUNT)
        coder.varsize('fx',[6,MAXINTERVALCOUNT]);
        fx=zeros(6,150);
        % Evaluate the integrand.
        if FIRSTFUNEVAL
            % Don't check the closeness of the mesh on the first iteration.
            too_close = false;
            fx = FUN(x);
            FIRSTFUNEVAL = false;
        else
            too_close = checkSpacing(x);
            if too_close
                fx = [];
            else
                fx = FUN(x);
            end
        end
    end % evalFun

%--------------------------------------------------------------------------
    function [y,too_close] = f4(t,MAXINTERVALCOUNT)
        % Transform to finite interval: (-Inf,Inf) -> (-1,1).
        tt = t ./ (1 - t.^2);
        coder.varsize('y',[6,MAXINTERVALCOUNT]);
        y=zeros(6,150);
        too_close=true;
        [y,too_close] = evalFun(tt,MAXINTERVALCOUNT);
        if ~too_close
            for i=1:6
                y(i,:) = y(i,:) .* (1 + t.^2) ./ (1 - t.^2).^2;
            end 
        end
    end % f4

end % quadgk
