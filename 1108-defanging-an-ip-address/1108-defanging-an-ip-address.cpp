class Solution {
public:
    string defangIPaddr(string add) {
        string str="";
        for(int i=0;i<add.length();i++){
            if(add[i]!='.') str+=add[i];
            else str+="[.]";
        }
        return str;
    }
};