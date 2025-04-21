// question link : https://leetcode.com/problems/count-the-hidden-sequences/?envType=daily-question&envId=2025-04-21
class Solution {
    public:
        int numberOfArrays(vector<int>& diff, int lower, int upper) {
            long sum = 0, maxi = 0, mini = 0;
            for (int i : diff) {
                sum += i;
                maxi = max(maxi, sum);
                mini = min(mini, sum);
            }
            return max(0L, upper - lower - maxi + mini + 1);
        }
    };