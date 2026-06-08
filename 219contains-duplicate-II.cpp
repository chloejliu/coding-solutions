//1-2
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> potato;
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            potato[nums[i]]++;
            if(potato[nums[i]]==2)
                for(; j<i; j++)
                    if(nums[j]==nums[i])
                        if(abs(i-j)<=k)
                            return true;
                        else
                            for(; j<nums.size(); j++)
                                if(nums[j]==nums[i])
                                    if(abs(i-j)<=k && j!=i)
                                        return true;
        }
        return false;        
    }
};
