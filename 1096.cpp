#include <iostream>
using namespace std;


int main(){
	int arr[20][20] = {};
	int n, x, y;

	for (int i = 1; i < 20; i++)
		for (int j = 1; j < 20; j++)
			cin >> arr[i][j];


	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> x >> y;

		for (int j = 1; j < 20; j++){
			if (arr[x][j]) arr[x][j] = 0;
			else arr[x][j] = 1;
		}

		for (int j = 1; j < 20; j++){
			if (arr[j][y]) arr[j][y] = 0;
			else arr[j][y] = 1;
		}
	}

	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}