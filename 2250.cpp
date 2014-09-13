#include <iostream>
#include <iomanip>
using namespace std;

void main(){
	char name[21], school[41], sex[5];
	int gender;
	string gbs("경기북과학고");
	
	cin >> name >> gender >> school;

	string kbs(school);

	if (gender == 1) strcpy_s(sex, "남자");
	else strcpy_s(sex,"여자");
	
	if (gbs.compare(kbs))
		cout << name << "(" << sex << ")님은 본교 학생이 아닙니다" << endl;
	else cout << name << "(" << sex << ")님은 본교 학생입니다" << endl;

}