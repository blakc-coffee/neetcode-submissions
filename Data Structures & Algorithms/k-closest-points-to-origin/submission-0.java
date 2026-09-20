class Solution {
    public int[][] kClosest(int[][] points, int k) {
    PriorityQueue<int []> maxHeap = new PriorityQueue<>(new Comparator<int []>(){
        public int compare(int a[],int b[]){
        return (b[0]*b[0] + b[1]*b[1]) - (a[0]*a[0] + a[1]*a[1]);
        }
    }

    );

    for(int point[] : points){
        maxHeap.add(point);
        if(maxHeap.size()>k)
        maxHeap.poll();
    }
    

    int[][] soln = new int[k][2];
    
    for(int i=0;i<k;i++){
        soln[i]=maxHeap.poll();
    }
    return soln;
    }
}
