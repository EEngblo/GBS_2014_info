#include <iostream>
using namespace std;

int main(){
	int n;

	cin >> n;

	int k[10000];

	for (int i = 0; i < n; i++) cin >> k[i];

	int answ=k[0];
	for (int i = 0; i < n; i++)	if (k[i] < answ) answ = k[i];
	
	cout << answ;

	return 0;
}