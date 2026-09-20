class Solution {
    int stones[];
    public int lastStoneWeight(int[] stones) {
    PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        
        for(int num:stones){
            maxHeap.add(num);
        }

        while(maxHeap.size()>1){
            int t1=maxHeap.poll();
            int t2=maxHeap.poll();
            int d=Math.abs(t1-t2);
            if(d!=0)
            maxHeap.add(d);
        }
        if(maxHeap.isEmpty())
        return 0;
        else 
        return maxHeap.poll();
        
    }
}
