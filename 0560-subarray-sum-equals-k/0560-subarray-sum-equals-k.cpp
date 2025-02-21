class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int sum = 0, count = 0;
        unordered_map<int,int> prevSum;
        prevSum[0]=1;
        
        for(int i = 0; i<nums.size();i++){
            sum +=nums[i];
            if(prevSum.find(sum-k) != prevSum.end()){
                count += prevSum[sum-k];
            }
            prevSum[sum]++;
           
            
        }
        return count;
        
    }
};