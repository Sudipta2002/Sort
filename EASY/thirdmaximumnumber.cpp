class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int n=nums.size();

        int ans=INT_MIN;
        int maxi=INT_MIN;
        int ct=0;
        for(int i=0;i<n;i++){
            if(ans<nums[i]){
                ct++;
                ans=nums[i];
                maxi=max(maxi,nums[i]);
            }else{
                maxi=max(maxi,nums[i]);
            }
            if(ct==3){
                break;
            }
            
        }
        if(ct==3){
            return ans;
        }
        return maxi;
    }
};