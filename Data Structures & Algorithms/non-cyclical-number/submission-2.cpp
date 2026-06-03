class Solution {
public:
    set<int> seen;
    bool sumOfSquares(int num){
        if(num==1){
            return true;
        }
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum += (digit)*(digit);
            num = num/10;
        }
        if (seen.find(sum) != seen.end()){
            return false;
        }
        else{
            seen.insert(sum);
            return sumOfSquares(sum);
        }
    }
    bool isHappy(int n) {
        seen.clear();
        return sumOfSquares(n);
    }
};
