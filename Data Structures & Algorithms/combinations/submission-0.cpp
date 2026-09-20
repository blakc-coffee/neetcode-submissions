class Solution {
    int n,k;
    vector<vector<int>> res;
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>  temp;
        this->n=n;
        this->k=k;
        backTrack(temp,1);
        return res;
    }

    void backTrack(vector<int> temp ,int i){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        if(i>n)
        return;

        temp.push_back(i);
        backTrack(temp,i+1);
        temp.pop_back();
        backTrack(temp,i+1);

    }
};