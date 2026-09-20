class Solution {
    vector<int> matchsticks;
    int t=0;
    vector<int> sq=vector<int>(4,0);
public:
    bool makesquare(vector<int>& matchsticks) {
        this->matchsticks=matchsticks;
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        for(int x:matchsticks){
            t+=x;
        }
        if(t%4!=0)
        return false;
        t=t/4;
        if(matchsticks[0]>t)
        return false;

        return dp(0);
    }

    /*bool dp(){
        for(int i=0;i<matchsticks.size();i++){
            //i to iterate through the matchsticks
            for(int j=0;j<4;j++){
                //j to iteraate through teh sq
                if(sq[j] + matchsticks[i] >t)
                continue;
                if(i==matchsticks.size()-1)
                return true;
                sq[j]+=matchsticks[i];
                break;
            }
        }
        return false;
    }
    */
    bool dp(int i){
        if(i==matchsticks.size())
            return true;
            for(int j=0;j<4;j++){
                //j to iteraate through teh sq                
                if(sq[j] + matchsticks[i] >t)
                continue;
                sq[j]+=matchsticks[i];
                if(dp(i+1)) return true;
                else
                sq[j]-=matchsticks[i];
            }
        return false;
    }
};