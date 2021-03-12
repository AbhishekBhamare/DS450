// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

bool compare(const pair<int,int>&a, const pair<int,int>&b){
    return (a.second<b.second);
}

int maxMeetings(int s[], int f[], int n) {
    int ans=1;
    vector<pair<int,int>>v;
    for(int i=0; i<n; ++i){
        v.push_back(make_pair(s[i],f[i]));
    }
    sort(v.begin(), v.end(), compare);
    int temp=v[0].second;
    for(int i=1; i<v.size(); ++i){
        if(temp<v[i].first){
            ++ans;
            temp=v[i].second;
        }
    }
    return ans;
}
