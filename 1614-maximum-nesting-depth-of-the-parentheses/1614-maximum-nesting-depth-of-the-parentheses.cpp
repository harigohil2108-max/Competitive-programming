class Solution {
public:
    int maxDepth(string s) {
     int n= s.size();
     stack<int> st;
     int ans=0;
     for(auto i: s){
        if(i== '('){
            st.push('(');
        }
        else if(i== ')'){
            st.pop();
        }
        ans= max(ans,(int)st.size());
     }  
        return ans; 
    }
};