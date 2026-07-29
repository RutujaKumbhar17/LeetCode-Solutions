class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>stt;
        string s1;
        string t1;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                st.push(s[i]);
                s1+=s[i];
            }
            else if(s[i]=='#'){
                if (!st.empty()) {
                    st.pop();
                }

                if (!s1.empty()) {
                    s1.pop_back();
                }
            }
            
        
        }

        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                stt.push(t[i]);
                t1+=t[i];
            }
            else if(t[i]=='#'){
                if (!stt.empty()) {
                    stt.pop();
                }

                if (!t1.empty()) {
                    t1.pop_back();
                }
               

            }
        
        }
        if(s1==t1){
            return true;
        }
        return false;
        
    }
};