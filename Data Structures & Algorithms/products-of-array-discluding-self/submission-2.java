class Solution {
    public int[] productExceptSelf(int[] nums) {
        int prod=1,l=nums.length,zc=0;
        int res[] = new int[l];


        for(int i =0;i<l;i++){
            if(nums[i]!=0){
            prod*=nums[i];
            }
            else
            zc++;
        }
        
        for(int i=0;i<l;i++){
            if(zc==0)
                res[i]=prod/nums[i];
                else{
                    if(zc>1)
                    prod=0;

                    if(nums[i]==0)
                    res[i]=prod;
                    else
                    res[i]=0;
                }
        }
        return res;
    }
}  
