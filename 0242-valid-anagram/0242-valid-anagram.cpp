class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size() != t.size()) return false;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x : t){
            mp[x]--;
            if(mp[x]<0) return false;
        }
        return true;
    }
};