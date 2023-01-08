#include <bits/stdc++.h>
using namespace std;

int p[3000][3000];
int ans[3];
int n;

void solve(int y, int x, int s){
	for(int i = y; i<y+s; i++){
		for(int j=x; j<x+s; j++){
			if(p[i][j] != p[y][x]){
				solve(y, x, s/3);
				solve(y+s/3, x, s/3);
				solve(y+s/3*2, x, s/3);
				solve(y, x+s/3, s/3);
				solve(y, x+s/3*2, s/3);
				solve(y+s/3, x+s/3, s/3);
				solve(y+s/3, x+s/3*2, s/3);
				solve(y+s/3*2, x+s/3, s/3);
				solve(y+s/3*2, x+s/3*2, s/3);
				return;
			}
		}
	}
	ans[p[y][x]+1]++;
	
	return;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> p[i][j];
		}
	}
	solve(0,0,n);
	
	for(auto x : ans) cout << x << " ";


}