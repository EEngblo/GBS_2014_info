#include <iostream>
#include <math.h>
using namespace std;
// 문제있는코드임

long long factorial(int n){
	int f = 1;
	for (int i = n; i > 0; i--)
		f = f*i;
	return f;
}

long long combination(int n, int r){
	return(factorial(n) / (factorial(r)*factorial(n - r)));
}


int main(){
	int n;
	long long cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i ++){
		cnt += combination(n, i) * pow(3,n-i);
	}
	
	cout << cnt;
	return 0;
}