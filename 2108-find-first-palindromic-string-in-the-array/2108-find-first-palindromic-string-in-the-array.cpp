class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans="";
        for(int k=0;k<n;k++){
            int i=0;
            int j=words[k].size()-1;
            while(i<j){
                if(words[k][i]!=words[k][j]){
                    break;
                }else{
                    i++;
                    j--;
                }
            }
            if(i>=j){
             ans=words[k];
             break;
            }
        }
        return ans;
    }
};