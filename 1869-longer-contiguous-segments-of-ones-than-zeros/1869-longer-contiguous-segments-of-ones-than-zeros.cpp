// class Solution {
// public:
//     bool checkZeroOnes(string s) {
            ////Solution 1
//         int cnt=0;
//         int bnt=0;
//         int o =0;
//         int z=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='1'){
//                 cnt+=1;
//             }
//             else{
//                 cnt=0;
//             }
//             o=max(o,cnt);
            


//         }
//         cout<<o;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='0'){
//                 bnt+=1;
//             }
//             else{
//                 bnt=0;
//             }
//             z=max(z,bnt);
            


//         }
//         cout<<z;
//         if(o>z){
//             return true;
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool checkZeroOnes(string s) {
        //Solution 2
        int cnt=0;
        int bnt=0;
        int o =0;
        int z=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt+=1;
                bnt=0;
            }
            else{
                cnt=0;
                bnt+=1;
            }
            o=max(o,cnt);
            z=max(z,bnt);
            

        }
        
        if(o>z){
            return true;
        }
        return false;
    }
};