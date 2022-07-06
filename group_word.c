#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	int num;           // 테스트 횟수
	int count = 0;     // 그룹숫자 개수
  int len;  
  
	scanf("%d", &num);
	count = num;
	for (int i = 0; i < num; i++)
	{
		char sen[100];  // 테스트 횟수만큼 그룹숫자를 입력받는다. 입력받을 때마다 문자열 배열 초기화
		char alpha[26] = { 0 };   // 그룹숫자인지 비교하여 알기 위한 알파벳 배열
    bool endloop=false;

		scanf("%s", sen);
    len = strlen(sen);
		for (int j = 0; j < len; j++)  // 입력받은 문자열 수만큼 반복 (strlen함수를 넣지 않는 것은 매번 for문을 사용할 때 함수를 실행해야하므로 변수 설정해서 한번만 실행되도록
		{
			for (int k = 0; k < 26; k++)  // 각 문자열에 해당하는 알파벳 비교
			{
				if (sen[j] == 'a' + k)  // 입력받은 문자열이 ascii 코드 문자값과 같다면
				{
					if (alpha[k] == 0 || sen[j - 1] == sen[j]) alpha[k] ++;  
                    // 해당 알파벳이 한번도 나온적 없거나 해당 문자가 j-1 번째 문자와 같다면 alpha[k] ++
					else if (alpha[k] != 0 && sen[j - 1] != sen[j]) 
          {
            alpha[k] = -1;
            endloop = true;  // 이중 반복 빠져나오기 위한 조건
             break;            
            }
                    // 해당 알파벳이 나온적이 있는데(!= 0), j-1 번째 문자와도 같지 않다면 해당 알파벳은 -1
                    // 어떤 알파벳에 연속성이 끊긴 것을 의미
				}
			}
      if(endloop) break;  // 이중 반복 빠져나오기

		}
		for (int k = 0; k < 26; k++)
		{
			if (alpha[k] == -1)  // 연속성이 끊긴 알파벳이 한개라도 있다면
			{
				count--;  // 그룹문자 개수에서 -1 하고 k=26으로 하여 반복문을 빠져나옴
				break;            
			}
		}

	}

	printf("%d", count);

	return 0;
}	
