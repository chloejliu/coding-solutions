//1-19
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> potato;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            for(auto it=potato.begin(); it!=potato.end(); it++)
            {
                if(it->second==target-nums[i])
                {
                    ans.push_back(it->first);
                    ans.push_back(i);
                    return ans;
                }
            }
            potato.insert({i, nums[i]});  
        }
        return ans;       
    }
};
