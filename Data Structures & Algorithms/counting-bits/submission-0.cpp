class Solution {
public:
    int toBinary(int n) {
        int binary = 0;
        int place = 1;
        int count = 0;

        while (n > 0) {
            int bit = n % 2;

            if(bit==1){
                count+=1;
            }

            binary += bit * place;
            n = n / 2;
            place = place * 10;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i] = toBinary(i);
        }
        return ans;
    }
};
