class Solution {
public:
    int toBinary(int n) {
        int count = 0;

        while (n > 0) {
            count+=1;
            n &= n-1;
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
