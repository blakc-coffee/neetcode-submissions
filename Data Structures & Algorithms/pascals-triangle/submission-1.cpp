class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i=0;i<numRows;i++){
            vector<int> temp ;
            for(int j=0;j<=i;j++){
                temp.push_back(nCr(i,j));
            }
            res.push_back(temp);
        }
        return res;
    }

    int nCr(int n,int r){
        if(r>n)  return 0;
        if(n==r || r==0 )   return 1;
        if(r==1) return n;

        if(r>n-r)  r=n-r;
        long res=1;
        for(int i=1;i<=r;i++)
            res=res*(n-i+1)/i;

        return int(res);
    }
};