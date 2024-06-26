class Solution {
public:
    
    bool isValid(vector<vector<char>>& board,int sr,int er,int sc,int ec){

        set<char> arr;

        for(int i=sr;i<er;i++){
            for(int j=sc;j<ec;j++){
                if(board[i][j]=='.')
                continue;
                else if(arr.count(board[i][j]))
                return false;
                arr.insert(board[i][j]);
            }
        }
        return true;
    }



    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            set<char> arr;
            for(int col=0;col<9;col++){

                if(board[row][col]=='.')
                continue;
                else if(arr.count(board[row][col]))
                return false;
                arr.insert(board[row][col]);
                
            }
        }

        for(int row=0;row<9;row++){
            set<char> arr;
            for(int col=0;col<9;col++){

                if(board[col][row]=='.')
                continue;
                else if(arr.count(board[col][row]))
                return false;
                arr.insert(board[col][row]);
                
            }
        }

        for(int sr=0;sr<9;sr+=3){
            int er=sr+3;
            for(int sc=0;sc<9;sc+=3){
                int ec=sc+3;

                if(!isValid(board,sr,er,sc,ec))
                return false;
            }
        }

        return true;
    }
};

//  Amazon ✯   Microsoft ✯   Uber ✯   Cruise Automation ✯   Apple ✯   Facebook   Karat   Wayfair   Nvidia  