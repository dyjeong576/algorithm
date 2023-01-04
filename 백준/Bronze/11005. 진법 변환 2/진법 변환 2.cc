#include <bits/stdc++.h>
using namespace std;

char a[37];
long long n, x;
string ret;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i=0; i<=9; i++) a[i] = 48+i;
	for(int i=10; i<=35; i++) a[i] = 55 + i;

	cin >> n >>	x;
	
	while(n){
		ret = a[n%x] + ret;
		n /= x;
	}
	
	cout << ret << endl;
	
	return 0;

}