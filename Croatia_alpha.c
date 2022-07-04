#include <stdio.h>
#include<string.h>
// 크로아티아 대체 문자들을 선언 후 일일이 비교

int main(void) {
  char words[100];
  int cnt = 0;
  char c1[2] = {'c', '='};
  char c2[2] = {'c', '-'};
  char dz[3] = {'d', 'z', '='};
  char d_[2] = {'d', '-'};
  char lj[2] = {'l', 'j'};
  char nj[2] = {'n', 'j'};
  char s_[2] = {'s', '='};
  char z_[2] = {'z', '='};
  
  scanf("%s", words);

  for(int i = 0; words[i] != '\0'; i++)
    {
      if(words[i] == c1[0] && words[i+1] == c1[1])
      {
        cnt ++;
        i ++;
      }
      else if(words[i] == c2[0] && words[i+1] == c2[1])
      {
        cnt++;
        i++;
      }
      else if(words[i] == dz[0] && words[i+1] == dz[1] && words[i+2] == dz[2])
      {
        cnt ++;
        i +=2;
      }
      else if(words[i] == d_[0] && words[i+1] == d_[1])
      {
        cnt ++;
        i++;
      }
      else if(words[i] == lj[0] && words[i+1] == lj[1])
      {
        cnt ++;
        i++;
      }
      else if(words[i] == nj[0] && words[i+1] == nj[1])
      {
        cnt++;
        i++;
      }
      else if(words[i] == s_[0] && words[i+1] == s_[1])
      {
        cnt ++;
        i++;
      }
      else if(words[i] == z_[0] && words[i+1] == z_[1])
      {
        cnt++;
        i++;
      }
      else cnt++;
    }
  printf("%d", cnt);
  }
