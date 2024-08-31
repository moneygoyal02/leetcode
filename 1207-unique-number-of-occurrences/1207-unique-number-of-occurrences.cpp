class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> n(2001,0);
        
        for(auto &it: arr){
            n[it+1000]++;
        }
        
        sort(begin(n),end(n));
        
        for(int i=1; i<2001;i++){
            if( n[i]!=0 && n[i] == n[i-1]) 
                return false;
        }
        
        return true;
    }
};

//  Amazon ✯   Adobe ✯   Facebook ✯   Apple ✯   Bloomberg ✯   Google  


// bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int, int> count;
        
      
//         for (auto &it : arr) {
//             count[it]++;
//         }
        
//         unordered_set<int> uni;
   
//         for (auto &it : count) {
//             int occur = it.second;
            
//             if (uni.find(occur) != uni.end()) {
//                 return false; 
//             }
            
//             uni.insert(occur); 
//         }
        
//         return true; 
//     }