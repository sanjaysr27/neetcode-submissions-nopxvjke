class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> group;
        unordered_map <string, vector<string>> mpp;
        for(string s : strs){
            vector <int> freq(26,0);

            for(char c : s){
                freq[c-'a']++;
            }

            string key = "";
            for(int i : freq){
                key+=to_string(i) + "#";
            }
            mpp[key].push_back(s);
        }
        for(auto &it : mpp){
            group.push_back(it.second);
        }
        return group;
    }
};
