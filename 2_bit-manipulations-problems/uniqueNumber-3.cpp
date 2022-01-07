#include <bits/stdc++.h>
using namespace std;
void updateSum(vector<int> &sumArr, int x){
    for(int i=0;i<32;i++){
        int ith_bit=x&(1<<i);
        if(ith_bit){
            sumArr[i]++;
        }
    }
}
int numFromBits(vector<int> sumArr){
    int num=0;
    for(int i=0;i<32;i++){
        num+=sumArr[i]*(1<<i);
    }
    return num;
}
void uniqueNumber2(vector<int> a){ 
    vector<int> sumArr(32, 0);
    for(auto x:a){
        updateSum(sumArr, x);
    }
    for(int i=0;i<32;i++){
        sumArr[i] %=3;
    }
    cout<<numFromBits(sumArr);
}

int main() {
    vector<int> a{1,1,1,2,2,2,3};
    uniqueNumber2(a);
    return 0;
}