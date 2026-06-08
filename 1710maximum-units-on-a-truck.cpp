//1-2
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int> nums;
        for (int i = 0; i < boxTypes.size(); i++) {
            while (boxTypes[i][0] > 0) {
                boxTypes[i][0]--;
                nums.push_back(boxTypes[i][1]);
            }
        }
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = nums.size() - 1; i >= 0 && truckSize > 0; truckSize--, i--) {
            sum += nums[i];
        }
        return sum;
    }
};
