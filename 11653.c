//
//  main.c
//  class
//
//  Created by 진태영 on 2022/06/22.
//

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int count = 2;
    if(num == 1) return 0;
    while(1)
    {
        if(num % count == 0)
        {
            num = num/count;
            printf("%d\n", count);
        }
        else{
            count++;
        }
        if(num == 1)
        {
            break;
        }
    }
    return 0;
}
