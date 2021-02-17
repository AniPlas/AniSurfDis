    function too_close = checkSpacing(x)
        ax = abs(x);
        tcidx = find(abs(diff(x)) <= 100*eps(class(x))*max(ax(1:end-1),ax(2:end)),1);
        too_close = ~isempty(tcidx);
    end % checkSpacing