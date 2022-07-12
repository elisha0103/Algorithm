#include <stdio.h>
// 에라토스테네스의 체를 이용한 풀이법

int main() {
	int arr[246913] = { 0 };
	arr[1] = 1;
	while (1)
	{
		int n;
		int count = 0;
		scanf("%d", &n);
		if (n == 0) break;  // 입력값이 0이면 종료 그전까지는 계속 실행
		for (int i = 2; i <= n; i++)  // 2 ~ 2n까지의 소수를 구하는 프로그램
		{
			for (int j = 2; j * i <= 2 * n; j++)  // 2 ~ n을 검사하면서 검사 수의 배수 중 2n까지의 값은 모두 소수가 아님을 표시해준다. arr배열의 인덱스 값을 증가한다.
			{
				arr[i * j]++;
			}
		}
		for (int i = n+1; i <= 2 * n; i++)  // n+1을 넘고 2n 이하인 범위에서 소수를 구하면 되는 
		{
			if (arr[i] == 0) {
				count++;
				
			}
		}
		printf("%d\n", count);
	}

	return 0;
}
