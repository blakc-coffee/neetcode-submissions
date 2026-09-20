class Solution {
    int nums[];
    int target;
    List<List<Integer>> soln = new ArrayList<>();
    public List<List<Integer>> combinationSum(int[] nums, int target) {
        this.nums=nums;
        this.target=target;
        List<Integer> list = new ArrayList<>();
        backTrack(0,0,list);
        return soln;
    }

    void backTrack(int i,int sum,List<Integer> list){
        if(sum==target){
            soln.add(new ArrayList<>(list));
            return;
        }
        if(i<nums.length && sum<target){
            int temp = nums[i];
            list.add(temp);
            backTrack(i,sum+temp,list);
            list.remove(list.size()-1);
            backTrack(i+1,sum,list);
        }
    }
}
