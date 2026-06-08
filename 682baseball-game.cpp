//1-1
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D") {
                scores.push(scores.top() * 2);
            }
            else if (operations[i] == "+") {
                int tmp = scores.top();
                scores.pop();
                int res = tmp + scores.top();
                scores.push(tmp);
                scores.push(res);
            }
            else if (operations[i] == "C") {
                scores.pop();
            }
            else {
                scores.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while (!scores.empty()) {
            sum += scores.top();
            scores.pop();
        }
        return sum;
    }
};
