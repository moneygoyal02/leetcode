class Solution {
public:

    bool canPlace(vector<int>position,int force , int m ,int n){

        int prev = position[0];
        int balls = 1;

        for(int i=0;i<n;i++){
            int curr = position[i];

            if(curr-prev >= force)
           { balls++;
            prev=curr;
            }

            if(balls == m)
            break;
        }

        return balls==m;

    };
     
    int maxDistance(vector<int>& position, int m) {

        int n = position.size();
        sort(position.begin(),position.end());

        int minForce=1;
        int maxForce=position[n-1]-position[0];
        int force=0;

        while(minForce<=maxForce){

            int mid = minForce + (maxForce-minForce)/2;

            bool res = canPlace(position,mid,m,n);

            if(res){
                force = mid;
                minForce = mid+1;

            }

            else{
                maxForce = mid-1;
            }

        }

        return force;
        
    }
};

//Amazon ✯   Roblox ✯  