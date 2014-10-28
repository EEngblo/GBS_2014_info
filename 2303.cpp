#include <iostream>
using namespace std;

int main(){
	int n, a, b, answ;
	int arr[10001] = {};

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	do{
		answ = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i++)
			answ += arr[i];

		cout << answ << endl;

	} while (a || b);

	return 0;
}