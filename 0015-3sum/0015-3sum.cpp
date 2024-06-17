class Solution {
public:
    void twoSum(vector<int> &nums , vector<vector<int>> &result , int start , int target){

        int low = start;
        int high = nums.size()-1;

        while(low<high){
            if(nums[low] + nums[high] < target)
            low++;
            else if(nums[low] + nums[high] > target)
            high--;
            else{
                result.push_back({-target,nums[low],nums[high]});

                while(low<high && nums[low]==nums[low+1])
                low++;
                while(low<high && nums[high]==nums[high-1])
                high--;

                low++;
                high--;
            }
        }

    }
    vector<vector<int>> threeSum(vector<int>& nums) {

        if(nums.size()<3)
        return{};

        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;


        for(int i=0;i<n-2;i++){

            if(i>0 && nums[i]==nums[i-1])
            continue;

            twoSum(nums,result,i+1,-nums[i]);
            

        }

        return result;
        
    }
};


// Amazon ✯   Facebook ✯   Microsoft ✯   Apple ✯   Adobe ✯   Google
//   Walmart Global Tech   Bloomberg   Uber   Qualtrics   Yahoo  
// Goldman Sachs   tiktok   Salesforce   VMware   ByteDance 
//  Morgan Stanley   Cisco   Oracle   Tesla   American Express   Infosys  