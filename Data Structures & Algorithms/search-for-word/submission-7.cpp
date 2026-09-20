#include <bits/stdc++.h>
#include <unordered_set>
class Solution {
    vector<vector<char>> board;
    string word;
    unordered_set<int> hset;
    int n,m;
public:
    bool exist(vector<vector<char>>& board, string word) {
        this->board = board;
        m=board[0].size();
        n=board.size();
        this->word=word;
        string temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(backTrack(temp,i,j,0))
                return true;
            }
        }
        return false;
    }

bool backTrack(string temp,int i,int j,int index){
        if(temp==word){
            return true;
        }
        else if(i>=n || j>=m || i<0 || j<0 || 
        index>=word.size() || word[index]!=board[i][j] 
        || hset.count(j*n +i)==1 )
        return false; 
        else{
            char ch = board[i][j];
            temp.push_back(ch);
            index++;
            hset.insert(j*n+i);
            

            bool found =( backTrack(temp,i+1,j,index) ||
                    backTrack(temp,i-1,j,index) ||
                    backTrack(temp,i,j+1,index) ||
                    backTrack(temp,i,j-1,index) );

            hset.erase(j*n+i);
            return found;
            
        }
        
    }
};
