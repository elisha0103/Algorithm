#include <stdio.h>

int main(){
  int n, m;
  int arr[100][100];
  int min = 0;
  int row = 0;
  scanf("%d %d", &n, &m);

  for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
        {
      scanf("%d", &arr[i][j] );
        }
    }
  for(int i = 0; i < n; i++)
    {
        row = arr[i][0];
      for(int j = 0; j < m; j ++)
        {
          if(arr[i][j] <= row)
          {
            row = arr[i][j];
            }
        }
      if(row >= min) min = row;
    }
  printf("%d", min);
  return 0;
}
