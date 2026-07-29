class Solution {
public:
    int passwordStrength(string password) {
        set<char>p(password.begin(),password.end());
        int sum=0;
        for(char ch :p){
            if(islower(ch)){
                sum+=1;

            }
            else if(isupper(ch)){
                sum+=2;
            }
            else if(isdigit(ch)){
                sum+=3;
            }
            else{
                sum+=5;
            }
        }
        return sum;
    }
};