class Solution {
public:
     
    vector <int> Left_Max(vector<int>& height,int n) {
        vector <int> left_max(n);
        left_max[0] = height[0];
        for(int i=1 ; i<n ; i++){
            left_max[i] = max(left_max[i-1],height[i]);
        }

        return left_max; 
    };
     
    vector <int> Right_Max(vector<int>& height,int n) {
        vector <int> right_max(n);
        right_max[n-1] = height[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            right_max[i] = max(right_max[i+1],height[i]);
        }

        return right_max; 
    }; 
    int trap(vector<int>& height) {

        int n = height.size();
        if(n == 1 || n == 0)
            return 0;

        vector <int> Left = Left_Max(height,n) ;
        vector <int> Right = Right_Max(height,n);
        
        int water = 0;

        for(int i=0 ; i<n ; i++){

            water+= min(Left[i],Right[i]) - height[i] ;

        }

        return water;



        
    }
};

// Amazon ✯   Goldman Sachs ✯   Facebook ✯   Bloomberg ✯   Microsoft ✯   Google   Apple   Adobe   Uber   Qualtrics   Rubrik   Snapchat   Intel   Oracle   Paypal   Tesla   Intuit   Citadel   Visa   ServiceNow   National Instruments   Sapient  