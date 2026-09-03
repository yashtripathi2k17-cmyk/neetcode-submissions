class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            string a=strs[i];
            while(j<strs[i].length()&&prefix[j]==a[j]){
                j++;
            }
            prefix=strs[i].substr(0,j);
        }
        return prefix;
    }
};