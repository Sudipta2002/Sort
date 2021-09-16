class Solution{
    public:
    void swapii(vector<int>&arr,int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
public:
    vector<int> findErrorNums(vector<int>&arr){
        int i=0;
        vector<int>store;
        while(i<arr.size()){
            
            int correct=arr[i]-1; 
            if(arr[i]<=arr.size() && arr[correct]!=arr[i]){
                swapii(arr,correct,i);
            }else{
                i++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=(i+1)){
               store.push_back(arr[i]);
               store.push_back(i+1);
               break;
            }
        }
        return store;
    }
};