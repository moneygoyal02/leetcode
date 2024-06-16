class Solution {
public:

    int findMin(vector<int>& arr) {
        int min = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (min > arr[i])
                min = arr[i];
        }
        return min;
    }

    int findMax(vector<int>& arr) {
        int max = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
    }

    bool isPossible(vector<int>& arr, int mindays, int adjRose, int bouquets) {
        int count = 0;
        int totbouq = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= mindays) {
                count++;
            } else {
                totbouq += count / adjRose;
                count = 0;
            }
        }

        totbouq += count / adjRose; // Check the last count
        return totbouq >= bouquets;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int low = findMin(arr);
        int high = findMax(arr);

        long long val = (long long)k * m; // Ensure the multiplication does not overflow
        if (val > arr.size())
            return -1;

        while (low <= high) { // Change to low <= high
            int mid = low + (high - low) / 2;

            bool res = isPossible(arr, mid, k, m);

            if (res) {
                high = mid - 1; // Adjust high
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
