#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
	char name[21], school[41], sung[5];
	int gender;
	string gbs("경기북과학고");

	cin >> name >> gender >> school;

	string kbs(school);

	if (gender == 1) strcpy(sung, "남자");
	else strcpy(sung, "여자");

	if (gbs.compare(kbs))
		cout << name << "(" << sung << ")님은 본교 학생이 아닙니다." << endl;
	else cout << name << "(" << sung << ")님은 본교 학생입니다." << endl;

	return 0;
}