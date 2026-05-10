class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int counter=0;
        for(auto & e:events){
            if(e=="W") {counter++;
            if(counter>=10) break;
            }
            else if(e=="WD"|| e=="NB") score++;
            else score+=stoi(e);
        }
        return {score,counter};
    }
};