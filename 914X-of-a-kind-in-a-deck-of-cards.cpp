//1-6
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        bool hasornot=true;
        unordered_map<int, int> potato;
        for(int i=0; i<deck.size(); i++)
            potato[deck[i]]++;
        if(potato[deck[0]]<2)
            return false;
        int cnt=2;
        for(; cnt<=potato[deck[0]]; cnt++, hasornot=true)
        {
            while(potato[deck[0]]%cnt!=0 && cnt!=potato[deck[0]])
                cnt++;
            for(int i=0; i<deck.size(); i++)
                if(potato[deck[i]]!=cnt && potato[deck[i]]%cnt!=0)
                    hasornot = false;
            if(hasornot)
                return true;
        }
        return false;
    }
};
