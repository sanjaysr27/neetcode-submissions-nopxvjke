class Solution {
public:
    int min(int a, int b){
        if(a>b){
            return b;
        }
        else return a;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        int first = 0;
        int second = 0;
        
        for(int i=2;i<=n;i++){
            int temp = min(second + cost[i-1], first + cost[i-2]);

            first = second;
            second = temp;
        }

        return second;
    }
};
