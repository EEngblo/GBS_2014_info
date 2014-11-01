#include <iostream>
using namespace std;

int main(){
	int n, i = 1, j = 1, cnt = 1;
	cin >> n;
	while (1){
		if (n == 1) goto end;

		j++; cnt++;
		if (cnt == n) goto end;

		while (j > 1){
			i++;
			j--;
			cnt++;
			if (cnt == n) goto end;
		}

		i++; cnt++;
		if (cnt == n) goto end;

		while (i > 1){
			i--;
			j++;
			cnt++;
			if (cnt == n) goto end;
		}
	}
end:
	cout << "(" << i << "," << j << ")" << endl;
	return 0;
}
