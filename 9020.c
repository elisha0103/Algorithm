#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
#include <stdbool.h>

int main() {
	int test;
	int arr[100001] = { 0 };
	int sosoo;
	int num;

	arr[1] = 1;

	for (int i = 2; i <= 5000; i++) {
		for (int j = 2; i * j <= 10000; j++)
		{
			arr[i * j] ++;
		}
	}
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num/2; j++)
		{
			if (arr[j] == 0 && arr[num-j] == 0)
			{
				sosoo = j;
			}
		}
		printf("%d %d\n", sosoo, num - sosoo);
	}
	
}
