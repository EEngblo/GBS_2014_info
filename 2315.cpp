#include <iostream>
#include <math.h>
using namespace std;

int answer[2100000] = {};

int main(){
	int a, b;
	double p, q, temp;
	cin >> a >> b;
	
	p = (a - sqrt(a*a - 4 * b)) / 2;
	q = (a + sqrt(a*a - 4 * b)) / 2;
	
	if (q < p){
		temp = p;
		p = q;
		q = temp;
	}

	if ((int)p == p && (int)q == q)
		cout << "(x" << -p << ")(x" << -q << ")" << endl;
	else cout << "impossible" << endl;

	return 0;
}