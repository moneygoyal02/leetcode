class Solution {
public:
    bool judgeSquareSum(int c) {

        if(c<0)
        return false;
        else if(c==0){
            return true;
        }

        long long low = 0;
        long long high = static_cast<long long>(sqrt(c));

        while(low<=high ){
            if(low*low + high*high == c)
            return true;
            else if(low*low + high*high < c)
            low++;
            else
            high--;
        }
        
        return false;
        
    }
};