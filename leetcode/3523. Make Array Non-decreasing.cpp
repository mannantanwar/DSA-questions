// question link : https://leetcode.com/problems/make-array-non-decreasing/
class Solution {
    public:
        int maximumPossibleSize(vector<int>& nums) {
            int prev =nums[0];
            int count =0;
            for( int i=1;i<nums.size();i++){
                if(nums[i]>=prev){
                    prev=nums[i];
                    count++;
                }
                else continue;
            }
            return count+1;
        }
    };