class Solution {
    vector<vector<bool>> visited;
    vector<vector<char>> grid;
    int m,n;
public:
    int numIslands(vector<vector<char>>& grid) {
        this->grid=grid;
        int count=0;
        m=grid.size();
        n=grid[0].size();
        vector<vector<int>> ilen(m,vector<int> (n,0));
        visited.resize(m,vector<bool> (n,false));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j]){
                int size=isize(i,j);
                if(size>0)
                count++;
                }
            }
        }

        return count;
    }

    int isize(int i,int j){
        int u=0,l=0,r=0,d=0;
        if(grid[i][j]=='0' || visited[i][j])
        return 0;
        else{
            visited[i][j]=true;
            if(i-1>=0)
            u=isize(i-1,j);
            if(i+1<m)
            d=isize(i+1,j);
            if(j-1>=0)
            l=isize(i,j-1);
            if(j+1<n)
            r=isize(i,j+1);

            return 1+u+d+l+r;
        }
    }
};
