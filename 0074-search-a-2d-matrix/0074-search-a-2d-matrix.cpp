class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int s = 0;
        int e = m*n-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            int row = mid/n;
            int col = mid%n;

            if(matrix[row][col] == target)
            return true;
            else if(matrix[row][col] < target)
            s = mid+1;
            else
            e = mid-1;
        }
        return false;
    }
};

// Facebook ✯   Uber ✯   Accenture ✯   Cisco ✯   Publicis Sapient ✯   HSBC   Novus
// Platform   Gainsight   Accolite   Xperi   Quest Tech   Amazon   Codenation   
// Samsung   PhonePe   Wipro   Microsoft   Bloomberg   Apple   Adobe   Goldman 
// Sachs   Oracle   Nvidia   Salesforce  