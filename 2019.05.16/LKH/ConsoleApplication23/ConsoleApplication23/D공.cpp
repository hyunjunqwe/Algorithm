#include <stdio.h>
void ball(int c);

int main() {
	int count;

	scanf("%d", &count);//���� ��ġ�� �ٲ� Ƚ���� �Է¹޴´�.

	while (1) {
		if (count <= 50 && count > 0) {//count�� 50���� �۰ų� ���� �ڿ����� �޾��� ��
			ball(count);//ball�� count�� �־��ְ�
			break;//�ݺ����� �����Ѵ�.
		}
		else//count�� �� ���� ���ڷ� �޾��� ���
			scanf("%d", &count);//�ٽ� �Է¹޴´�.
	}
	return 0;
}

void ball(int c)
{
	int ball = 1;
	int cup1, cup2, temp, i;
	int cup[3] = { 0 };

	cup[0] = ball;//ù��° �ſ� ���� �־�д�.

	while(c > 0) {//c�� 0���� Ŭ���� �ݺ��Ѵ�.
		scanf("%d %d", &cup1, &cup2);
		if ((cup1 <= 3 && cup1 > 0) && (cup2 <= 3 && cup2 > 0)) 
		{	//�� ��ȯ
			temp = cup[cup1-1];
			cup[cup1-1] = cup[cup2-1];
			cup[cup2-1] = temp;
			c--;//����� �Է¹޾��� ��쿡 c�� ���� ���ҽ�Ų��.
		}
	}

	for (i = 0; i < 3; i++) {
		if (cup[i] == 1)//�ſ� ���� ������� ���
			printf("%d\n", i+1);//��� ������ ����Ѵ�.
		if(i == 3 && cup[i] != 1)//��� �ſ� ���� ���� ���
			printf("%d\n", -1);//-1�� ����Ѵ�.
	}
}

