//1-2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zCount = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
            else {
                zCount++;
            }
        }
        while (zCount > 0) {
            ans.push_back(0);
            zCount--;
        }
        nums = ans;
    }
};
