class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char>vec;
        for(int i=0;i<s.size();i++){
            if(find(vec.begin(),vec.end(),s[i])==vec.end()){
                vec.push_back(s[i]);
            }
            else{
                return s[i];
            }
        }
        return '0';
    }
};