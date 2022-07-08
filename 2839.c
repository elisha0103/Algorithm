#include <stdio.h>
int main(){
    int i = 1;
    int num;
    int count = 0;
    scanf("%d", &num);
    
    while(i)
    {
        if(num % 5 == 0)
        {
            count += num/5;
            break;
        }
        else if(num % 5 != 0)
        {
            num -= 3;
            count++;
        }
        else if(num <= 0)
        {
            break;
        }
    }
    if(num < 0) printf("-1");
    else printf("%d", count);
    return 0;
}
