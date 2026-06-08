//1-3
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, bool> hm;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0 && hm[0] == true) {
                return true;
            }
            hm[arr[i]] = true;
            if (arr[i] % 2 == 0 && arr[i] != 0) {
                if (hm[arr[i] / 2]) {
                    return true;
                }
            }
            if (hm[2 * arr[i]] && arr[i] != 0) {
                return true;
            }
        }
        return false;
    }
};
