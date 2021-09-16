class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
            sort(arr.begin(),arr.end());
        int minimum=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            minimum=min(minimum,abs(arr[i]-arr[i+1]));
        }
        vector<vector<int>>v;
      
        for(int i=0;i<arr.size()-1;i++){
            if(minimum==abs(arr[i]-arr[i+1])){
                

                v.push_back({arr[i],arr[i+1]});
            }
        }

       return v;
        
       
    }
};