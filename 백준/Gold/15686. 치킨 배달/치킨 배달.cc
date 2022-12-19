#include<bits/stdc++.h>
using namespace std; 

int maps[50][50];
int n, c, ret, minn, dist, result = 987654321;
vector<pair<int, int>> home;
vector<pair<int, int>> chicken;
vector<vector<int>> cList;
vector<int> v;

void combi(int start, vector<int> v){
	if(v.size() == c){
		cList.push_back(v);
		return;
	}
	for(int i = start + 1; i<chicken.size(); i++){
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
	
}
int main() {
	
	cin >> n >> c;
	
	for(int i =0; i<n; i++)	{
		for(int j = 0; j<n; j++){
			cin >> maps[i][j];
			if(maps[i][j] == 1) home.push_back({i, j});
			if(maps[i][j] == 2) chicken.push_back({i, j});
		}
	}
	
	combi(-1, v);
	
	for(vector<int> x : cList){
		ret = 0;
		for(pair<int, int> y : home){
			minn = 101;
			for(int z : x){
				dist = abs(y.first - chicken[z].first) + abs(y.second - chicken[z].second);
				minn = min(dist, minn);
			}
			ret += minn;
		}
		result = min(result, ret);
	}
	
	cout << result << endl;
	
    return 0;
    
}