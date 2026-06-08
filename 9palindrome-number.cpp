//1-4
class Solution {
public:
    bool isPalindrome(int x) {
    if(x>=0)
    {
        int cnt=0;
        for(int y=x; y>0; y/=10)
            cnt++;
        int sum=0;
        for(int i=cnt-1, y=x; y>0; y/=10, i--)
        {
            if(i==9)
                if(y%10>2)
                    return false;
                else if(y%10==2)
                    if((y/10)%10>1)
                        return false;
                    else if((y/10)%10==1)
                        if((y/100)%10>4)
                            return false;
                        else if((y/100)%10==4)
                            if((y/1000)%10>7)
                                return false;
                            else if((y/1000)%10==7)
                                if((y/10000)%10>4)
                                    return false;
                                else if((y/100000)%10==4)
                                    if((y/10)%10>=8)
                                        return false;
            sum+=pow(10, i)*(y%10);
        }
        if(sum==x)
            return true;
        else
            return false;
    }
    else
        return false;
    }
};
