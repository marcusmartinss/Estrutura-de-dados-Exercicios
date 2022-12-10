/* #include <stdio.h>

void ultrapassa(unsigned int num, unsigned int soma)
{
    ate_o_zero(0);

    if ( soma >= 90 )
    {
        ultrapassa(num, 0);
        printf("%u\n", num);
    }

    if ( num == 0 )
    {
        ate_o_zero(num);
        return;
    }

    soma += num;
}

int ate_o_zero(unsigned int num)
{
    scanf("%u", &num);

    if ( num == 0 ) return 0;

    return ate_o_zero(num);
}

int main()
{
    ultrapassa(0, 0);
    printf("\n");
 return 0;
} */