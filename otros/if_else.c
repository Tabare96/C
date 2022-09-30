#include<stdio.h>
#include<conio.h>

main()
{
	float cal1 = 0, cal2 =0, promedio = 0;
	
	printf("Dame la calificacion 1: \n");
	scanf("%f", &cal1);
	
	printf("Dame la calificacion 2: \n");
	scanf("%f", &cal2);
	
	promedio = (cal1 + cal2) /2;
	
	if (promedio > 9.0)
	{
		printf("Felicidades! tu promedio es exelente \n");
		printf("el promedio de las notas es: %f \n", promedio );
	}
	else
	{
		printf("el promedio de las notas es: %f", promedio );
	}
	getchar();
}