//https://practice.geeksforgeeks.org/problems/pangram-strings3155/1#

class Solution{
public:	
	
	int isPanagram(string s)
	{
	    // Your code goes here 
	   if(s.size()<26){
	   	   return 0;
	}
	vector<int>arr(26,0);
	for(int i=0; i<(int)s.size(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
		    arr[s[i]-'A']++;
		}else if(s[i]>='a'&&s[i]<='z'){
		    arr[s[i]-'a']++;
		}
	}
	for(int i=0; i<26; i++){
	    if(arr[i]==0){
			return 0;
		}
	}
	return 1;

	}

};
