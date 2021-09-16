class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int count=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
          
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
                
            }
              
            v.push_back(count);
             count=0;
        }
        
        return v;
    }
};