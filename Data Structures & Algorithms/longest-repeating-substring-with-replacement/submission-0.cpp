class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        vector<int>freq(26,0);
        int maxfreq=0;
        int maxlength=INT_MIN;
        for(int r=0;r<s.length();r++){
           freq[s[r]-'A']++;
           maxfreq=max(maxfreq,freq[s[r]-'A']);
           int length=r-l+1;
           if(length-maxfreq>k){
               freq[s[l]-'A']--;
               l++;
           }
           maxlength=max(maxlength,r-l+1);

        }
        return maxlength;
    }
};
