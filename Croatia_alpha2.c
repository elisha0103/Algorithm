#include <stdio.h>
#include<string.h>
// 입력받은 총 문자열 개수에서 크로아티아 문자에 해당한다면 총 문자열에서 차감하는 방식
// 앞선 버전보다 메모리를 적게 사용함.

int main(void) {
  char words[100];
  int cnt = 0;
  int len;

  scanf("%s", words);
  cnt = strlen(words);
  for(int i = 0; i < strlen(words); i ++)
    {
      if(words[i] == '=')
      {
        if(words[i-1] == 's')
        {
          cnt--;
        }
        else if(words[i-1] == 'z')
        {
          cnt--;
          if(words[i-2] == 'd')
          {
            cnt--;
          }
        }
        else if(words[i-1] == 'c')
        {
          cnt --;
        }
      }
      else if(words[i] == '-')
      {
        if(words[i-1] == 'c')
        {
          cnt --;
        }
        else if(words[i-1] == 'd')
        {
          cnt--;
        }
      }
      else if(words[i] == 'j')
      {
        if(words[i-1] == 'l')
        {
          cnt--;
        }
        else if(words[i-1] == 'n')
        {
          cnt--;
        }
      }
    }
  printf("%d", cnt);
  }
