#include <iostream>
#include <iomanip>
using namespace std;

void main(){
	char name[21], school[41], sex[5];
	int gender;
	string gbs("���ϰ��а�");
	
	cin >> name >> gender >> school;

	string kbs(school);

	if (gender == 1) strcpy_s(sex, "����");
	else strcpy_s(sex,"����");
	
	if (gbs.compare(kbs))
		cout << name << "(" << sex << ")���� ���� �л��� �ƴմϴ�" << endl;
	else cout << name << "(" << sex << ")���� ���� �л��Դϴ�" << endl;

}