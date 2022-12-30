#include <bits/stdc++.h>
using namespace std;

int m, w, k, ret;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> w >> m >> k;
	
	while(1){
		if(w >=2 && m >=1){
			ret++;
			w -= 2;
			m -= 1;
		}
		else{
			while(w+m<k){
				ret--;
				w+=2;
				m+=1;
			}
			break;
		}
	}
	
	cout << ret << endl;
	
	return 0;
	
}