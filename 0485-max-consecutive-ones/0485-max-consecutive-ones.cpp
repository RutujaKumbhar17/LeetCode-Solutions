class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int t=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1){
                cnt+=1;
            } 
            else{
                cnt=0;
            } 
            t=max(t,cnt);


        }

        
        return t;
    }
};