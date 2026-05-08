class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)cnt0++;
            else if(nums[i]==1)cnt1++;
            else cnt2++;
        }
        vector<int>result(n);
        int k=0;
        while(cnt0>0){
            result[k++]=0;
            cnt0--;
        }
        while(cnt1>0){
            result[k++]=1;
           cnt1--;}
        while(cnt2>0){
            result[k++]=2;
        cnt2--;
        }
        nums=result;
    }
};