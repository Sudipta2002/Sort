class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n;

        while(start<=end){
            int mid=start+(end-start)/2;
            int ct=0;
            for(int i=0;i<n;i++){
                if(nums[i]>=mid){
                    ct++;
                }
            }
            if(ct>mid){
                start=mid+1;
            }else if(ct<mid){
                end=mid-1;
            }else if(ct==mid){
                return mid;
            }
            
        }
        return -1;
    }
};