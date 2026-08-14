class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        int z = s.size();
            for(int i =0;i<z;i++){
                
                if(s[i]=='['|| s[i]=='{' || s[i]=='('){
                    s1.push(s[i]);
                }
                else{
                if(s1.empty()){
                    return false;
                }
                char ch = s1.top();
                if(s[i]=='}' && ch== '{'){
                    s1.pop();
                }
                else if(s[i]==']' && ch== '['){
                    s1.pop();
                }
                else if(s[i]==')' && ch== '('){
                    s1.pop();
                }
                else return false;
                }
                
            }
             if(!s1.empty()){
                return false;
            }
            
           
        
        return true;
    }
    
};