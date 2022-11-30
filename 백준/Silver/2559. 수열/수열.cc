#include <iostream>

using namespace std;

int main()
{
	int tmp[100001];
	int day, num, sum = 0, max;
	
	cin >> day >> num;
	
	for(int i=0; i<day; i++){
		cin >> tmp[i];
		if(i < num) sum += tmp[i];
	}
	
	max = sum;
	
	for(int i = num; i< day; i++){
		sum += tmp[i] - tmp[i-num];
		if(max < sum) max = sum;
	}
	
	cout << max;
	
}
