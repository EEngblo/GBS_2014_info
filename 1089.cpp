#include <iostream>

using namespace std;

void main(){
	long long a;
	int r, n;
	cin >> a >> r >> n;
	for (int i = 1; i < n; i++){
		a*=r;
	}

	cout << a << endl;
}