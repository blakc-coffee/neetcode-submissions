class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0,n=stones.size();

        for(int stone: stones)
        sum+=stone;

        vector<int> ks(sum/2+1,0);

        for(int i=0;i<n;i++){
            for(int j=sum/2;j>=0;j--){
                if(j-stones[i]>=0)
                ks[j]=max(ks[j],ks[j-stones[i]] + stones[i]);
            }
        }

        return sum-2*ks[sum/2];


        
        
    }
};