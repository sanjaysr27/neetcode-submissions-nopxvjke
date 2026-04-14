class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==0){
            return 1;
        }
        // return climbStairs(n-1) + climbStairs(n-2);

        int first = 1; int second = 1;
        int i=2;
        while(i<=n){
            int third = first + second;
            first = second;
            second = third;
            i++;
        }
        return second;
    }
};
