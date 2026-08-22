class Solution {
public:
    bool checkDivisibility(int n) {
        int n1=n;
        int sum = 0;
        int product = 1;
        int num= to_string(n).size();
        //cout<<num;
        for(int i=0;i<num;i++){
            int s = n%10;
            sum+=s;
            product*=s;
            n=n/10;
            cout<< sum<<" "<<product<<endl;
        }
        if(n1%(sum+product)!=0){
            return false;
        }

        return true;
       

        
    }
};