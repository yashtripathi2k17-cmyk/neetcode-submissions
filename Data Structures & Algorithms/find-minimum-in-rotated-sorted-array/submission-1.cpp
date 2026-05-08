class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=0;
        int mini=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(nums[l]<=nums[mid]){
                ans=nums[l];
                mini=min(mini,ans);
                l=mid+1;
            }
            else{
                ans=nums[mid];
                mini=min(mini,ans);
                r=mid-1;
            }
        }
        return mini;
    }
};
