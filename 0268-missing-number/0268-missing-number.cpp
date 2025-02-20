class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int xor1 = 0;
        int xor2 = nums[0];

        for(int i=1; i<n; i++){
            xor2^=nums[i];
            xor1^=i;

        };
        xor1^=n;

        return xor1^xor2;
        
    }
};