class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>store;
        for(int i=1;i<=nums.size()+1;i++){
            store.push_back(k*i);

        }
        for(int x: store){
            if(find(nums.begin(), nums.end(), x) != nums.end()){
                
            }
            else{
                return x;
            }

            //cout<<x;
        }


        return 0;
    }
};