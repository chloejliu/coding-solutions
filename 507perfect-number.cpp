//1-1
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        set<int> divisors;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                divisors.insert(i);
            }
        }
        for (int x : divisors) {
            sum += x;
        }
        return sum == num;
    }
};
