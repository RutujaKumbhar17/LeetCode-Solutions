class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // int sum=0;
        vector<int>newNums;
        if(nums.size()==1){
            return nums[0];
        }


        while(nums.size()>1){
            newNums.clear();
            for(int i =0;i<nums.size()-1;i++){
                int sum=((nums[i]+nums[i+1])%10);
                newNums.push_back(sum);
            }
            nums=newNums;
        }
        return nums[0];    
        
    }
};