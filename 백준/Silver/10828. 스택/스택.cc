#include <bits/stdc++.h>
using namespace std;

string st;
int n, num;
stack<int> s;

void push(int n){
	s.push(n);
	
	return;
}
void top(){
	if(!s.empty()) cout <<s.top() << "\n";
	else cout << -1 << "\n";
	
	return;
	
}
void size(){
	cout <<s.size() << "\n";
		
	return;
	
}
void empty(){
	if(!s.empty()) cout << 0 << "\n";
	else cout << 1 << "\n";
	
	return;
	
}

void pop(){
	if(!s.empty()){
		cout << s.top() << "\n";
		s.pop();
	} 
	else cout << -1 << "\n";
	
	return;
	
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> num;
	
	while(num--){
		cin >> st;
		if(st == "push"){
			cin >> n;
			push(n);
		}
		if(st == "top") top();
		if(st == "size") size();
		if(st == "empty") empty();
		if(st == "pop") pop();
	}
		
	return 0;
	
}