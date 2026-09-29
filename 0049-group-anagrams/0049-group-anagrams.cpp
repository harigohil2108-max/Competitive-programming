class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            int freq[26]={};
            for(int j=0;j<strs[i].size();j++){
                freq[strs[i][j]- 'a']++;
            }
            string key;
            for(auto x: freq){
                key +=to_string(x);
                key += "#";
            }
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};