class Solution {
    List<List<Integer>> soln = new LinkedList<>();
    int nums[];
    public List<List<Integer>> permute(int[] nums) {
        Arrays.sort(nums);
        this.nums=nums;
        boolean visited[] = new boolean[nums.length];
        backTrack(new LinkedList<>() , visited);
        return soln;
    }

    public void backTrack(List<Integer> list , boolean visited[]){
        if(list.size()==nums.length){
            soln.add(new LinkedList<>(list));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(visited[i]) continue;

            list.add(nums[i]);
            visited[i]=true;
            backTrack(list,visited);

            list.remove(list.size()-1);
            visited[i]=false;
        }
    }
}
