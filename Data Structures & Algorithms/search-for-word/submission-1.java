class Solution {
    char board[][];
    String word;
    int row,col;
    HashSet<Integer> set = new HashSet<>();
    public boolean exist(char[][] board, String word) {
        this.board=board;
        this.word=word;
        
        row = board.length;
        col = board[0].length;

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                set.clear();
                if (wordSearch(  0, r, c)) return true;
            }
        }
        return false;
    }

    boolean wordSearch( int index, int r, int c) {
        if (index == word.length()) return true;         

        if (r < 0 || c < 0 || r >= row || c >= col 
            || word.charAt(index) != board[r][c] 
            ||set.contains(r * col + c))
            return false;

        set.add(r * col + c);                             

        boolean found = (wordSearch(index+1, r+1, c) ||
                         wordSearch(index+1, r, c+1) ||
                         wordSearch(index+1, r-1, c) ||
                         wordSearch(index+1, r, c-1));

        set.remove(r * col + c);                          
        return found;
    }
}