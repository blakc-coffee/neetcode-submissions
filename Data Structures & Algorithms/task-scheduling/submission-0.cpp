#include <bits/stdc++.h>
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> hash;
        queue<pair<pair<int,char>,int>> q;
        int count=0;
        for(char ch: tasks)
            hash[ch]++;
        
        for(auto& x : hash)
            pq.push({x.second,x.first});
        while(!pq.empty() || !q.empty()){
            count++;
            while(!q.empty() && count==q.front().second){
                pq.push({q.front().first.first,q.front().first.second});
                q.pop();
            }
            if(!pq.empty()){
                pair<int,char> t = pq.top();
                t.first--;
                pq.pop();
                if(t.first>0)
                q.push({{t.first,t.second},count+n+1});
            }
        }
        return count;
    }
};