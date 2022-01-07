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
    string s1="1123", s2="0111";
    unordered_map<char, int> m1, m2;
    int bull=0, cows=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            bull++;
        }
        else{
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
    }
    for(auto itr : m1){
        if(m2[itr.F]){
            cows += min(itr.S, m2[itr.F]);
        }
    }
    string ans="";
    ans+= to_string(bull);
    ans+="A";
    ans+=to_string(cows);
    ans+="B";
    cout<<ans;
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