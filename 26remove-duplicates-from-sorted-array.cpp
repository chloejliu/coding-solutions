//1-1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curVal = nums[nums.size()-1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] == curVal) {
                nums.erase(nums.begin() + i);
            }
            else {
                curVal = nums[i];
            }
        }
        return nums.size();
    }
};
