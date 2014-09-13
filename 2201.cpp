#include <iostream>

using namespace std;

void main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a > b){
		int tmp = a;
		a = b;
		b = a;
	}

	if ((a < c && c < b)^(a < d && d < b))
		cout << "Cross" << endl;
	else cout << "Not Cross" << endl;

}