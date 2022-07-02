#include <stdio.h>
void  han_soo(int n)  // 한수발생 프로그램 (범위 내에서 각 자리 수가 등차수열을 이루는 숫자 찾기)
{
	int count = 0;
	if (n < 100) printf("%d", n); // ( 1~2자리 수는 등차수열 값이 모두 한개 존재)
	else if (n <= 1000) {        //  (3자리수는 각 자리의 등차 값이 서로 같으면 카운트)
		count = 99;
		for (int i = 100; i < n + 1; i++)
		{
			if (i % 10 - (i / 10) % 10 == (i / 10) % 10 - i / 100) count++;
		}
		printf("%d", count);
	}

}

int main() {
	int num;
	scanf("%d", &num);

	han_soo(num);

}
