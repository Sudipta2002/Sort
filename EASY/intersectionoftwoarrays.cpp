class Solution {
    public:
        bool binaryy(vector<int>&nums1,int k){
            int start=0;
            int end=nums1.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums1[mid]==k){
                    return true;
                }else if(nums1[mid]>k){
                    end=mid-1;
                }else{
                    start=mid+1;
                } 
            }
            return false;
        }
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            while(i>0 && i<nums2.size() && nums2[i]==nums2[i-1]){
                i++;
            }
            if(i<nums2.size() && binaryy(nums1,nums2[i])){
             ans.push_back(nums2[i]);   
            }
            
        }
        return ans;
    }
};