class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //SOLUTION 1:
        // set<int>s1(nums1.begin(),nums1.end());
        // set<int>s2 (nums2.begin(),nums2.end());
        // vector<int>vec;
        // for(int x: s1){
        //     if(s2.find(x) !=s2.end()){
        //         vec.push_back(x);
        //     }
        // }
        // return vec;

        //SOLUTION 2:
        unordered_map<int,int>n1;
        unordered_map<int,int>n2;
        vector<int>ans;
        for(int x:nums1){
            n1[x]++;
        }
        for(int x:nums2){
            n2[x]++;

        }
        for(int x: nums1){
            if(n1[x] > 0 && n2[x] > 0) {
                ans.push_back(x);
                n1[x] = 0;
            }
        }
        return ans;
        
    }
};