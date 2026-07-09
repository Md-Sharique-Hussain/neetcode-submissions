class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int n = s.size();
        for(int i=0;i <n;i++){
            if((st.empty() && s[i]==')')
            ||(st.empty() && s[i]=='}')
            ||(st.empty() && s[i]==']')){
                return false;
            }
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else if((s[i]==')' && st.top()=='(') 
            || (s[i]=='}' && st.top()=='{')
            || (s[i]==']' && st.top()=='[')){
                st.pop();
            }
            else return false;
            
        }
        return st.empty();
    }
};
