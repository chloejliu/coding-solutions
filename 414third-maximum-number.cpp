//1-3
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        if (s.size() >= 3) {
            s.erase(*max_element(s.begin(), s.end()));
            s.erase(*max_element(s.begin(), s.end()));
        }
        return *max_element(s.begin(), s.end());
    }
};
