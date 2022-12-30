#include <bits/stdc++.h>
using namespace std;

int a, b, n;

int gcd(int a, int b){
	int c;
	while(b!=0){
		c = a%b;
		a = b;
		b = c;
	}
	
	return a;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		cout << a*b/gcd(a,b) << "\n";
	}	
	
	return 0;
	
}