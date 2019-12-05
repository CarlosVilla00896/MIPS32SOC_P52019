module BranchResolver(
    input [2:0] branch,
    input zero,
    input sign,
    output branchTaken
);
    reg _branchTaken;
    assign branchTaken = _branchTaken;

    always @ (*)
        begin
            if(branch != 3'd0)
                if( (branch == 3'd1) && zero )
                    _branchTaken = 1'b1;
                else if( (branch == 3'd2) && ~zero )
                    _branchTaken = 1'b1;
                else if( (branch == 3'd3) && ~sign)
                    _branchTaken  = 1'b1;
                else if( (branch == 3'd4) && (~sign && ~zero) )
                    _branchTaken = 1'b1;
                else if( (branch == 3'd5) && (sign || zero))
                    _branchTaken = 1'b1;
                else if( (branch == 3'd6) && sign)
                    _branchTaken = 1'b1;
            else
                _branchTaken = 1'b0;           
        end


endmodule