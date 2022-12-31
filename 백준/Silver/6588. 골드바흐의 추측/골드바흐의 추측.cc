#include <bits/stdc++.h>
using namespace std;

int t;
int a[1000001];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i=2; i<1000001; i++){
		if(a[i]) continue;
		for(int j = i*2; j<1000001; j+=i){
			a[j] = 1;
		}
	}
	
	;
	while(1){
		cin >> t;
		if(t == 0) break;
		for(int i=3; i<1000001; i++){
			if(a[i] == 0 && a[t-i] == 0){
				cout << t << " = " << i << " + " << t-i << "\n";
				break;
			}
		}
	}
		
	return 0;
	
}