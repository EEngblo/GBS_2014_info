#include <iostream>

using namespace std;


void main(){
	int course, a, b;
	cin >> course >> a >> b;

	double va = 5.0 / a, vb = 5.0 / b, t;
	if (course) {
		if (vb - va == 0) t = 0;
		else t = abs(5.0 / (vb - va));
	}
	else t = abs(5.0 / (vb + va));

	cout << fixed;
	cout.precision(2);
	cout << t << endl;
}