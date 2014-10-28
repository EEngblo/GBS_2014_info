#include <iostream>
using namespace std;
// 문제있는코드
int main(){ 
	int student[12][12] = {};
	int n, answ=0;

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			cin >> student[i][j];
	}

	cin >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < 10; j++){
			for (int k = 0; k < 10; k++){
				switch (student[j][k]){
				case 2:
					student[j][k + 2]++;
				case 1:
					student[j][k + 1]++;
					break;

				default:
					student[j][k] = 0;
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