class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int l = 0;
        int r = 0;

        for (int k = 1; k <= n; k += 2) {
            int windowSum = 0;
            r = k;

            for (int i = 0; i < k; i++) {
                windowSum += arr[i];
            }

            ans += windowSum;

            for (int i = k; i < n; i++) {
                windowSum -= arr[l];
                windowSum += arr[r];
                ans += windowSum;
                l++;
                r++;
            }

            l = 0;
        }

        return ans;
    }
};