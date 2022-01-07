#include <bits/stdc++.h>
using namespace std;
int hammingDistance(int n, int m){
    int a=0,b=0;
    int cnt=0;
    while(n>0 || m>0){
        a=n&1;
        b=m&1;
        if(a==b) cnt++;
        n=n>>1;
        m=m>>1;
    }
    return cnt;
}
int main() {
    int n, m;
    cin>>n>>m;
    cout<<hammingDistance(n, m);
    return 0;
}