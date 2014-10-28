#include <iostream>
using namespace std;

int arr[10][10];
int x = 1, y = 1;

int moveright();
void movedown();

int main(){

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			cin >> arr[i][j];
	}

	while (moveright());

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}

int moveright(){
	for (; x < 9; x++){
		arr[y][x] = 9;
		if (arr[y][x+1] == 1) movedown();
	}

	if (arr[8][8] == 9) return 0;
	else cout << "error"; return 1;
}

void movedown(){
	while (arr[y][x+1]) arr[++y][x] = 9;
}