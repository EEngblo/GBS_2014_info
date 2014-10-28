#include <iostream>
using namespace std;

int main(){
	char str[100];
	int answ = 0;

	cin >> str;
	for (int i = 0; str[i] != NULL; i++){
		for (int j = 0; (i - j + 1) && str[i + j] != NULL; j++){
			if (str[i - j] == str[i + j]) answ++;
		}
	}
	
	cout << answ << endl;

	return 0;
}