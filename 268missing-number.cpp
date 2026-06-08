//1-1
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int i=0;
        while(find(nums.begin(), nums.end(), i) != nums.end())    
            i++;
        return i;
    }
};
