class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s(nums.begin(), nums.end());

        vector<int> num(s.begin(), s.end());

        if (num.size() < 3)
            return num.back();

        return num[num.size() - 3];
    }
};