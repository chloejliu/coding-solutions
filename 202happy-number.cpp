//1-2
class Solution {
public:
    bool isHappy(int n) 
    {
        int sum=0;
        unordered_set<int> repeat;
        for(; n!=1; n=sum, sum=0)
        {
            for(; n>0; n/=10)
                sum+=pow(n%10, 2);
            if(repeat.find(sum)==repeat.end())
                repeat.insert(sum);
            else
                return false;
        }
        return true;
    }
};
