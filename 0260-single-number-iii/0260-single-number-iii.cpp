class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second==1){
                v.push_back(x.first);
            }
        }
        return v;
        
    }
};