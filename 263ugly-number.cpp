//1-4
class Solution {
public:
    bool isUgly(int n) 
    {
        if(n==1)
            return true;
        for(long i=2; i*i<=n; i++)
            if(n%i==0)
            {
                n/=i;
                if(i!=2 && i!=3 && i!=5)
                    return false;
                i=1;
            }
        if(n!=2 && n!=3 && n!=5)
            return false;
        return true;
    }
};
