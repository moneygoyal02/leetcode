class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int Max = nums[0];

        for(int i=1;i<nums.size();i++){
            sum = max(nums[i],nums[i]+sum);
            Max = max(sum,Max);
        }
        return Max;
        
    }
};

// LinkedIn ✯   Amazon ✯   Apple ✯   Microsoft ✯   Adobe ✯   Google   Facebook   Cisco   JPMorgan   Shopee   Bloomberg   Uber   VMware   Oracle   Salesforce   ByteDance   Docusign   Samsung   Goldman Sachs   ServiceNow   Walmart Global Tech   PayTM   Infosys  