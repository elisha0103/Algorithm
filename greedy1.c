#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){

  int n, m, k;
  int arr[1000];
  scanf("%d %d %d", &n, &m, &k);
  int max = 0;
  int min = 0;
  int sum = 0;
  int exit = 0;
  for(int i = 0; i < n; i ++)
    {
      scanf("%d", &arr[i]);
    }

  for(int i = 0; i < n; i ++)
    {
      if(arr[i] >= max) 
      {
        min = max;
        max = arr[i];
        }
    }

  for(int i = 0; i < m; i ++)
    {
      for(int j = 0; j < k; j++)
        {
          sum += max;
          i ++;
          if(i== m){
            exit = 1;
            break; 
          }
        }
      if(exit) break;
      sum += min;
    }
  printf("%d", sum);
  return 0;
  }
