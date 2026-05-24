class Solution {
public:
    double myPow(double x, int n) {
        double k = 1/x;
        if(n==0){
            return 1;
        }
        if(n>0){
            return x*myPow(x, n-1);
        }
        else{
            return k*myPow(x, n+1);
        }
    }
};
