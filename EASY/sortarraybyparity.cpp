class Solution {
    public:
        void swapp(vector<int>& nums,int a,int b){
            int temp=nums[a];
            nums[a]=nums[b];
            nums[b]=temp;
        }
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(n==1){
            v.push_back(nums[0]);
            return v;
        }
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]%2==0){
                swapp(nums,j,i++);
            }
        }
        return nums;
    }
};