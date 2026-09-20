class Solution {
public:
    int integerBreak(int n) {
        int res;
        if(n<=3){
            res= n-1;
        }
        else if(n%3==1){
            res= pow(3,n/3-1)*4;
        }
        else if(n%3==0){
            res= pow(3,n/3);

        }
        else{
            res= pow(3,n/3)*2;
        }

        return res;

    }
};