#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    priority_queue<int, vector<int>, greater<int>> pq;
    int k=3;
    for(auto num : nums){
        pq.push(num);
        if(pq.size() > k){
            pq.pop();
        }
    }
    cout<<pq.top();
}