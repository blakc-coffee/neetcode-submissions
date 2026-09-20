class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp ;
            for(int j=0;j<=rowIndex;j++){
                temp.push_back(nCr(rowIndex,j));
            }
        return temp;
        
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