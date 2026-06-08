//1-1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> potato;
        for(int i=0; i<nums.size(); i++){
            potato[nums[i]]++;
            if(potato[nums[i]]==2)
                potato.erase(nums[i]);
        }
        for(auto& it : potato)
            if(it.second == 1)
                return it.first;
        return 0;
    }
};
