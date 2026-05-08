class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            string a=strs[i];
                int j=0;
            while(j<prefix.length()&&j<a.length()&&prefix[j]==a[j]){
                j++;
            }
            prefix=prefix.substr(0,j);
             if (prefix == "") break;  
            
        }
        return prefix;
    }
};