class Solution {
public:

    void twoSum(vector<int> &nums , vector<vector<int>> &result , int start , int a , int b , long long target){

        int low = start;
        int high = nums.size()-1;
        target -= (a+b);

        while(low<high){
            if(nums[low] + nums[high] < target)
            low++;
            else if(nums[low] + nums[high] > target)
            high--;
            else{
                result.push_back({a,b,nums[low],nums[high]});

                while(low<high && nums[low]==nums[low+1])
                low++;
                while(low<high && nums[high]==nums[high-1])
                high--;

                low++;
                high--;
            }
        }

    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        if(nums.size()<4)
        return {};
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;

        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1])
            continue;
            for(int j=i+1 ; j<n-2 ; j++){
                if(j != i + 1 && nums[j] == nums[j-1])
                continue;

                

                twoSum(nums,result,j+1,nums[i],nums[j],target);

            }
        }
        return result;
    }

};

//Amazon ✯   Facebook ✯   Apple ✯   Microsoft ✯   Adobe ✯   
//Google   Yahoo   Infosys   LinkedIn  