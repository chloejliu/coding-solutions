//1-1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int sum=0, i=0, max=0;
        for(; i<accounts.size(); i++, sum=0)
        {
            for(int j=0; j<accounts[i].size(); j++)
                sum+=accounts[i][j];
            if(sum>=max)
                max=sum;
        }
        return max;
    }
};
