/1-11
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int k=digits.size()-1;
        for(; digits[k]==9; k--)
        {
            digits[k]=0;
            if(k==0)
            {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        digits[k]++;
        return digits;
    }
};
