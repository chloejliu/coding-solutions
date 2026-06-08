//1-1
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        for(; n>1; n/=4)
            if(n%4!=0)
                return false;
        return true;
    }
};
