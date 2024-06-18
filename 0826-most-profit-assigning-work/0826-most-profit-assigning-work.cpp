class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker){
      
      int n = difficulty.size();
      int m = worker.size();

      vector<pair<int,int>> arr;

      for(int i=0;i<n;i++){
        arr.push_back({difficulty[i],profit[i]});
      };

      sort(arr.begin(),arr.end());

      for(int i=1;i<n;i++){
        arr[i].second = max(arr[i].second,arr[i-1].second);
      };

      int totalProfit = 0;

      for(int i=0;i<m;i++){

        int ability = worker[i];

        int low=0;
        int high=n-1;
        int maxProfit=0;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid].first<=ability){
                maxProfit = max(maxProfit,arr[mid].second);
                low = mid+1;
            }
            else{

                high = mid-1;

            }
        }

        totalProfit += maxProfit;

      };

      return totalProfit;
        
    }
};

//DoorDash ✯   Amazon ✯   NetEase ✯  