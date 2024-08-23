class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        int end = 1;
        
       vector <int> result(n);
       result[0] = 1;
        
        for(int i=1;i<n;i++){
            result[i] = (result[i-1]*nums[i-1]);
        };

        for(int i=n-1;i>=0;i--){

            result[i]*=end;
            end *= nums[i];
        }

        return result;
    }
};