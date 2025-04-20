// question link https://leetcode.com/problems/calculate-score-after-performing-instructions/
class Solution {
    public:
        long long calculateScore(vector<string>& ins, vector<int>& values) {
            long long score=0;
            vector<int>visited(ins.size(),0);
            for( int i=0;i<ins.size();i++){
                if(!visited[i]){
                    visited[i]=1;
                    if(ins[i]=="add")score+=values[i];
                    else i=i+values[i]-1;
                    if(i<0)break;
                }
                else break;
            }
            return score;
        }
    };