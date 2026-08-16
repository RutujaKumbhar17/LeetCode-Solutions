class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        const int MOD = 1e9 + 7;
        vector<int>nums(n,1);
        
        while(k){
            long long sum=0;
        
            for(int i=0;i<n;i++){
            
                sum=(sum+nums[i])%MOD;
                nums[i]=sum;

            }
            k--;
            
        }
        return nums[n-1];
        
        
    }
};