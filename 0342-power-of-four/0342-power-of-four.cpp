class Solution {
public:
    bool isPowerOfFour(int n) {
      
      if(n<1)
        return false;

        if(n==1)
        return true;

        if(n%4==0){
         bool  res = isPowerOfFour(n/4);
           return res;
        }

        return false;
        
    }
};

// Adobe ✯   Amazon ✯   Apple ✯   Google ✯   Two Sigma ✯  