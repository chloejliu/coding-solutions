//1-1
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(int i=columnTitle.length()-1, j=0; i>=0; i--, j++)
		    num+=int(pow(26, j)*(columnTitle[i]-'A'+1));
        return num;
    }
};
