#include <iostream>
using namespace std;

int main(){
	int i,j,k, w=1,size, cnt;
	double a, two[30] = {};
	
	cin >> k;

	if (k == 1) {
		cout << "1 0" << endl;
		return 0;
	}

	for (i = 0; w < k;){
		two[i] = w;
		w *= 2;
		i++;
	}
	cnt = i;
	two[i] = w;
	size = two[i];
	for (; k != 0; i--){
		a = k / two[i];
		if (a*two[i] == ((int)a)*two[i]) break;
	}
	cnt -= i;
	cout << size << " " << cnt << endl;

	return 0;
}