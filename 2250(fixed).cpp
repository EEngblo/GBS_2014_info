#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
	char name[21], school[41], sung[5];
	int gender;
	string gbs("���ϰ��а�");

	cin >> name >> gender >> school;

	string kbs(school);

	if (gender == 1) strcpy(sung, "����");
	else strcpy(sung, "����");

	if (gbs.compare(kbs))
		cout << name << "(" << sung << ")���� ���� �л��� �ƴմϴ�." << endl;
	else cout << name << "(" << sung << ")���� ���� �л��Դϴ�." << endl;

	return 0;
}