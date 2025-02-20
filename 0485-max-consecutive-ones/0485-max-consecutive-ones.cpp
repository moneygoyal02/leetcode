class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int result = 0;
        int n = nums.size();        
        int count = 0;
        
        for(int i=0; i<n; i++){
           if(nums[i] == 1){
            count++;                    
           }
           else{
            if(count > result){
                result = count;
                count = 0;
                
            }
            else{
                count = 0;
            }
            
           }
        }

        return result>count?result:count;
    }
};