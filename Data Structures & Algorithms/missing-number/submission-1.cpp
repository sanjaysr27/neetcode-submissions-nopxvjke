class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int rSum = n*(n+1)/2;
        int aSum = 0;
        for(int i=0;i<n;i++){
            aSum = aSum + nums[i];
        }
        return rSum - aSum;
    }
};
