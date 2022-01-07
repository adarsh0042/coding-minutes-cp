#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    unordered_set<int> s;
    // unordered_map<int, int> m;
    
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }

    cout<<min(s.size(), nums.size()/2);

    return 0;
}