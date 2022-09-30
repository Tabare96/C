#include <stdio.h>

//GENERA UN PROMEDIO DE LOS VALORES DEL ARRAY
/*float main ()
{
float datos[] = {4,5,6};
int N = 3;
int i;
float suma = 0;
for (i=0; i<N; i++)
suma = suma + datos[i];
printf("%f\n", suma/N);
return suma/N;
}*/

int main()
{
float datos[] = {4,5,6};
int N = 3;   
// media(datos, N);
for (int i = 0; i < N; i++)
{
    printf(" %.2f -", datos[i]);
}
for (int i = 0; i < N; i++)
{
    datos[i] = datos[i] + datos[i] - datos[i] + datos[i];
}
return 0;
}



