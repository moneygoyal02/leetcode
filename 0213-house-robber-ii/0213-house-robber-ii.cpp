class Solution {
public:
    int arr[101]; 

    int solve(vector<int>& nums, int i, int end) {
        if (i > end)
            return 0;
        if (arr[i] != -1)
            return arr[i];

        int steal = nums[i] + solve(nums, i + 2, end);
        int skip = solve(nums, i + 1, end);

        return arr[i] = max(steal, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        
        memset(arr, -1, sizeof(arr));
        int max1 = solve(nums, 0, n - 2);
        memset(arr, -1, sizeof(arr));
        int max2 = solve(nums, 1, n - 1);

        return max(max1, max2);
    }
};
