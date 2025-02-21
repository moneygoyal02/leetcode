class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int sum = 0, count = 0;
        unordered_map<int,int> prevSum;  // (prefix sum) -> (frequency)
        prevSum[0]=1;
        
        for(int i = 0; i<nums.size();i++){
            sum +=nums[i];
             // If sum - k exists in map, add its frequency to count
            if(prevSum.find(sum-k) != prevSum.end()){
                count += prevSum[sum-k];
            }
             // Increment frequency of current sum
            prevSum[sum]++;
           
            
        }
        return count;
        
    }
};
