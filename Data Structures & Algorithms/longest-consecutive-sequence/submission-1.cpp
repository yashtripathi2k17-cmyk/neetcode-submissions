class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        unordered_set<int>set(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int curr=nums[i];
            if(set.count(curr-1)==0){
               int cnt=1;
               while(set.find(curr+1)!=set.end()){
                   curr++;
                   cnt++;
               }
              longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
