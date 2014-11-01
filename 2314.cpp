#include <iostream>

using namespace std;

int answer[2100000] = {};

int main(){
	int a, n, i;
	cin >> a >> n;

	for (i = 1; a != 0; i++){
		answer[i] = a%n;
		a /= n;
	}
	i--;
	for (; i > 0; i--){
		cout << answer[i];
	}

	cout << "(" << n << ")" << endl;
	return 0;
}