class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        for(int i = 0; i < nums.size(); i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int n=0;
        n=nums.size()/2;
        int p=0;
        p=nums.size()-n;
        for(int i=0;i<p;i++){
            ans+=(nums[i]*nums[i]);
        }
        for(int i=p;i<nums.size();i++){
            ans-=(nums[i]*nums[i]);
        }
        return ans;
    }
};