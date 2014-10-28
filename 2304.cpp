#include <iostream>
using namespace std;

int main(){
	int k, n, i, j, answ;

	cin >> k >> n;
	for (i = 1; i <= k; i++){
		for (j = 1; j <= k; j++){
			cin >> answ;
			if (answ == n) {
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
}