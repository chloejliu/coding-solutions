//1-1
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=1, sum=nums[0];
        vector<int> ans;
        ans.push_back(sum);
        for(; i<nums.size(); i++)
        {   
            sum+=nums[i];
            ans.push_back(sum);
        }
        return ans;      
    }
};
