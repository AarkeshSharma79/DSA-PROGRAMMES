class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cor) {
        bool x=true;
        int x1=cor[0][0];
        int x2=cor[1][0];
        int y1=cor[0][1];
        int y2=cor[1][1];
        for(int i=2;i<cor.size();i++){
            int x3=cor[i][0];
            int y3=cor[i][1];
            if((y2-y1)*(x3-x2)!=(x2-x1)*(y3-y2)){
                x=false;
                break;
            }
        }
        return x;
    }
};