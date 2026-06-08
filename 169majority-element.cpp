//1-11
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> potato;
        int i=0;
        for(; i<nums.size(); i++){
            potato[nums[i]]++;
            if(potato[nums[i]]>nums.size()/2)
                return nums[i];
        }
        return nums[i];
    }
};
