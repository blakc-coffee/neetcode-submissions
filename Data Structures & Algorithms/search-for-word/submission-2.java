class Solution {
    int row,col;
    char board[][];
    String word;
    HashSet<Integer> set = new HashSet<>();
    public boolean exist(char[][] board, String word) {
        this.board=board;
        this.word=word;
        row=board.length;
        col=board[0].length;

        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                set.clear();
                if(wordSearch(0,i,j)) return true;
            }
        }
        return false;        
    }

    public boolean wordSearch(int i,int r,int c){
            if(word.length()==i)
            return true;
            
            if(r<0 || c<0 || r>=row || c>=col
            || board[r][c]!=word.charAt(i) 
            ||set.contains(r*col + c))
            return false;

             

            set.add(r*col+ c);
            boolean found = (wordSearch(i+1, r+1, c) ||
                         wordSearch(i+1, r, c+1) ||
                         wordSearch(i+1, r-1, c) ||
                         wordSearch(i+1, r, c-1));

            set.remove(r*col+c);
            return found;

    }
}