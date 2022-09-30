#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
int numero1, numero2;
float numero3;
char letra;
char palabra[5];

printf("\n Escriba el valor de numero1: ");
scanf("%d",&numero1);
printf("\n Escriba el valor de numero2: ");
scanf("%d",&numero2);
printf("\n Escriba el valor de numero3: ");
scanf("%f",&numero3);
printf("\n Escriba el valor de letra: ");
scanf("%c",&letra);
printf("\n Escriba el valor de palabra: ");
scanf("%s",&palabra);

printf("\n El valor introducido de numero1 es: %d", numero1);
printf("\n El valor introducido de numero2 es: %d", numero2);
printf("\n El valor introducido de numero3 es: %f", numero3);
printf("\n El valor introducido de letra es: %c", &letra);
printf("\n El valor introducido de la palabra es: %s",& palabra);

return 0;
}