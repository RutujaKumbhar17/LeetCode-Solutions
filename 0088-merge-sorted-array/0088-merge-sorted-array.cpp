class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>udi;
        for(int i=0;i<m;i++){
            udi.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            udi.push_back(nums2[i]);

        }
        sort(udi.begin(),udi.end());
        nums1=udi;

        
    }
};