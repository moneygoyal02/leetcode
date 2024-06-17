class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        
        for(int i = 0; i<nums.size(); i++) {
            if(mp.count(target-nums[i]))
                return {mp[target-nums[i]], i};
            mp[nums[i]] = i;
        }
        
        return {};
    }
};

// Amazon ✯   Adobe ✯   Google ✯   Apple ✯   Microsoft ✯   Facebook   Bloomberg   
//Uber   Spotify   Goldman Sachs   Expedia   Oracle   Yahoo   Zoho   Visa   
//Morgan Stanley   IBM   Paypal   JPMorgan   Walmart Global Tech   Intel  
// Salesforce   Dell   American Express   Accenture   Samsung   Intuit   Zillow   Zoom   Zomato  