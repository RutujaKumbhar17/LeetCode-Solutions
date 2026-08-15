class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x: nums){
            if(mp[x]==1){
                sum+=x;
            }
        }
        return sum;
    }
};