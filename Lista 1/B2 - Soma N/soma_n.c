#include <stdio.h>

int main()
{
    int num, repeat, sum = 0;
    
    scanf("%d", &repeat);
    for (int i = 0; i < repeat; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
 return 0;
}