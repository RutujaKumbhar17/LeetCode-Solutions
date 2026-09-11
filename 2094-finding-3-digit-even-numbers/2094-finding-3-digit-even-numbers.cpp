class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        // set<vector<int>>ans;
        // for(int i=0;i<digits.size();i++){
        //     for(int j=0;j<digits.size();j++){
        //         for(int k=0;k<digits.size();k++){
        //             if((i==j)|| (j==k) || (i==k)){
        //                 continue;
        //             }

        //             if(digits[i]==0){
        //                 continue;
        //             }

        //             if(digits[k]%2!=0){
        //                 continue;

        //             }

        //             vector<int> s={digits[i],digits[j],digits[k]};
        //             ans.insert(s);
        //         }
        //     }
        // }
        // vector<int>anss;
        // for(auto x: ans){
        //     int num=x[0]*100+ x[1]*10+x[2];
        //     anss.push_back(num);
        // }
        // return anss;

        vector<int> cnt(10, 0);

        for(int x : digits)
            cnt[x]++;

        set<int> res;

        for(int a = 1; a <= 9; a++) {
            for(int b = 0; b <= 9; b++) {
                for(int c = 0; c <= 8; c += 2) {

                    if(cnt[a] == 0)
                        continue;

                    cnt[a]--;

                    if(cnt[b] == 0) {
                        cnt[a]++;
                        continue;
                    }

                    cnt[b]--;

                    if(cnt[c] == 0) {
                        cnt[b]++;
                        cnt[a]++;
                        continue;
                    }

                    cnt[c]--;

                    int val = a * 100 + b * 10 + c;
                    res.insert(val);

                    cnt[c]++;
                    cnt[b]++;
                    cnt[a]++;
                }
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};