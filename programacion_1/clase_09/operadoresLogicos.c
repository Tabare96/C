#include<stdio.h>
int main()
{
    int año= 0;
    printf("cuantos dias tiene el año actual\n");
    scanf("%i", &año);
if ( (!(año % 4) && ((año % 100))) || !(año % 400) ) {
        printf("es un año bisiesto.\n");
} else {
        printf("no es un año bisiesto.\n");
}
return 0;
}
