#include <iostream>

using namespace std;
// 문제있는코드임
int light[1000001] = {};

int main(){
	int n, m, q, s, e;

	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> q >> s >> e;

		if (q){
			int cnt = 0;
			for (int j = s; j <= e; j++)
				if (light[j]) cnt++;
			cout << cnt << endl;
		}
		else{
			for (int j = s; j <= e; j++){
				if (light[j])
					light[j] = 0;
				else light[j] = 1;
			}
		}
	}


	return 0;
}