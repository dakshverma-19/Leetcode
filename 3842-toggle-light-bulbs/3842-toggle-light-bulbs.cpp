class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(), bulbs.end());
        for(int i=bulbs.size()-1 ; i>0 ; i--){
            if(bulbs[i]==bulbs[i-1]){
                bulbs.erase(bulbs.begin()+i);
                bulbs.erase(bulbs.begin()+i-1);
                i--;
            }
        }
        return bulbs;
        
    }
};