//1-1
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int cnt = 0;
        set<int> values;
        for (int i = 0; i < nums.size(); i++) {
            values.insert(nums[i]);
        }
        int distinctValues = values.size();
        for (int i = 0; i <= nums.size()-distinctValues; i++) {
            set<int> tmp;
            int start = i;
            for (; start < i + distinctValues; start++) {
                tmp.insert(nums[start]);
                // cout << "nums[start] " << nums[start] << endl << "start: " << start << endl;
            }
            while (tmp.size() != distinctValues && start < nums.size()) {
                tmp.insert(nums[start]);
                start++;
            }
            if (tmp.size() == distinctValues) {
                cnt += nums.size() - start + 1;
                // cout << i << " " << start << endl;
            }
            else {
                return cnt;
            }
        }
        return cnt;
    }
};
