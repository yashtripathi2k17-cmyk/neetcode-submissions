class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int m=k%n;
        // if(k>nums.length())return 
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+m);
        reverse(nums.begin() + m, nums.end());
    }
};