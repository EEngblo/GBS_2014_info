#include <iostream>
using namespace std;

int main(){
	int grid, rule[8], state[100][11] = {};
	cin >> grid;
	for (int i = 0; i < 8; i++)
		cin >> rule[i];
	
	for (int i = 1; i <= grid; i++)
		cin >> state[i][0];

	for (int i = 1; i <= 10; i++){
		for (int j = 2; j < grid; j++){
			int seed = state[j - 1][i - 1] * 4 + state[j][i - 1] * 2 + state[j + 1][i - 1];
			state[j][i] = rule[seed];
		}
	}

	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= grid; j++){
			cout << state[j][i];
			if(j==grid) break;
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}
