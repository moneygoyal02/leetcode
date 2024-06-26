class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) 
          return 0;

        
        sort(points.begin(), points.end()) ;

        int arrows = 1;
        int prevEndPos = points[0][1];

        
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > prevEndPos) {
                arrows++;
                prevEndPos = points[i][1];
            } else {
              
                prevEndPos = min(prevEndPos, points[i][1]);
            }
        }

        return arrows;
    }
};
// Facebook ✯   Google ✯   Goldman Sachs ✯  