#include <bits/stdc++.h>
using namespace std;

string st;
int n, num;
queue<int> s;

void push(int n){
	s.push(n);
	
	return;
}
void front(){
	if(!s.empty()) cout <<s.front() << "\n";
	else cout << -1 << "\n";
	
	return;
	
}
void back(){
	if(!s.empty()) cout <<s.back() << "\n";
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
		cout << s.front() << "\n";
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
		if(st == "front") front();
		if(st == "size") size();
		if(st == "empty") empty();
		if(st == "pop") pop();
		if(st == "back") back();
	}
		
	return 0;
	
}