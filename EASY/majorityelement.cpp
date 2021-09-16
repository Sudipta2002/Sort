class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int compindex=0;
        int ct=1;
       
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[compindex]){
                 ct++;
                
            }else{
                ct--;
            }
            if(ct==0){
                compindex=i;
                ct=1;
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[compindex]){
                c++;
            }
        }
        if(c>(n/2)){
            return nums[compindex];
        }else{
            return -1;
        }
        
    }
};