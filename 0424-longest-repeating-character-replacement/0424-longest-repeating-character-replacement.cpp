class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0;
        int maxFr=0;
        int ans=0;
        for(int r=0;r< s.size();r++){
            mp[s[r]]++;
            maxFr=max(maxFr,mp[s[r]]);
            while(r-l+1 -maxFr>k){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }

        return ans;

    }
};