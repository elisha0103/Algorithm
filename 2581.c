#include <stdio.h>
int main() {
    int n, m;
    int sum = 0;
    int min = 0;

    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i ++)
      {
        for(int j = 2; j <= i;)
          {
            if(j == i)
            {
              if(sum == 0) min = i;
              sum += i;
              break;
            }

            if(i % j == 0) break;
            else if(i % j != 0)
            {
              j++;
            }
          }
      }
  if(sum==0) printf("-1");
  else printf("%d\n%d\n", sum, min);

  return 0;
  }
