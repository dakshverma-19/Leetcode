class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k;
        int ans=0;
        
        for(int i=0 ; i<nums.size() ; i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                k=n%10;
                sum=sum+1;
                n=n/10;
            }
            if(sum%2==0){
            ans=ans+1;
        }
        }
        
        return ans;
        
    }
};