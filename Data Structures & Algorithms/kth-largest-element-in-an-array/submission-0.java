class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        for(int num : nums)
            maxHeap.add(num);

            int count=1;

            while(count<k){
                maxHeap.poll();
                count++;
            }
            return maxHeap.poll();
        }
    }

