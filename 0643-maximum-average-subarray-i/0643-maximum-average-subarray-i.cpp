class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double max_avg = 0;
        double sum= 0;

        for(int i=0; i<k; i++){
            sum+=nums[i];
            
        }
        
        max_avg=sum/k;
        
        double ans = max_avg;
        cout<<"First "<<ans<<endl;

        for(int i=k; i<n; i++){
            sum+=nums[i];
            sum-=nums[i-k];
            max_avg =sum/k;
            cout<<i<<" "<<max_avg<<endl;
            ans= max(ans,max_avg);
        }
        return ans;
        
    }
};