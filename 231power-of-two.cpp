//1-3
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(; n>0; n/=2)
            if(n==1)
                return true;
            else if(n%2==1)
                return false;
        if(n<=0)
            return false;
        return true;        
    }
};
