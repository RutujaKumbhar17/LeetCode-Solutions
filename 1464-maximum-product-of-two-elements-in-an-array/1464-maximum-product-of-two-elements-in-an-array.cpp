class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int pro = (nums[nums.size() - 1] - 1) *(nums[nums.size() - 2] - 1);

        return pro;
    }
    
};