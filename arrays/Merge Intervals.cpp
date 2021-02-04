class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        sort(v.begin(), v.end());
        stack<pair<int,int>>s;
        s.push(make_pair(v[0][0],v[0][1])); 
        for(int i=1; i<v.size(); i++){
            
            if(v[i][0]<=s.top().second){
                int x=s.top().first;
                int y=max(s.top().second, v[i][1]);
                s.pop();
                s.push(make_pair(x,y));
            }
            else{
                s.push(make_pair(v[i][0],v[i][1]));
                
            }
        }
        while(!s.empty()){
            vector<int>x;
            x.push_back(s.top().first);
            x.push_back(s.top().second);
            ans.push_back(x);
            s.pop();
        }
        return ans;
    }
};
