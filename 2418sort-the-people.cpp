//1-1
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for (int i = 1; i < heights.size(); i++) {
            if (heights[i] > heights[i-1]) {
                int newPos = 0;
                string tmpName = names[i];
                int tmpHeight = heights[i];
                for (int j = i-1; j >= 0; j--) {
                    if (tmpHeight <= heights[j]) {
                        newPos = j + 1;
                        break;
                    }
                    heights[j+1] = heights[j];
                    names[j+1] = names[j];
                }
                names[newPos] = tmpName;
                heights[newPos] = tmpHeight;
            }
        }
        return names;
    }
};
