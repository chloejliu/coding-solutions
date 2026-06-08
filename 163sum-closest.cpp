//1-2
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;
        int bestSumDifference = INT_MAX;
        int curSum;
        for (int i = 0; i < nums.size() - 2; i++) {
            curSum = nums[i];
            for (int j = i + 1; j < nums.size() - 1; j++) {
                curSum += nums[j];
                for (int k = j + 1; k < nums.size(); k++) {
                    curSum += nums[k];
                    if (abs(target - curSum) < bestSumDifference) {
                        bestSumDifference = abs(target - curSum);
                        ans = curSum;
                    }
                    curSum -= nums[k];
                }
                curSum -= nums[j];
            }
        }
        return ans;
    }
};
