#include <stdio.h>
int main(){
    int k, n, t;
    int arr[15][14];
    
    for(int j = 0; j < 15; j ++)
            {
                if(j<14) arr[0][j] = j+1;
                arr[j][0] = 1;
            }
            for (int j = 1; j < 15; j ++)
            {
                    for(int k = 1; k < 14; k ++)
                    {
                        arr[j][k] = arr[j][k-1] + arr[j-1][k];
                    }
            }
            
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &k, &n);
        
        printf("%d\n", arr[k][n-1]);

        }
    }
