class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i=0,j=0,ans=0,temp=0;
        HashSet<Character> set = new HashSet<>(); 

        while(j<s.length() && i<=j){
            char ch = s.charAt(j);
            if(!set.contains(ch)){
                set.add(ch);
                j++;
                temp++;
            }
            else{
                ans=Math.max(ans,temp);
                while(set.contains(ch)){
                    char c = s.charAt(i);
                    set.remove(c);
                    temp--;
                    i++;
                }
            }

        }
            return Math.max(ans,temp);        
    }
}