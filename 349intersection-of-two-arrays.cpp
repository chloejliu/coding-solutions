//1-1
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> potato;
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++)
        {
            potato[nums1[i]]=1000;
            if(potato[nums1[i]]>1000)
                potato[nums1[i]]=1000;
        }
        for(int i=0; i<nums2.size(); i++)
        {
            potato[nums2[i]]++;
            if(potato[nums2[i]]<1000)
                potato.erase(nums2[i]);
            else if(potato[nums2[i]]==1001)
                ans.push_back(nums2[i]);
        }
        return ans;        
    }
};
