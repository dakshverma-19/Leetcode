class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>answer;
     int w = INT_MAX;
        for(int i=0 ;i<operations.size() ; i++){
          if (operations[i] != "C" && operations[i] != "D" && operations[i] != "+") {
            answer.push_back(stoi(operations[i]));
          }else if (operations[i]=="C"){
            answer.pop_back();
          }else if (operations[i]=="D"){
            int k=answer[answer.size()-1]*2;
            answer.push_back(k);
          }else{
            int y=answer[answer.size()-1]+answer[answer.size()-2];
            answer.push_back(y);
          }
        }
         int sum=0;
        for(int m=0 ; m<answer.size() ; m++){
        sum = sum+answer[m];
        }
        return sum;
    }
};