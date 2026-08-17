class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for(int x :nums)
        st.insert(x);  
        int longest =0;
        
        for(int x: st){
            
            if(st.find(x-1)==st.end()){
                int cnt =1;
            
             //x++;
             while(st.find(x+1)!=st.end()){
                
                x++;
                cnt++;
              }
             longest=max(longest,cnt);
            }
        }
        return longest;
    }
};