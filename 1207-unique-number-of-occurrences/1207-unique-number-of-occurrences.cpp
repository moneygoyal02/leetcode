class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        
      
        for (auto &it : arr) {
            count[it]++;
        }
        
        unordered_set<int> uni;
   
        for (auto &it : count) {
            int occur = it.second;
            
            if (uni.find(occur) != uni.end()) {
                return false; 
            }
            
            uni.insert(occur); 
        }
        
        return true; 
    }
};


//  Amazon ✯   Adobe ✯   Facebook ✯   Apple ✯   Bloomberg ✯   Google 