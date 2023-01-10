#include <bits/stdc++.h>
using namespace std;

int n, st, high, low, ret;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	vector<int> v(n);
	cin >> st;
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	high = v.size()-1;
	while(low<high){
		if(v[high]>=st){
			high--; continue;
		}
		if(v[high] + v[low] < st) low++;
		else if(v[high] + v[low] == st){
			ret++;
			low++; high--;
		}
		else if(v[high] + v[low] > st) high--;
	}
	
	cout << ret << endl;
	
	return 0;
}