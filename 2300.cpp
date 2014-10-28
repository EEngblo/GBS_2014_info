#include <iostream>
using namespace std;

int arr[10][10];
int x = 1, y = 1;

int moveright();
void movedown();

int main(){
	int n, a = 5, b = 6, k = 0;
	cin >> n;

	while (a < n && a > 0){
		k += n / a;
		k -= n / (a*b);
		a *= 5;
	}

	cout << k;

	return 0;
} // 501