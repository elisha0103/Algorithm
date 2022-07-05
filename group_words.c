#include <stdio.h>
#include <string.h>
int main(void) {
	int num;
	int count = 0;


	scanf("%d", &num);

	count = num;
	for (int i = 0; i < num; i++)
	{
		char sen[101];
		char alpha[26] = { 0 };

		scanf("%s", sen);
		for (int j = 0; j < strlen(sen); j++)
		{
			for (int k = 0; k < 26; k++)
			{
				if (sen[j] == 'a' + k)
				{
					if (alpha[k] == 0 || sen[j - 1] == sen[j]) alpha[k] ++;
					else if (alpha[k] != 0 && sen[j - 1] != sen[j]) alpha[k] = -1;
				}
			}

		}
		for (int k = 0; k < 26; k++)
		{
			if (alpha[k] == -1)
			{
				count--;
				k = 26;
			}
		}

	}

	printf("%d", count);

	return 0;
}	
