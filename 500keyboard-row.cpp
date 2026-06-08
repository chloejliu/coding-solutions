//1-1
class Solution {
public:
    int findRow(char a) {
        string x = "qwertyuiopQWERTYUIOP";
        if (x.find(a) != string::npos) {
            return 1;
        }
        string y = "asdfghjklASDFGHJKL";
        if (y.find(a) != string::npos) {
            return 2;
        }
        else {
            return 3;
        }
    }
    vector<string> findWords(vector<string>& words) {
        for (int i = words.size()-1; i >= 0; i--) {
            for (int j = 0; j < words[i].length() - 1; j++) {
                if (findRow(words[i][j]) != findRow(words[i][j+1])) {
                    words.erase(words.begin() + i);
                    break;
                }
            }
        }
        return words;
    }
};
