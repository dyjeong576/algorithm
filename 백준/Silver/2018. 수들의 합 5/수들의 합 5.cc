#include <iostream>

using namespace std;

int main()
{
    int num, sum, answer = 0, i = 0;
    cin >> num;
    

    while(1){
    	sum += ++i;
    	
    	if(num < sum) break;
    	if((num - sum)%i == 0) answer++;
	}
  
    cout << answer;
    
    return 0;
}