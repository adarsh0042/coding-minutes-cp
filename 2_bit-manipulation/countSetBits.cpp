#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    // Log(n)
    int ans=0;
    while(n>0){
        int last_bit=n&1;
        ans+=last_bit;
        n=n>>1;
    }
    return ans;
}
int countSetBitsHack(int n){
    // removes the last set bits from the current number.
    // no of iterations = no of set bits.
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    cout<<countSetBits(n)<<endl;
    cout<<countSetBitsHack(n)<<endl;
    return 0;
}