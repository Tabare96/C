#include <stdio.h>
int main()
{
    int iteracion=0, x=0;
    while (iteracion<=80)
    {
        //printf("iteracion va por la suma: %i\n",iteracion);
        if((iteracion!=0) && (iteracion%10==0))
        {
            iteracion= iteracion+1;
            x=x+2;
            printf("x vale: %i\n", x);
        }
        iteracion=iteracion+1;
    }
    return 0;
}