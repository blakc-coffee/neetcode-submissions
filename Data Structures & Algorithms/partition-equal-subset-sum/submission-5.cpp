class Solution {
    vector<int > nums;
    unordered_set<int> hset;
    int sum=0;
public:
    bool canPartition(vector<int>& nums) {
        this->nums=nums;
        for(int x: nums)
            sum+=x;
        
        if(sum%2!=0)
        return false;
        sum/=2;
        hset.insert(0);
        for(int x: nums){
           for(int y:hset){
            if(x+y==sum)
            return true;
            hset.insert(x+y);

           }
            
        }

        return false;
    }

};
