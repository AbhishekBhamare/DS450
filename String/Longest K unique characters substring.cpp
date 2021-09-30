// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        map<char, int>mp;
        
        int ans=0, i=0, j=0;
        
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size() == k){
                ans = max(j-i+1, ans);
            }
            else if(mp.size() > k){
                while(mp.size() > k){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    ++i;
                }
            }
            ++j;
        }
        return ans>0 ? ans : -1;
    }
};
