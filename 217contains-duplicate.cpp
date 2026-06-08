//1-5
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> potato;
        int val=0;
        for(int i=0; i<nums.size(); i++)
        {
            potato[nums[i]]++;
            if(potato[nums[i]]==2)
                return true;
        }
        return false;        
    }
};
