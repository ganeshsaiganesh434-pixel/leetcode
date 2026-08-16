class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixsum=0,cnt=0;
        unordered_map<int,int>mpp;
             mpp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int remove=prefixsum-k;
            cnt=cnt+mpp[remove];
            mpp[prefixsum]+=1;

        }
        return cnt;
        
    }
};