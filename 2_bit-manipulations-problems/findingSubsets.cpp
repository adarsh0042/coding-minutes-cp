#include <bits/stdc++.h>
using namespace std;
void overlayNumber(string arr, int number){
    int j=0;
    while(number>0){
        int last_bit=number&1;
        if(last_bit){
            cout<<arr[j];
        }
        j++;
        number=number>>1;
    }
    cout<<endl;
}
void generateAllSubsequence(string arr){
    int n=arr.size();
    for(int i=0;i<(1<<n);i++){
        overlayNumber(arr, i);
    }
}
int main() {
    string arr;
    // char arr[1000];
    cin>>arr;
    generateAllSubsequence(arr);
    return 0;
}