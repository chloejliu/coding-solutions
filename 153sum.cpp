//1-7
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int left = 0; left < n; left++) {
            if (left > 0 && nums[left-1] == nums[left]) {
                continue;
            }
            int right = n - 1;
            for (int mid = left + 1; mid < right; mid++) {
                if (mid > left + 1 && nums[mid - 1] == nums[mid]) {
                    continue;
                }
                while (mid < right) {
                    if (nums[left] + nums[mid] + nums[right] == 0) {
                        ans.push_back({nums[left], nums[mid], nums[right]});
                        break;
                    }
                    else if (nums[mid] + nums[right] < -nums[left]) {
                        mid++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};
