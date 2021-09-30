// https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int ans=0;
        int i=0, j=0;
        while(j<s.size()){
            st.insert(s[j]);
            if(st.size() == j-i+1){
                ans = max(ans, j-i+1);
                ++j;
            }
            else if(st.size() < j-i+1){
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};
