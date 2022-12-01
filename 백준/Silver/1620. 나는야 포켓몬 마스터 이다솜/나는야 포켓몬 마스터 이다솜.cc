#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int cnt, num, i = 0;
	string name;
	map<int, string> dogam;
	map<string, int> dogam2;
    
	cin >> cnt >> num;
    
    for(int i = 1; i<=cnt; i++){
        cin >> name;
        dogam[i] = name;
        dogam2[name] = i;
    }

	while(num){
		cin >> name;
		if(atoi(name.c_str())){
			cout << dogam[atoi(name.c_str())] << "\n";
		}
		else{
			cout << dogam2[name] << "\n";
		}
		num--;
	}
	
	return 0;
    
    /* 
    이번 코드의 해결 방법:
    1. map은 탐색은 O(log(n))이고 vector의 find 는 O(n)이므로 map을 사용하여 탐색할 것
    메모리를 적게 쓰는 것도 중요하지만 시간복잡도도 생각해서 풀어라.. 메모리는 공간복잡도..
    시간복잡도 > 공간복잡도
    
    2. endl의 경우 결과값에 관한 버퍼를 매번 플러시를 하는 함수이므로 개행문자 \n보다 오래걸린다.
    따라서 \n을 써줄 것
    
    3. 무조건 써라 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   */
    
  
	
}
