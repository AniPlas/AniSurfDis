    function [interval_new,pathlen] = split(x,minsubs)
        coder.varsize('interval_new');
        interval_new=x;
        absdx = abs(diff(interval_new));
        pathlen = interval_new(end) - interval_new(1);

        udelta = minsubs/pathlen;
        nnew = ceil(absdx*udelta) - 1;
        idxnew = find(nnew > 0);
        nnew = nnew(idxnew);
        for j = numel(idxnew):-1:1
            k = idxnew(j);
            nnj = nnew(j);
            % Calculate new points.
            newpts = interval_new(k) + (1:nnj)./(nnj+1)*(interval_new(k+1)-interval_new(k));
            % Insert the new points.
            interval_new = [interval_new(1:k),newpts,interval_new(k+1:end)];
        end

        % Remove useless subintervals.
        interval_new(abs(diff(interval_new))==0) = [];
        if isscalar(interval_new)
            % Return at least two elements.
            interval_new = [interval_new(1),interval_new(1)];
        end
    end % split