#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, m;
    bool arr[1000001] = { 0 };
    scanf("%d %d", &n, &m);

    arr[1] = 1;

    for (int i = 2; i <= m; i++)
    {
        for (int j = 2; i * j <= m; j++)
            {
                arr[i * j] = 1;
                
            }
        
    }
    for (int i = n; i <= m; i++)
    {
        if(arr[i] == 0) printf("%d\n", i);
    }
    return 0;
}

