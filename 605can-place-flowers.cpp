//1-3
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (i == 0) {
                if (flowerbed[i] == 0) {
                    if (flowerbed.size() == 1) {
                        cnt = 1;
                        break;
                    }
                    else if (flowerbed[i+1] == 0) {
                        cnt++;
                        flowerbed[i] = 1;
                        i++;
                    } 
                }
            }
            else if (i == flowerbed.size()-1) {
                if (flowerbed[i-1] == 0 && flowerbed[i] == 0) {
                    cnt++;
                    break;
                }
            }
            else {
                if (flowerbed[i+1] == 0 && flowerbed[i] == 0 && flowerbed[i-1] == 0) {
                    cnt++;
                    flowerbed[i] = 1;
                    i++;
                }
            }
        }
        return cnt >= n;
    }
};
