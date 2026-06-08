//1-1
class Solution {
public:
    int addDigits(int num) 
    {
        int sum=0;
        for(; num>=10; num=sum, sum=0)
            for(; num>0; num/=10)
                sum+=num%10;
        return num;
    }
};
