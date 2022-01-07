#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}
bool comp(int a, int b){
    int n1=__builtin_popcount(a);
    int n2=__builtin_popcount(b);
    // int n1=countSetBits(a);
    // int n2=countSetBits(b);
    if(n1==n2) return a<b;;
    return n1<n2;
}
void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<countSetBits(a[i])<<endl;
    }
    cout<<endl;
}
int main() {
    int a[9] ={0,1,2,3,4,5,6,7,8};
    // default comparator a<b;
    sort(a, a+9, comp);
    print(a, 9);
    return 0;
}