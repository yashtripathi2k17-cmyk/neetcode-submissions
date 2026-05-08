class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int k=0;
      int n=nums.size();
      for(int r=0;r<n;r++){
        if(nums[r]!=val){
          nums[k]=nums[r];
          k++;
        }
      }
      return k;
    }
};