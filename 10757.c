#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
#include <stdbool.h>

void reverse(char* a);

int main()
{
	char a[10001] = { 0 };
	char b[10001] = { 0 };
	char result[10002] = { 0 };
	int len;
	int carry = 0;

	scanf("%s %s", a, b);

	reverse(a);
	reverse(b);

	if (strlen(a) >= strlen(b)) len = strlen(a);
	else len = strlen(b);

	for (int i = 0; i < len; i++)
	{
		int sum = a[i] - '0' + b[i] - '0' + carry;
		if (sum < 0) sum += '0';
		if (sum > 9) carry = 1;
		else carry = 0;
		result[i] = sum % 10 + '0';
	}
	if (carry == 1) result[len] = '1';
	reverse(result);
	printf("%s", result);

	return 0;
}

void reverse(char* a)
{
	int len;
	len = strlen(a);
	char temp;

	for (int i = 0; i < len/2; i++)  // reverse 횟수는 반만 해줘야한다. len 길이만큼 반복되면 리버스에서 리버스 즉 360도 회전이 된다.
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
	

}
