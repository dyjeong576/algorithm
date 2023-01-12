#include <bits/stdc++.h>
using namespace std;

long long ret = 1, n, x, y, z;
int a[10];

int main(){
	
	cin >> x >> y >> z;
	ret = x*y*z;
	
	while(ret){
		a[ret%10]++;
		ret /= 10;
	}
	
	for(auto x : a) cout << x << endl;
	
	return 0;
	
}