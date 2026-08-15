class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int rs = 0;
            int ls = 0;
            for(int j=0;j<i;j++){
                ls+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                rs+=nums[j];
            }
            ans.push_back(abs(ls-rs));


        }
        return ans;
    }
};