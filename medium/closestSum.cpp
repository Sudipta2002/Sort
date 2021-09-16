#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         sort(nums.begin(), nums.end());
        int prevSum=nums[0]+nums[1]+nums[nums.size()-1];
    for (unsigned int i=0; i<nums.size(); i++) {
        
        int l = i+1, r = nums.size()-1;
        while (l<r) {
            int s = nums[i]+nums[l]+nums[r];
            if (s>target) r--;
            else  l++;
            if(abs(s-target)<abs(prevSum-target)){
                prevSum=s;
            }
        }
    }
    return prevSum;
    }
};

int main(){
    Solution sol;

    vector<int>nums={-1,2,1,-4};
    int target=1;

    int ans=sol.threeSumClosest(nums,target);

    cout<<ans<<endl;
    return 0;
}