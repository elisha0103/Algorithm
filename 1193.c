#include <stdio.h>

int main(void) {
  int h = 1;     //분수의 분자
  int w = 1;     //분수의 분모 
  int reverse,num;  // reverse : 지그재그 진행상태에서 방향을 의미
  int count = 1;
  int i =1;

  scanf("%d", &num);
  if(num == count)  // 만약 1이 입력되면 최초 분수 1/1을 출력
  {
    printf("1/1");
    return 0;
    }

  reverse = 1;  // 오른쪽방향은 1, 왼쪽방향은 0
  
  while(i)
    {
      if(num == count)  // 만약 입력받은 숫자랑 지그재그 순서의 값이 같다면
      {
        printf("%d/%d", h,w);    //해당 분수 출력
        break;
      }
      if(reverse == 1)  //오른쪽 방향으로 진행할 때
      {
        if(h==1)  // 분자가 1이면
        {
          w++;  // 분모 +1 하고
          reverse = 0;  // 방향을 왼쪽으로 전환
        }
        else if(h != 1)
        {
          w++;  // 만약 오른쪽 방향으로 진행하는데 분자가 1이 아니라면 분모는 +1, 분자는 -1
          h--;
        }
      }
      else if(reverse == 0)
      {
        if(w!=1)
        {
          h++;
          w--;
        }
        else if (w==1)
        {
          h++;
          reverse = 1;
        }               
      }
      count++;
      
    }
  return 0;
}	
