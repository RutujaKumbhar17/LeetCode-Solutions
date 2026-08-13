class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        vector<pair<int,int>> num(mp.begin(),mp.end());
        
        sort(num.begin(), num.end(), [](const auto &a, const auto &b) {
            if(a.second != b.second)
                return a.second < b.second;

            return a.first > b.first;
        });
        
        vector<int> ans;

        for(auto p : num) {
            for(int i = 0; i < p.second; i++) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};