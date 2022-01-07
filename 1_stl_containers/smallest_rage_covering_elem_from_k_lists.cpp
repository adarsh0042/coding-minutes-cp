#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
typedef long long ll;
typedef long double ld;

ll max(ll a, ll b){
    if(a>b)
        return a;
    return b;
}
ll min(ll a, ll b){
    if(a>b)
        return b;
    return a;
}
    
void solve(){
    vector<vector<int>> nums = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<pair<int, int>> vec;
    vector<int> res;
    int k=nums.size();
    for(int i=0;i<k;i++){
        sort(nums[i].begin(), nums[i].end());
        for(auto itr: nums[i]){
            vec.pb({itr, i});
        }
    }
    sort(vec.begin(), vec.end());
    unordered_map<int, int> cnt;
    int l=0, r=0;
    while(r<vec.size()){
        cnt[vec[r].S]++;
        while(sz(cnt)==k){
            if(res.empty() || vec[r].F-vec[l].F < res[1]-res[0]){
                res={vec[l].F, vec[r].F};
            }
            cnt[vec[l].S]--;
            if(cnt[vec[l].S]==0){
                cnt.erase(vec[l].S);
            }
            l++;
        }
        r++;
    }
    cout<<res[0]<<" "<<res[1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}