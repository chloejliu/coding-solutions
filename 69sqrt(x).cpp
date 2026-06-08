//1-2
class Solution {
public:
    int mySqrt(int x) {
        long i=0;
        while(i*i<=x) i++;
        i--;
        return i;
    }
};
