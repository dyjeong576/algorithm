#include <bits/stdc++.h>
using namespace std;

long long a, b;

int gcd(long long a, long long b){
	long long tmp;
	while(b!=0){
		tmp = a%b;
		a = b;
		b = tmp;
	}
	
	return a;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b;
	
	long long sum = gcd(a, b);
	
	while(sum--){
		cout << "1";
	}
		
	return 0;

}