class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int t=nums1.size()-1 ; t>=m ;t--){
            if(nums1[t]==0){
            nums1.erase(nums1.begin()+t);
            }
        }
        
        for(int j=0 ;j<nums2.size() ; j++){
            nums1.push_back(nums2[j]);
        }
        sort(nums1.begin(),nums1.end());
    }
};