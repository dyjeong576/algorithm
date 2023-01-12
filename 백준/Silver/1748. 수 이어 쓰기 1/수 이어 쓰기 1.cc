#include <bits/stdc++.h>
using namespace std;

long long n, ret;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i=1; i<=n; i*=10){
		ret += n - i + 1;
	}
	
	cout << ret << endl;

	return 0;
	
}