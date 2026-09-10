class Solution {
public:
    string winningPlayer(int x, int y) {
        string h;
        int k=y/4;
        if(k > x) {
            k = x;
        }
        if(k%2!=0 ){
         h="Alice";
         return h;
        }
        return "Bob";
    }
};