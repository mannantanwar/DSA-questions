//question link : https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/?envType=daily-question&envId=2025-04-29
class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int n= nums.size();
            int maxi = INT_MIN;
            for( int i=0;i<n;i++){
                maxi = max(nums[i],maxi);
            }
            long long ans=0;
            int l =0,r=0,count=0;
            while(r<n){
                if(nums[r]==maxi)count++;
                while(count>=k){
                    ans+=n-r;
                    if(nums[l]==maxi)count--;
                    l++;
                }
                r++;
            }
            return ans;
        }
    };