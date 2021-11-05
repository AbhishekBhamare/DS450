// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0 || s.size()==1 || s[0]==')' || s[0]=='}' || s[0]==']')
            return false;
        stack<char>st;
    
        for(int i=0; i<s.size(); ++i){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.empty()==true || st.top()=='('&&s[i]!=')' || st.top()=='{'&&s[i]!='}' || st.top()=='['&&s[i]!=']'){
                return false;
            }else{
                st.pop();
            }
        }
        return st.empty();
    }
};
