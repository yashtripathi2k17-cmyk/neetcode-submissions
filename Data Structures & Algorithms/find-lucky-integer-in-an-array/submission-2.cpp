class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=0;
      for(int i=0;i<arr.size();i++){
         if(arr[i]>maxi){
            maxi=arr[i];
         }

      }
      vector<int>freq(maxi+1,0);
      for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
      }
      for(int i=freq.size();i>=1;i--){
        if(i==freq[i]){
            return i;
        }
      }
      return -1;
    }
};