#include<algorithm>
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                cnt=max(cnt,(int)st.size());
                
            }
            //cnt=st.size();
            if(s[i]==')'){
                st.pop();

            }
            
            

        }
        return cnt;

    }
};