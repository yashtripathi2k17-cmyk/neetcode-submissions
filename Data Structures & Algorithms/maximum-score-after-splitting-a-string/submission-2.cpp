class Solution {
public:
    int maxScore(string s) {
        int zero=0;
        int ones=0;
        int n=s.length();
        int maxscore=INT_MIN;
        int zeroes=0;
        // int ones=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0')zeroes++;
            for(int j=i+1;j<n;j++){
                if(s[j]=='1')ones++;
            }
            maxscore=max(maxscore,zeroes+ones);
            ones=0;
        }
        return maxscore;
        
    }
};