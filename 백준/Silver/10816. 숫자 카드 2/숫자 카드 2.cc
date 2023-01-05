#include <bits/stdc++.h>
using namespace std;

int m, n, tmp;
unordered_map<int, int> hm;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> m;
	while(m--){
		cin >> tmp;
		hm[tmp]++;
	}
	
	cin >> n;
	
	while(n--){
		cin >> tmp;
		cout << hm[tmp] << " ";
	}
		
	return 0;

}