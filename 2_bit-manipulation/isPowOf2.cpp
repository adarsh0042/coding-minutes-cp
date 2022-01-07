#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=2;
    bool cond1 = (n&(n-1))==0;
    if(cond1) cout<<"yes";
    else cout<<"no";
    return 0;
}