class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i,j,m=matrix.length,n=matrix[0].length;
        
        boolean found=false;

        for(i=0;i<m;i++){
            if (target < matrix[i][0] || target > matrix[i][n - 1])
                continue;

            int l=0,r=n-1;
            
            while(l<=r){
                int mid=(l+r)/2;
                    
                    if(target==matrix[i][mid])
                    return true;

                    else if(target<matrix[i][mid])
                        r=mid-1;

                    else 
                        l=mid+1;
                    
            }
        }
        return false;
    }
}
