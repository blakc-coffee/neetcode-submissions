class Solution {
    public int maxArea(int[] height) {
        int i=0,l=height.length,j=l-1;
        int water=0;
        while(i<j){
            int temp=0;
            temp=(j-i)*Math.min(height[i],height[j]);
            if(temp>water)
            water = temp;


            if(height[j]>height[i]) i++;

            else j--;
            
        }
        return water;
    }
}