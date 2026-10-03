class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row,col,square;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int val =board[i][j];
                if(val=='.')
                continue;
                if(
                    row[i].count(val) ||
                    col[j].count(val)  ||
                    square[(i/3)*3+ j/3].count(val) 
                ) return false;

                row[i].insert(val);
                col[j].insert(val);
                square[(i/3)*3+ j/3].insert(val);

                
            }
        } return true;
    }
};