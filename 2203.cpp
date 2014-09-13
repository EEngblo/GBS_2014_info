#include <iostream>
#include <iomanip>
using namespace std;
using std::fixed;
using std::setprecision;

void main(){
	double n, v, u, answ;
	cin >> n >> v >> u;

	answ = (n / (2 * v))*u;


	cout << fixed;
	cout.precision(2);
	cout << answ << " km" << endl;

}