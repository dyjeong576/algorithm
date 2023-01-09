#include <bits/stdc++.h>
using namespace std;

long long i, tmp, n;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	while(n >= tmp){
		tmp += ++i;
	}
	
	cout << --i << endl;
	
	return 0;
	
}