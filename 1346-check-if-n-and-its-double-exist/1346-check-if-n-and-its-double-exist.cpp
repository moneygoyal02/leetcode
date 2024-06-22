class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      
      map<int,int> mp;
      
      for(int i=0;i<arr.size();i++){
        
         if (arr[i] == 0 && mp.count(0) > 0) {
               
                return true;
            }
        
       if (mp.count(arr[i] * 2) || (arr[i] % 2 == 0 && mp.count(arr[i] / 2))) {
                return true;
            }

        mp[arr[i]]=i;
      }
      
      return false;
        
    }
};