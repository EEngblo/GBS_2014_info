#include <iostream>
#include <iomanip>
using namespace std;

int n[1000000];

void main(){
	int a;
	for (int i = 2; i < 1000000; i++){
		if (n[i] == 0) {
			for (int j = 1; j < 1000000; j += i)
				n[j] = 1;
		}
	}

	cin >> a;

	if (n[a]) cout << "소수입니다" << endl;
	else cout << "소수가아닙니다" << endl;
}