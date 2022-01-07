#include <bits/stdc++.h>
using namespace std;
int longestConsecutiveRunOf1(int n){
    int cnt=0;
    int maxCnt=0;
    while(n>0){
        int lastBit=n&1;
        if(lastBit){
            cnt++;
        }
        else{
            cnt=0;
        }
        n=n>>1;
        maxCnt=max(cnt, maxCnt);
    }
    return maxCnt;
}
int main() {
    int n;
    cin>>n;
    cout<<longestConsecutiveRunOf1(n);
    return 0;
}