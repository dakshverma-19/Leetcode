class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=arr.size()-1 ;i>=0 ; i--){
            if(arr[i]==0){
             arr.insert(arr.begin()+i+1,0);
             arr.pop_back();
            }
        }
    }
};