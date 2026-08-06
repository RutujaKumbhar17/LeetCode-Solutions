class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int mini = nums[0];
        int maxi = nums.back();

        vector<int> ans;
        int j = 0;

        for (int i = mini; i <= maxi; i++) {

            if (j < nums.size() && nums[j] == i) {
                j++;
            }
            else {
                ans.push_back(i);
            }
        }

        return ans;
    }
};