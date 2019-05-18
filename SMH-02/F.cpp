#include <iostream>
using namespace std;
int N, M, L;	// ��� ��, �� �޴� Ƚ��, ���� �̵�
int COUNT[1001];

int NEXT(int M) {
	int BALL;
	if (COUNT[M] % 2 == 1) {
		BALL = M + L;
		if (BALL > N) BALL-= N;
		return BALL;
	} // ���� Ƚ�� Ȧ��
	else {
		BALL = M - L;
		if (BALL < 1) BALL = N - abs(BALL);
		return BALL;
	} // ���� Ƚ�� ¦��
}

int main() {
	cin >> N >> M >> L;
	int answer = 0;
	for (int i = 1; i <= N; i++)
		COUNT[i] = 0;
	COUNT[1]++;
	int BALL = 1;
	
	while (COUNT[BALL] != M) {
		BALL = NEXT(BALL);
		COUNT[BALL]++;
		answer++;
	}
	cout << answer << endl;
}