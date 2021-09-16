#include<bits/stdc++.h>
using namespace std;

class Solution {
    // public:
    //     void swap(int a,int b){
    //         int temp=a;
    //         a=b;
    //         b=temp;
    //     }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0,j=0;
        while(i<m){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
            
            
                int temp=nums2[0];
                int z;
                for(z=1;z<n && temp>nums2[z];z++){
                    nums2[z-1]=nums2[z];
                }
                nums2[z-1]=temp;
            }
            i++;
        }
        for(int x=m;x<nums1.size();x++){
            nums1[x]=nums2[j];
            j++;
        }
    }
};

int main(){
    Solution sol;

    vector<int>nums1={1,4,7,8,10,0,0,0};
    vector<int>nums2={2,3,9};
    sol.merge(nums1,5,nums2,3);
    for(auto it:nums1){
        cout<<it<<" ";
    }
    return 0;
}