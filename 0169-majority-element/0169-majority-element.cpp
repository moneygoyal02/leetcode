class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem=-1;
        int count=0;
        for(auto it:nums){
            if(count == 0){
                elem = it;
                count++;
                continue;
            }

            if(elem == it && count != 0){
                count++;
            }
            else if(elem != it && count != 0){
                count--;
            }
           
        }

        int check = 0;
        for(auto it:nums){
            if(elem == it)
            check++;
        }

        if(check > nums.size()/2)
        return elem;
        return -1;
    }
};

//  Amazon ✯   Microsoft ✯   Adobe ✯   Apple ✯   Google ✯   Bloomberg   Facebook   Uber   Rubrik  