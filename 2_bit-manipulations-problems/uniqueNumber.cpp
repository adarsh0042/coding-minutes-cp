#include <bits/stdc++.h>
using namespace std;

int uniqueNumber(vector<int> a){
    int ans=a[0];
    for(int i=1;i<a.size();i++){
        ans^=a[i];
    }
    return ans;
}

int main() {
    vector<int> a{1,2,3,1,2};
    cout<<uniqueNumber(a);
    return 0;
}