#include <bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c){
    int sign1 = a<0 && c%2;
    int sign2 = b<0 && c%2;
    char ans;
    if(sign1!=sign2){
        sign1?ans='<' : ans='>';
    }
    else{
        if(abs(a)==abs(b)) ans='=';
        else if(abs(a)>abs(b) ^ sign1){
            ans='>';
        }
        else{
            ans='<';
        }
    }
    cout<<ans<<endl;
}
int main() {
    // int a,b,c;
    // cin>>a>>b>>c;

    // solve(a,b,c);
    char s[]="hello";
    char *p=s;
    cout<<p;
    // cout<<s[0]<<" "<<p[0];
    return 0;
}