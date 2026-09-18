class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans=nums;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
            
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
    
};