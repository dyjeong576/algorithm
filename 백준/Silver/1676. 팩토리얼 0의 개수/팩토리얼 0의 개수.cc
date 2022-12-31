#include <bits/stdc++.h>
using namespace std;

int n, t, cnt;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i=1; i<=n; i++){
		t = i;
		while(t%5 == 0 && t!= 0){
			cnt++;
			t /= 5;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
	
}