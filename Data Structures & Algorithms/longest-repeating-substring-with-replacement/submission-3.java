class Solution {
    public int characterReplacement(String s, int k) { 
        HashMap<Character,Integer> map = new HashMap<>();
        int temp=0,l=0,r=0;

        while(r>=l && r<s.length()){
            char ch = s.charAt(r);
            map.put(ch,map.getOrDefault(ch,0)+1);
            r++;

            int tmax=0;
            for(char key:map.keySet())
            tmax=Math.max(tmax,map.getOrDefault(key,0));

            if(r-l-tmax>k){
                char lch = s.charAt(l);
                map.put(lch,map.getOrDefault(lch,0)-1);
                l++;
            }
            temp=Math.max(r-l,temp);
        }

            return Math.max(r-l,temp);
        
    }
}
