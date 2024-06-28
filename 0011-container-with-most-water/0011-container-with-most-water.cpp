class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int j = height.size()-1;
        int area = 0;
        
        while(i<j){
           int a1 = (j-i)*(min(height[i],height[j]));
            
            if(height[i]>height[j])
                j--;
            else
                i++;
            area = max(a1,area);
        }
        
        return area;
        
    }
};

//  Amazon ✯   Microsoft ✯   Adobe ✯   Facebook ✯   Google ✯   Apple   Bloomberg   Swiggy    //  Goldman Sachs  