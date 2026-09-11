class Solution {
public:
    bool isAnagram(string s, string t) {
        //SOLUTION 1:
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s.size()!=t.size()){
        //     return false;
        // }
        // else{
        //     for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i])
        //         return false;
        // }
        // }
        // return true;

        //SOLUTION 2:
        unordered_map<char,int>s1;
        unordered_map<char,int>t1;

        if(s.size()!=t.size()){
            return false;
        }
        else{
            for(char ch:s){
            s1[ch]++;
        }
        for( char ch:t){
            t1[ch]++;
        }
        for(char ch : s){
            if(s1[ch]!=t1[ch]){
                return false;
            }
        }

        }

        
        return true;
        
    }
};