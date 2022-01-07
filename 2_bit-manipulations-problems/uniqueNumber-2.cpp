#include <bits/stdc++.h>
using namespace std;

void uniqueNumber2(vector<int> a){
    int result=0;
    for(int i=0;i<a.size();i++){
        result^=a[i];
    }
    int pos=0;
    int temp=result;
    while((temp&1)==0){
        pos++;
        temp=temp>>1;
    }
    int setA=0, setB=0;
    int mask=(1<<pos);
    for(int i=0;i<a.size();i++){
        if((mask&a[i]) > 0){
            setA^=a[i];
        }
        else{
            setB^=a[i];
        }
    }
    cout<<setA<<" "<<setB<<endl;
}

int main() {
    vector<int> a{1,2,3,1,2,4};
    uniqueNumber2(a);
    return 0;
}