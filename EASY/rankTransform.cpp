class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>s(arr);
        
        sort(s.begin(),s.end());
        int n=arr.size();
        unordered_map<int,int>m;
        for(auto i:s){
            m.emplace(i,m.size()+1);
        }
        for(int i=0;i<n;i++){
            s[i]=m[arr[i]];
        }
        return s;
    }
};