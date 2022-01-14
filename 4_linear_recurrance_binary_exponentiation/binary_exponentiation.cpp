#include<bits/stdc++.h>

using namespace std;

// O(log(b))
int binary_expo(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b=(b>>1);
	}
	return res;
}

int main()
{
	cout<<binary_expo(2, 10)<<endl;
	return 0;
}