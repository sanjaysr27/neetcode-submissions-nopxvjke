class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> arr(m + 1, vector<int>(n + 1, 0));

        for(int i=0;i<=m;i++){
            arr[i][0] = 0;
        }
        for(int j=0;j<=n;j++){
            arr[0][j] = 0;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
        return arr[m][n];
    }
};
