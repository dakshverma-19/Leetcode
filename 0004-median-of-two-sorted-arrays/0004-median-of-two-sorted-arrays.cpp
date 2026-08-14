class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int h;
       for(int i=0 ; i<nums2.size(); i++){
        nums1.push_back(nums2[i]);
       } 
       sort(nums1.begin(),nums1.end());
       if(nums1.size()%2==0){
        int p=nums1.size()/2;
        int m=nums1[p]+nums1[p-1];
        double answer=m/2.0;
        return answer;
       }else{
         h =nums1.size()/2;
        
       }
       return nums1[h];
    }
};