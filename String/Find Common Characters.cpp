// https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
       vector<int>arr1(26,0), arr2(26,0);
        for(char&i:A[0]){
            arr1[i-'a']++;
        }
        
        for(int i=1; i<A.size(); i++){
            for(char&i:A[i]){
                arr2[i-'a']++;
            }
            for(int i=0; i<26; i++){
                arr1[i]=min(arr1[i], arr2[i]);
                arr2[i]=0;
            }
        }
        vector<string>ans;
        for(int i=0; i<26; i++){
            if(arr1[i]>0){
                char x=97+i;
                string temp="";
                temp+=x;
                int t=arr1[i];
                while(t--)
                    ans.push_back(temp);
            }
        }
        return ans;
    }
};
