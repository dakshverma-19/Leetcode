class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>answer;
        
     
       for(int i=0 ; i<image.size() ; i++){
           vector<int>k;
            for(int j =image.size()-1 ; j>=0 ; j--){
                k.push_back(image[i][j]);
          
            }
            answer.push_back(k);
       }
        
        
        for(int m=0 ; m<answer.size() ; m++){
            for(int n=0 ; n<answer.size() ; n++){
                if(answer[m][n] == 1){
                    answer[m][n]=0;
                }else{
                    answer[m][n] = 1;
                }
            }
        }
        return answer;
    }
};