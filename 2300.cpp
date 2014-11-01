#include <iostream>
using namespace std;

int main(){
	int n, a = 5, k = 0;
	cin >> n;

	while (a <= n){
		k += n / a;
		k -= n / (a*6);
		a *= 5;
	}
	
	cout << k << endl;

	return 0;
} // 501