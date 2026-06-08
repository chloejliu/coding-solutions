//1-4
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool works=true;
        int i=0;
        if(strs.size()==1)
            return strs[0].substr(0, strs[0].size());
        for(; i<=strs[0].size() && works; i++)
            for(int j=0; j<strs.size()-1; j++)
                if(strs[j].substr(0, i)!=strs[j+1].substr(0, i))
                {
                    works=false;
                    break;
                }
        if(!works)
            i--;
        return strs[0].substr(0, i-1);
    }
};
