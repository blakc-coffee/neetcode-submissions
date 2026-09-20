class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> amt (amount +1,INT_MAX);
        amt[0]=0;

        for(int c:coins){

            for(int i =1;i<=amount;i++){
            if(c>i)
            continue;
            if(amt[i-c]==INT_MAX)
            continue;
            amt[i]=min(amt[i],amt[i-c]+1);
            }   
        }
        if(amt[amount]==INT_MAX)
        return -1;
        return amt[amount];
        
    }
};
