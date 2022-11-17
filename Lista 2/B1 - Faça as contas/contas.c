int faz_conta_direito(int parcelas, char op)
{
    int i, valores[parcelas];

    for ( i = 0; i < parcelas; i++)
    {
        scanf("%d", &valores[i]);

        if ( i >= 1 )
        {
            ( op == '-' ) ? (valores[0] -= valores[i]) : (valores[0] += valores[i]);
        }
    }
 return valores[0];
}