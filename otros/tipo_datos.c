#include<stdio.h>
int main()
{
int numero1=1;
int numero2=2.1;
float numero3=12.23;
char letra="a";
char palabra[5] = "HOLA";

printf("\n El valor de numero1 es: %d", numero1);
printf("\n El valor de numero2 es: %d", numero2);
printf("\n El valor de numero3 es: %f", numero3);
printf("\n El valor de letra es: %c", &letra);
printf("\n El valor de palabra es: %s",&palabra);

}