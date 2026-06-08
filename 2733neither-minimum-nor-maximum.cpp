//1-1
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        if (s.size() <= 2) {
            return -1;
        }
        else {
            s.erase(*min_element(s.begin(), s.end()));
            s.erase(*max_element(s.begin(), s.end()));
        }
        return *s.begin();
    }
};
