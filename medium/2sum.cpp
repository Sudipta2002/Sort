#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<int>v;
        while(i<j){
            if(i!=0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int sum=nums[i]+nums[j];

            if(sum>target){
                j--;
            }else if(sum<target){
                i++;
            }else{
                v.push_back(i);
                v.push_back(j);

                i++;
                j--;
            }
        }
        return v;

    }
};

int main(){
    Solution sol;

    vector<int>nums={2,7,11,15};
    int target=9;

    vector<int>ans=sol.twoSum(nums,target);

    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}