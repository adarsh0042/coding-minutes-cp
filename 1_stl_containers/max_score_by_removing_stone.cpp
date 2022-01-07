#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=2, b=4, c=6;
    int ans=0;
    priority_queue<int> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);

    while(pq.size() > 1){
        int a=pq.top(); 
        pq.pop();
        int b=pq.top(); 
        pq.pop();
        a--; 
        b--;
        if(a) pq.push(a);
        if(b) pq.push(b);
        ans++;
    }
    cout<<ans;
}