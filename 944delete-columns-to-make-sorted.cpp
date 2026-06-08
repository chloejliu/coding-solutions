//1-4
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        string a[100];
        int n=0, ans=0;
        for(int i=strs.size()-1; i>=0; i--, n++)
            a[n]=strs[n];
        n--;
        int length=a[0].length();
        for(int j=0; j<length; j++)
            for(int i=0; i<n; i++)
            {
                if(int(a[i][j])>int(a[i+1][j]))
                {
                    ans++;
                    cout << a[i][j] << endl << a[i+1][j] << endl;
                    break;
                }
            }
        return ans;
    }
};
