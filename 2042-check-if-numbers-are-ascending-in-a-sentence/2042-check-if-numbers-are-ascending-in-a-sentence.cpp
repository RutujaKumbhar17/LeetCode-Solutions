class Solution {
public:
    bool areNumbersAscending(string s) {
        stack<int> st;

        for(int i = 0; i < s.size(); i++) {
            
            if(isdigit(s[i])) {
                int num = 0;

                while(i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                if(!st.empty() && st.top() >= num)
                    return false;

                st.push(num);
            }
        }

        return true;
    }
};