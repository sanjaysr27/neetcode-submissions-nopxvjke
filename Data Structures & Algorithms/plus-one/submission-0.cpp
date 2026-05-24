class Solution {
public:
    long pow(int x, int n){
        if(n==0){
            return 1;
        }
        return x*pow(x, n-1);
    }

    int log(long n){
        int c=0;
        while(n>0){
            n = n/10;
            c = c+1;
        }
        return c;
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        long num = 0;
        for(int i=0; i<n; i++){
            num = num + digits[i]*pow(10, n-i-1);
        }
        num = num+1;
        vector<int> result;
        while(num>0){
            int temp = num%10;
            result.insert(result.begin(), temp);
            num = num/10;
        }
        return result;
    }
};
