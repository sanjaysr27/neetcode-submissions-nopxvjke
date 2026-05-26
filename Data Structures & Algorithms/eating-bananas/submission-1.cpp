class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = 0;
        for(int i=0;i<n;i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        if(n==h){
            return max;
        }

        if(n>h){
            return 0;
        }

        else{
            int low = 1;
            int high = max;
            while(low<high){
                int mid = low + (high-low)/2;
                int hours = 0;
                for(int i=0;i<n;i++){
                    if(piles[i]%mid == 0){
                        hours = hours + (piles[i]/mid);
                    }
                    else hours = hours + (piles[i]/mid) + 1;
                }
                if(hours <= h){
                    high = mid;
                }
                else{
                    low = mid+1;
                }
            }
        return low;
    } 
    }
};
