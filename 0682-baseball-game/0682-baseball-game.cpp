class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] != "+" && operations[i] != "D" && operations[i] != "C"){
                int n=stoi(operations[i]);
                st.push(n);
                sum+=st.top();
            }
            else if(operations[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);
                sum+=st.top();

            }
            else if(operations[i]=="D"){
                int r1=st.top()*2;
                st.push(r1);
                sum+=st.top();
            }
            else if(operations[i]=="C"){
                sum-=st.top();
                st.pop();
            }

        }
        return sum;

    }
};