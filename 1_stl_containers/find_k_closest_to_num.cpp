#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &a){
    for(auto n : a){
        cout<<n<<" ";
    }
    cout<<endl;
}

bool compare(int a, int b){
    return a > b;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int k=3, x=3;
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(auto num:nums) {
        if(num==x) continue;
        pq.push({abs(num-x), num});
    }
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    print(ans);
}