class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mp;
        for(auto ch : s){
            mp[ch]++;
        }
        vector<pair<char,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });
        string ans;
        for(auto p: vec){
            for( int i=0;i<p.second;i++){
                ans+=p.first;
            }
        }
        return ans;


    }
};