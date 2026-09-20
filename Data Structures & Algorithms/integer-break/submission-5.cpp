class Solution {
public:
    int integerBreak(int n) {
        int res;
        if(n<=3){
            return n-1;
        }
        if(n%3==1){
            return pow(3,n/3-1)*4;
        }
        else if(n%3==0){
            return pow(3,n/3);

        }
        else{
            return pow(3,n/3)*2;
        }

    }
};