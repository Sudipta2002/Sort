#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>merg(n+m);
            
        int i=0,j=0;
        int k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                merg[k]=nums1[i];
                i++;
            }else{
                merg[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            merg[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n){
            merg[k]=nums2[j];
            k++;
            j++;
        }
        for(int z=0;z<merg.size();z++){
            nums1[z]=merg[z];
        }
        
    }
};

int main(){
    Solution sol;

    vector<int>nums1={4,0,0,0,0,0};
    vector<int>nums2={1,2,3,5,6};
    sol.merge(nums1,1,nums2,5);
    for(auto it:nums1){
        cout<<it<<" ";
    }
    return 0;
}
// if(m[v[i]]<m[(v[i]^x)]){
                //     operation+=m[v[i]];
                // }else{
                //     operation+=m[(v[i]^x)];
                // }