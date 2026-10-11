class Solution {
public:
    void sortColors(vector<int>& nums) {
        int white=0;
        int red=0;
        int blue=0;
        int q=1;
        int w=1;
        int e=1;
       for(int i=0 ;i<nums.size() ; i++){
        if(nums[i]==0){
            red=red+1;
        }
       } 
       for(int m=0 ;m<nums.size() ; m++){
           if(nums[m]==1){
            white=white+1;
           }
       }
       for(int n=0 ; n<nums.size() ; n++){
        if(nums[n]==2){
            blue=blue+1;
        }
       }
       nums.clear();
       while(e<=red){
        nums.push_back(0);
        e++;
       }
       while(w<=white){
        nums.push_back(1);
        w++;
       }
        while(q<=blue){
        nums.push_back(2);
        q++;
       }

    }
};