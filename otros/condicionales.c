#include <stdio.h>
int main()
{
    int edad;
    printf("ingresa tu edad\n");
    scanf("%i",&edad);
    if(edad >=18)
    {
        printf("eres mayor de edad\n");
    }
    else if(edad==17)
    {
        printf("sorry bro, casi eres mayor de edad\n");
    }
    else{
        printf("eres menor de edad");
    }
    //getch();
    //system("pause");
    return 0; //termina el programa
}