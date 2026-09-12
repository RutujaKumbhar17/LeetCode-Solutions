class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //SOLUTION 1:
        // vector<string>s;
        // sort(s1.begin(), s1.end());
        // do{
        //     s.push_back(s1);
        // }
        // while(next_permutation(s1.begin(),s1.end()));


        // for(auto ch: s){
        //     if(s2.find(ch)!= string::npos){
        //         return true;
        //         //cout<<"h";
        //     }
        // }
        // return false;

        //SOLUTION 2:
        int k =s1.size();
        if(k>s2.size()){
            return false;
        }
        unordered_map<char,int> m1;
        unordered_map<char,int>m2;
        for(char ch: s1){
            m1[ch]++;
        }
        for(int i = 0; i < k; i++){
            m2[s2[i]]++;
        }
        if(m1 == m2){
            return true;
        }
        for(int i = k; i < s2.size(); i++){

            m2[s2[i]]++;       
            m2[s2[i-k]]--; 
            if(m2[s2[i-k]] == 0){
                m2.erase(s2[i-k]);
            }    

            if(m1 == m2){
                return true;
            }
        }
        return false;

       
        
    }
};
