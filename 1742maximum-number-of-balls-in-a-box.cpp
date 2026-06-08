//1-1
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int max = 0;
        unordered_map<int, int> balls;
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0;
            int tmp = i;
            while (tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            if (balls.find(sum) == balls.end()) {
                balls[sum] = 1;
                if (balls[sum] > max) {
                    max = balls[sum];
                }
            }
            else {
                balls[sum]++;
                if (balls[sum] > max) {
                    max = balls[sum];
                }
            }
        }
        return max;
    }
};
