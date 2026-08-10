class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>answer;
        int ans=0;
        for(int i=0 ; i<nums1.size() ; i++){
            for(int j =0 ; j<nums2.size() ; j++){
                if(nums1[i]==nums2[j]){
                    ans=ans+1;
                    break;
                }
            }
        }
        int jns=0;
        for(int k=0 ; k<nums2.size() ; k++){
            for(int l =0 ; l<nums1.size() ; l++){
                if(nums2[k]==nums1[l]){
                    jns=jns+1;
                    break;
                }
            }
        }
       answer.push_back(ans);
       answer.push_back(jns);
       return answer;
    }
};