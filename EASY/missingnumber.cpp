
class Solution{
    public:
    void swapii(vector<int>&arr,int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
public:
    int missingNumber(vector<int>&arr){
        int i=0;
        while(i<arr.size()){
            
            int correct=arr[i]; 
            if(arr[i]<arr.size() && arr[correct]!=arr[i]){
                swapii(arr,correct,i);
            }else{
                i++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i){
                return i;
            }
        }
        return arr.size();
    }
};