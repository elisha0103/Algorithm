#include <stdio.h>
// 벌집

int main(void) {
  int count = 0; // 지나는 방 카운트
  int min = 1;  // 범위 최소
  int num;  // 입력받을 수
  
  // 방의 번호 규칙
  /*
  1     1          1
  2     2-7        2-(6*1-2)      min =2
  3     8-19       8-(6*2-8)      min = min +(6*1)
  4     20-37      20-(6*3-20)    min = min +(6*2) 
  5     38-61      38-(6*4-38)    min = min +(6*3)
  6     62-85      62-(6*5-62)    min = min +(6*4)
  */
  scanf("%d",&num);
  int i =1;
  if(num == min)  // 받는 수가 1인경우 1 출력
  {
    printf("%d", min);
    i = 0;
  }
  else // 받는 수가 1이 아니면 min = 2, count = 1
  {
    min++;
    count++;
    }
  
  while(i)
    {
      if((min<= num) && (num <= 6*count +min -1))
      {
        printf("%d", count+1);
        break;
      }
      else
      {
        min = min+ 6*count;
        count++;
      }
    }
}	
