class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums[0];
        int l=nums.back();
        while(l!=0){
            int temp=l;
            l=s%l;
            s=temp;
        }
        return s;
        
    }
};