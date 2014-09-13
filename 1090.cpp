#include <iostream>

using namespace std;

void main(){
	long long a;
	int m, d, n;
	cin >> a >> m >> d >> n;
	for (int i = 1; i < n; i++){
		a *= m;
		a += d;
	}

	cout << a << endl;
}