class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {   
        int n=nums.size();
    
        int ct=1;
       sort(nums.begin(),nums.end());
        bool flag=false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                if(ct<2){
                    ct++;
                } 
                if(ct>=2){
                    flag=true;
                }
                
            }
        }
        
        if(flag==true){
            return true;
        }else{
            return false;
        }
        
    }
};