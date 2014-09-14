#include <iostream>
#include <time.h>
using namespace std;

#define debug 0

class Baseball{
private:
	int count_answer, strike, ball, cnt;
	char *answer, *correct_answer;

	void play_ball(){
		// ���� �迭�� ������ 0~9 ������ �� count_answer�� ����
		srand(time(0));
		for (int i = 0; i < count_answer; i++)	correct_answer[i] = (rand() % 10) + '0';

		if (debug) cout << "�� : " << correct_answer << endl; // ����� ����� ������ ���� ǥ����
		this->strike = 0; // ��Ʈ����ũ �ʱ�ȭ

		// ��Ʈ����ũ ���� count_answer ���� �� �� ���� ��� ������ ��
		while ( (this->strike) < (this->count_answer) ){ 
			while (gets_answer()); // ��3���� ���������� �Էµ� �� ���� ��� �Է¹���
			check_ballcount(); // �Է¹��� ���� ����� ����
			print_state(); // �� ���� ����� ����� ��
		}
		cout << cnt << "�� ���� ���߼̽��ϴ�!" << endl;
	}

	int gets_answer()	{
		char buffer[100];
		cout << "�Է� : ";
		cin >> buffer; // �Է¹��� �� ���� ���� �迭�� ������
		fflush(stdin); // �Է��� �������� �ǹ��ϴ� ���Ͱ� ������� �ʵ��� ��
		memcpy(this->answer, buffer, this->count_answer); // �Է� ������ �� count_answer���� �� �迭�� ������ 
		// �Է¹��� �����͵��� 0~9 ������ ���������� üũ
		for (int i = 0; i < this->count_answer; i++)
			if (this->answer[i] < '0' || this->answer[i] > '9') return -1;
		return 0; // ������ 0�� ������ ���ѷ����� Ż���� �� �ֵ��� ��
	}

	void print_state(){
		char s[] = "Strike";
		char ss[] = "Strikes";
		char b[] = "Ball";
		char bb[] = "Balls";
		char bbb[10], sss[10];
		if (strike <= 1) strcpy_s(sss, s); // ��Ʈ����ũ ���� 0,1���� �ܼ���
		else strcpy_s(sss, ss); // ��Ʈ����ũ ���� 2�� �̻��̸� ������

		if (ball <= 1) strcpy_s(bbb,b); // �� ���� 0,1���� �ܼ���
		else strcpy_s(bbb,bb); // �� ���� 2�� �̻��̸� ������

		cout << strike << sss << "  " << ball << bbb << endl; // ��ī��Ʈ ���

	}

	void check_ballcount(){
		this->cnt++;
		this->strike = this->ball = 0; // ��, ��Ʈ����ũ ���� 0���� �ʱ�ȭ��
		for (int i = 0; i < this->count_answer; i++){
			for (int j = 0; j < this->count_answer; j++){
				if (correct_answer[i] - answer[j] == 0){ // ���� �迭 �� �ϳ��� �� �迭 �� �ϳ��� ���� ���� ��,
					if (i - j) this->ball++;			 // ���� �迭������ ��ġ�� �� �迭������ ��ġ�� ������ ��++,
					else this->strike++;                 // ���� �迭������ ��ġ�� �� �迭������ ��ġ�� ������ ��Ʈ����ũ++
				}
			}
		}
	}

public:
	Baseball() { //Ŭ���� ������
		count_answer = 3; // ���� 3�� �޾ƿ´�
		answer = new char[count_answer]; // �� �迭 �����Ҵ�
		correct_answer = new char[count_answer]; // ���� �迭 �����Ҵ�
	}

	~Baseball() { //Ŭ���� �Ҹ���
		free(answer); // �� �迭�� �޸𸮿��� �����Ѵ�
		free(correct_answer); // ���� �迭�� �޸𸮿��� �����Ѵ�
	}

	void start() { play_ball(); }; // play_ball �Լ� ȣ��
};


int main()
{
	Baseball Baseball;
	Baseball.start();
	return 0;
}