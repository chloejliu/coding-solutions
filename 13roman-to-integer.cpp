//1-3
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        map<int, int> potato;
        for(int i=0; i<s.size(); i++)
            if(s.substr(i, 2)=="IV"){
                potato[i]=4;
                i++;}
            else if(s.substr(i, 2)=="IX"){
                potato[i]=9;
                i++;}
            else if(s.substr(i, 2)=="XL"){
                potato[i]=40;
                i++;}
            else if(s.substr(i, 2)=="XC"){
                potato[i]=90;
                i++;}
            else if(s.substr(i, 2)=="CD"){
                potato[i]=400;
                i++;}
            else if(s.substr(i, 2)=="CM"){
                potato[i]=900;
                i++;}
            else if(s.substr(i, 1)=="I") potato[i]=1;
            else if(s.substr(i, 1)=="V") potato[i]=5;
            else if(s.substr(i, 1)=="X") potato[i]=10;
            else if(s.substr(i, 1)=="L") potato[i]=50;
            else if(s.substr(i, 1)=="C") potato[i]=100;
            else if(s.substr(i, 1)=="D") potato[i]=500;
            else potato[i]=1000;
        for(auto& it:potato)
            sum+=it.second;
        return sum;
    }
};
