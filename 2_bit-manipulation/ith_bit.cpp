#include <bits/stdc++.h>
using namespace std;

int getIthBit(int &n, int i) {
    int mask = (1<<i);
    return (n & mask) > 0 ? 1:0;
}

void clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

void setIthBit(int &n, int i){
    int mask = (1<<i);
    n = n | mask;
}

void upadateIthBit(int &n, int i, int v) {
    clearIthBit(n, i);
    int mask = v<<i;
    n = n | mask;
}

void clearLastIthBits(int &n, int i){
    int mask = -1<<i;
    n &= mask;
}

void clearBitsInRange(int &n, int j, int i){
    int a=-1<<(j+1);
    int b=(1<<i)-1;
    int mask = a|b;
    n &= mask;
}

void replaceBits(int &n, int m, int j, int i){
    clearBitsInRange(n, j, i);
    int mask=m<<i;
    n = n|mask;
}

int main() {
    int n=15;
    int i;
    // cin>>i;
    // clearIthBit(n, i);
    // cout<<n<<endl;
    // setIthBit(n, i);
    // upadateIthBit(n, i, 1);
    // clearLastIthBits(n, i);

    // clearBitsInRange(n, 3, 1);
    replaceBits(n, 2, 3, 1);
    cout<<n<<endl;
    return 0;
}