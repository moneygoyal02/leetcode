class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int> lost;
        
        for(auto &in: matches){
            int lose = in[1];
            lost[lose]++;
        }
        
        vector<int>lost_once;
        vector<int>never_lost;
        
        for(auto &in: matches){
            int lose = in[1];
            int win = in[0];
            
            if(lost[lose]==1)
                lost_once.push_back(lose);
            
            if(lost.find(win)==lost.end())
            {
                never_lost.push_back(win);
                lost[win]=2;
            }
        }
        
        sort(begin(lost_once),end(lost_once));
        sort(begin(never_lost),end(never_lost));
        
        return {never_lost,lost_once}  ;
        
        
        
    }
};

//  Amazon ✯   Palantir Technologies ✯   Indeed ✯  