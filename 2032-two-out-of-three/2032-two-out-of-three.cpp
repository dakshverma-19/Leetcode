class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>answer;
        vector<int>ans;
        for(int i=0; i<nums1.size() ; i++){
            for(int j=0 ; j<nums2.size() ; j++ ){
                if(nums1[i]==nums2[j]){
                    answer.push_back(nums1[i]);
                }
            }
        }
        for(int k=0 ; k<nums1.size() ; k++){
            for(int l=0 ; l<nums3.size() ; l++){
                if(nums1[k]==nums3[l]){
                    answer.push_back(nums1[k]);
                }
            }
        }
        for(int a=0 ; a<nums2.size() ; a++){
            for(int r=0 ; r<nums3.size() ; r++){
                if(nums2[a]==nums3[r]){
                    answer.push_back(nums2[a]);
                }
            }
        }
        if(answer.size()==0){
            return answer;
        }else{
        sort(answer.begin(),answer.end());
        ans.push_back(answer[0]);
        for(int u=1 ; u<answer.size() ; u++){
            if(answer[u]!=answer[u-1]){
                ans.push_back(answer[u]);
            }
        }
        }
        return ans;
    }
};