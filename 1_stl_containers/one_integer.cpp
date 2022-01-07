#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5};

    // max heap
    priority_queue<int> max_pq;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto num : nums){
        pq.push(num);
    }
    int final_sum=0;
    while(pq.size() > 1){
        int sum=pq.top();
        pq.pop();
        sum+=pq.top();
        pq.pop();
        final_sum+=sum;
        pq.push(sum);
    }
    cout<<final_sum;
}