class Solution {
public:
    int solve(vector<int>& nums, int i, int n, vector<int>& arr) {
        if (i >= n)
            return 0;
        
        if (arr[i] != -1)
            return arr[i];
        
        int steal = nums[i] + solve(nums, i + 2, n, arr);
        int skip = solve(nums, i + 1, n, arr);
        
        return arr[i] = max(steal, skip);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        
        vector<int> arr(n, -1);  
        return solve(nums, 0, n, arr);
    }
};

// Amazon ✯   Apple ✯   Google ✯   Cisco ✯   Microsoft ✯   Adobe   Bloomberg   Facebook   //Walmart Global Tech  
