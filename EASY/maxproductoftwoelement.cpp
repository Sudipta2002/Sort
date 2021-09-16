class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums.size();
        
        sort(nums.begin(),nums.end());
        return ((nums[maxi-1]-1)*(nums[maxi-2]-1));
        
        // return maxi;
    }
};