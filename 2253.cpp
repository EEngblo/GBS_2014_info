#include <iostream>

using namespace std;


int main(){
	int course, a, b;
	cin >> course >> a >> b;

	double va = 5.0 / a, vb = 5.0 / b, t;
	if (course) {
		if (b  == a) t = 0;
		else t = fabs(5.0 / (va - vb));
	}
	else t = fabs(5.0 / (vb + va));

	if (t == 0) cout << 0 << endl;
	else {
		cout << fixed;
		cout.precision(2);
		cout << t << endl;
	}

	return 0;
}