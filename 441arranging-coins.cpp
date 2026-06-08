//1-4
class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        long sum=0;
        for(; sum<=n; i++)
            sum+=i;
        if(sum!=n)
            return i-2;
        else
            return i-1;
    }
};
