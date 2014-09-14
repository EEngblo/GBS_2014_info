#include <iostream>
#include <time.h>
using namespace std;

#define debug 0

class Baseball{
private:
	int count_answer, strike, ball, cnt;
	char *answer, *correct_answer;

	void play_ball(){
		// 정답 배열에 랜덤한 0~9 사이의 수 count_answer개 저장
		srand(time(0));
		for (int i = 0; i < count_answer; i++)	correct_answer[i] = (rand() % 10) + '0';

		if (debug) cout << "답 : " << correct_answer << endl; // 디버깅 모드일 때에는 답을 표시함
		this->strike = 0; // 스트라이크 초기화

		// 스트라이크 수가 count_answer 개가 될 때 까지 계속 루프를 돎
		while ( (this->strike) < (this->count_answer) ){ 
			while (gets_answer()); // 답3개가 정상적으로 입력될 때 까지 계속 입력받음
			check_ballcount(); // 입력받은 답을 정답과 비교함
			print_state(); // 위 줄의 결과를 출력해 줌
		}
		cout << cnt << "번 만에 맞추셨습니다!" << endl;
	}

	int gets_answer()	{
		char buffer[100];
		cout << "입력 : ";
		cin >> buffer; // 입력받은 뒤 먼저 버퍼 배열에 저장함
		fflush(stdin); // 입력이 끝났음을 의미하는 엔터가 저장되지 않도록 함
		memcpy(this->answer, buffer, this->count_answer); // 입력 데이터 중 count_answer개만 답 배열에 복사함 
		// 입력받은 데이터들이 0~9 사이의 숫자인지를 체크
		for (int i = 0; i < this->count_answer; i++)
			if (this->answer[i] < '0' || this->answer[i] > '9') return -1;
		return 0; // 맞으면 0을 리턴해 무한루프를 탈출할 수 있도록 함
	}

	void print_state(){
		char s[] = "Strike";
		char ss[] = "Strikes";
		char b[] = "Ball";
		char bb[] = "Balls";
		char bbb[10], sss[10];
		if (strike <= 1) strcpy_s(sss, s); // 스트라이크 수가 0,1개면 단수형
		else strcpy_s(sss, ss); // 스트라이크 수가 2개 이상이면 복수형

		if (ball <= 1) strcpy_s(bbb,b); // 볼 수가 0,1개면 단수형
		else strcpy_s(bbb,bb); // 볼 수가 2개 이상이면 복수형

		cout << strike << sss << "  " << ball << bbb << endl; // 볼카운트 출력

	}

	void check_ballcount(){
		this->cnt++;
		this->strike = this->ball = 0; // 볼, 스트라이크 수를 0으로 초기화함
		for (int i = 0; i < this->count_answer; i++){
			for (int j = 0; j < this->count_answer; j++){
				if (correct_answer[i] - answer[j] == 0){ // 정답 배열 중 하나와 답 배열 중 하나의 값이 같을 때,
					if (i - j) this->ball++;			 // 정답 배열에서의 위치와 답 배열에서의 위치가 같으면 볼++,
					else this->strike++;                 // 정답 배열에서의 위치와 답 배열에서의 위치가 같으면 스트라이크++
				}
			}
		}
	}

public:
	Baseball() { //클래스 생성자
		count_answer = 3; // 답을 3개 받아온다
		answer = new char[count_answer]; // 답 배열 동적할당
		correct_answer = new char[count_answer]; // 정답 배열 동적할당
	}

	~Baseball() { //클래스 소멸자
		free(answer); // 답 배열을 메모리에서 해제한다
		free(correct_answer); // 정답 배열을 메모리에서 해제한다
	}

	void start() { play_ball(); }; // play_ball 함수 호출
};


int main()
{
	Baseball Baseball;
	Baseball.start();
	return 0;
}