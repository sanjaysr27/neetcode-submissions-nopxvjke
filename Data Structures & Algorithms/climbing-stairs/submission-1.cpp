class Solution {
public:
    int climbStairs(int n) {
        int f = 0;
        int s = 1;
        while(n){
            int t = f + s;
            f = s;
            s = t;
            n--;
        }
        return s;
    }
};
