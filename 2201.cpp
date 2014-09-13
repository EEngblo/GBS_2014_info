#include <iostream>

using namespace std;

void main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((a < c && c < b && a < d && d < b) || (a > c && c > b && a > d && d > b))
		 cout << "Not Cross" << endl;
	else cout << "Cross" << endl;
	
}