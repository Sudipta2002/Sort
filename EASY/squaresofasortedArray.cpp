class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int l=0;
        int r=nums.size()-1;
        
        vector<int>v(nums.size());
        int pos=nums.size();
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                v[--pos]=nums[r]*nums[r];
                r--;
            }else{
                v[--pos]=nums[l]*nums[l];
                l++;
            }
        }
        return v;
    }
};