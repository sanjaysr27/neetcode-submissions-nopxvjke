class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int p = 1;

        vector<int> result (n, 1);

        for(int i=0;i<n;i++){
            result[i] = p;
            p = p*nums[i];
        }

        int s = 1;
        for(int i=n-1;i>=0;i--){
            result[i] = result[i]*s;
            s = s * nums[i];
        }

        return result;
    }
};
