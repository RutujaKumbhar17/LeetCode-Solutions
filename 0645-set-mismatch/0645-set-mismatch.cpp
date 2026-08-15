class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int x: nums){
            mp[x]++;
        }
        for(auto x: nums){
            if(mp[x]==2){
                vec.push_back(x);
                break;
            }
        }
        for(int i = 1; i <= nums.size(); i++) {
            if(mp[i] == 0) {
                vec.push_back(i);
                break;
            }
        }
        return vec;
        
    }
};