//1-1
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evenCnt = 0;
        int oddCnt = 0;
        for (int i = 0; i < position.size(); i++) {
            if (position[i] % 2 == 0) {
                evenCnt++;
            }
            else {
                oddCnt++;
            }
        }
        if (evenCnt > oddCnt) {
            return oddCnt;
        }
        return evenCnt;
    }
};
