Note :- If two elements have same frequency then smaller elements should be printed first but heap does not always print smaller element
to overcome that use comparator function instead;
   

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int>nums(n);

	for(int i=0; i<n; i++)
		cin >> nums[i];

    vector<int>ans;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>heap;
    unordered_map<int,int>mp;
    for(auto i:nums){
         mp[i]++;
    }
    for(auto i=mp.begin(); i!=mp.end(); ++i){
         heap.push(make_pair(i->second, i->first));
    }
    while(!heap.empty()){
      int freq=heap.top().first;
      while(freq--){
           ans.push_back(heap.top().second);
      }
            heap.pop();
    }
    
	for(int i=0; i<(int)ans.size(); ++i){
	    cout << ans[i] << " ";
	}
	cout << "\n";
}
int main(){

  
  solve();
	return 0;
}
