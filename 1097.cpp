#include <iostream>
using namespace std;


int main(){
	int h, w, n, l, d, y, x;
	int arr[100][100] = {};

	cin >> h >> w >> n;

	for (int i = 0; i < n; i++){
		cin >> l >> d >> x >> y;

		for (int j = 0; j < l; j++){
			if (d) arr[x + j][y] = 1;
			else arr[x][y + j] = 1;
		}
	}

	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}