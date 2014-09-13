#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


bool isPrime(int n){
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	int sqrtn = int(sqrt(n));
	for (int i = 3; i <= sqrtn; i += 2)
		if (n%i == 0)
			return false;
	return true;

}

void main(){
	int a;

	cin >> a;

	if (isPrime(a)) cout << "�Ҽ��Դϴ�" << endl;
	else cout << "�Ҽ����ƴմϴ�" << endl;
}