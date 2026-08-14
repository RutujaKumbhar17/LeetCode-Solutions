class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0;
        int sum2 =0;
        for(int i = 0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                // cout<<mat[i][j]<<" ";
                if(i==j){
                    sum1+=mat[i][j];
                }            


            }
            // cout<<endl;
        }
        int j=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            if(i!=j){
                sum2+=mat[i][j];
            
            }
            j--; 
        }
        return sum1+sum2; 
    }
};