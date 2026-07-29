class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string g;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                st.push(s[i]);
         
            }
            else if(s[i]=='*'){
            
                st.pop();
            }
            
        }
        while(!st.empty()){
            g.push_back(st.top());
            st.pop();
        }
        
        reverse(g.begin(),g.end());
        return g;

    }
};