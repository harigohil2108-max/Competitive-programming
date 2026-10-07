class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m= s2.size();

        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(char &s: s1) v1[s-'a']++;

        int l=0;
        int r=0;
        while(r<m){
            v2[s2[r]-'a']++;
            if(r-l+1 > n){
                v2[s2[l] -'a']--;
                l++;
            }
            if(v1==v2) return true;
            r++;

        }return false;
    }
};