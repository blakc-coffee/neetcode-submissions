class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max=0,len=0,left=0,right=0;
        HashSet<Character> set = new HashSet<>();

            while(right>=left && right<s.length()){
                char ch = s.charAt(right);

                if(!set.contains(ch)){  
                    set.add(ch);    
                    len++;  
                    right++;    
                }
                else{
                    max=Math.max(len,max);
                    while(set.contains(ch)){
                        set.remove(s.charAt(left));
                        left++;
                        len--;
                    }                 
                }
            }
        
        return Math.max(max,len);
        
    }
}
