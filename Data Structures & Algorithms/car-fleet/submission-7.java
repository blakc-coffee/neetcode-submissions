class Solution {
    public int carFleet(int target, int[] position, int[] speed) {
        Map<Integer,Integer> map = new HashMap<>();
        int l=position.length,fc=0;
        Stack<Double> stack = new Stack<>();
        double time = 0;
        for(int i=0;i<l;i++)
            map.put(position[i],speed[i]);
        
        Arrays.sort(position);

        for(int i =l-1 ; i>=0;i--){
            time = (target-position[i])*1.0/map.get(position[i]);

               if(stack.isEmpty()){
               stack.push(time);
               fc++;
               }

               else if(time>stack.peek()){
               fc++;
               stack.push(time);
               }

               else{
                //stack.pop();
                //stack.push(time);
               }
            
        }
    
        return fc;
    }

}