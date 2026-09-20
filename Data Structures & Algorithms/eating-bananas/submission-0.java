class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int max=0,l=1,r=0,m,res=0;

        for(int num : piles)
        max=Math.max(max,num);

        r=max;
        while(l<=r){
            int time=0;
                m=(l+r)/2;

            for(int num : piles)
            time+=(int)Math.ceil((double)num/m);

            if(time<=h){
                r=m-1;
                res=m;
            }
            else
                l=m+1;

        }
        return res;        
    }
}
