#include <iostream>
using namespace std;
// 문제있는코드
int main(){
	int student[10][12] = {};
	int n, answ = 0;

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			cin >> student[i][j];
	}

	cin >> n;

	for (int k = 0; k < n; k++){
		answ = 0;
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				switch (student[i][j]){
				case 2:
					if (j + 2 < 10)
						student[i][j + 2]++;
				case 1:
					if (j + 1 < 10)
						student[i][j + 1]++;
					break;

				default:
					student[i][j] = 0;
				}



			}
		}
	}

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			if (student[i][j]) answ++;
	}

	cout << answ << endl;

	return 0;
}