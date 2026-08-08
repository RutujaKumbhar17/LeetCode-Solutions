class Solution {
public:
    bool checkString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' && (st.empty() || st.top() != 'b')){
                st.push(s[i]);
            }
            else if(s[i]=='b'){
                st.push(s[i]);
            }
            else if(s[i] == 'a' && !st.empty() && st.top() == 'b') {
                return false;
            }
        }
        return true;
        
    }
};