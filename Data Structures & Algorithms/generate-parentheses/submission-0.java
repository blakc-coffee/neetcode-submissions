class Solution {
    List<String> soln = new ArrayList<>();
    int n;
    public List<String> generateParenthesis(int n) {
        this.n=n;
        if(n==0)
        return soln;
        String dummy = "";
        dfs(0,0,"");
        return soln;
    }

        public void dfs( int lb,int rb , String ptheses){
            if(rb==lb && lb==n){
                soln.add(ptheses);
                return;
            }
             if (lb < n)
        dfs(lb + 1, rb, ptheses + "(");

    if (rb < lb)
        dfs(lb, rb + 1, ptheses + ")");
        }

}
