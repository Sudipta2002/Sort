class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>v1;

        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            int counter=count(nums.begin(),nums.end(),temp);
            vector<int>:: iterator itr=find(nums.begin(),nums.end(),temp);
            int j=distance(nums.begin(),itr);
            if(counter>0 && j!=i){
                v1.push_back(i);
                v1.push_back(j);
                break;
            }
        }
        for(auto element :v1){
            cout<<element<<" ";
        }
        return v1;
    }
};

