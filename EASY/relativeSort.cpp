class Solution {
public:
    static int noOfOne(int a){
        int ct=0;
        while(a){
            a=a&(a-1);
            ct++;
        }
        return ct;
    }
public:
    static bool compare(int a,int b){
        int comp1=noOfOne(a);
        int comp2=noOfOne(b);
        
        if(comp1!=comp2){
            return comp1<comp2;
        }else{
            return a<=b;
        }
            
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
    return arr;
    }
};