class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int l=0,r=0,len=s1.length();
        int[] alph = new int[26];
        boolean result=true;

        for(char c : s1.toCharArray())
        alph[c-'a']--;

        while(l<=r && r<s2.length()){
            result = true;
            char ch = s2.charAt(r);
            alph[ch-'a']++;

            if(r-l+1 > len){
                alph[s2.charAt(l)-'a']--;
                l++;
            }

            for(int n :alph ){
                if(n!=0)
                result = false;
            }
            
            if(result)
            return result;
            r++;

        }

        return result;
        
    }
}
