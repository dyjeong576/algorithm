#include <bits/stdc++.h>
using namespace std;

int n, t;
int a[10004];


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n; 
	
	while(n--){
		cin >> t;
		a[t]++;
	}
	
	for(int i=1; i<10004; i++){
		while(a[i]--){
			cout <<i << "\n";
		}
	}
	
	return 0;
	
}