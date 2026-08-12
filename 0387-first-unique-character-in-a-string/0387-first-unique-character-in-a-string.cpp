class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        vector<char>vec;

        for(char ch :s){
            mp[ch]++;
        }
        for(char ch: s){
            if(mp[ch]==1){
                vec.push_back(ch);
            }
        }
        for(int i =0;i<s.size();i++){
            if(find(vec.begin(), vec.end(), s[i]) != vec.end()) {
               return i;
            }
        }
        return -1;
        
    }
};