class Solution {
public:
    void sortColors(vector<int>& arr) {

        int low = 0 ;
        int high = arr.size()-1;
        int mid = 0;

        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }

            else if (arr[mid] == 2){
                swap(arr[mid],arr[high]);
                high--;
            }
            else{
                swap(arr[mid],arr[low]);
                mid++;
            }
        }
        
    }
};

//The time complexity of this solution is O(n) where n is the number of elements in the input array. This is because we are iterating through the array only once.
