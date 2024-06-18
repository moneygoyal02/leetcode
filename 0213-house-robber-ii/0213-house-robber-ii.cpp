class Solution {
public:
    int solve(vector<int>& nums, int i, int end, vector<int>& arr) {
        if (i > end)
            return 0;
        if (arr[i] != -1)
            return arr[i];
        
        int steal = nums[i] + solve(nums, i + 2, end, arr);
        int skip = solve(nums, i + 1, end, arr);
        
        return arr[i] = max(steal, skip);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);
        
        vector<int> arr1(n, -1); 
        vector<int> arr2(n, -1); 

        
        int max1 = solve(nums, 0, n - 2, arr1);
        int max2 = solve(nums, 1, n - 1, arr2);

        
        return max(max1, max2);
    }
};
