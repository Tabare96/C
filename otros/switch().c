#include <stdio.h>
int main()
{
    /*int casos;
    printf("Ingresa un numero\n");
    scanf("%i", &casos);
    switch(casos)
    {
        case 1:
        printf("Elegiste el primer caso\n");
        break;

        case 2:
        printf("Elegiste el segundo caso\n");
        break;

        case 3:
        printf("Elegiste el tercer caso\n");
        break;

        case 4:
        printf("Elegiste el cuarto caso\n");
        break;
 
        case 5:
        printf("Elegiste el quinto caso\n");
        break;


        default:
        printf("no encontramos tu caso\n");
        break;
    }
    return 0;*/
    char casos;
    int tot_a =0, tot_e =1, tot_i=2, tot_o=3, tot_u=4;
    printf("Ingresa una vocal\n");
    scanf("%c", &casos);

    switch(casos)
    {
        case 'a':
        case 'A':
        tot_a = tot_a +1;
        printf("el valor de su caso es de: %i\n",tot_a);
        break;
        case 'e':
        case 'E':
        tot_e = tot_e + 1;
        printf("el valor de su caso es de: %i\n",tot_e);
        break;
        case 'i':
        case 'I':
        tot_i = tot_i + 1;
        printf("el valor de su caso es de: %i\n",tot_i);
        break;
        case 'o':
        case 'O':
        tot_o = tot_o + 1;
        printf("el valor de su caso es de: %i\n",tot_o);
        break;
        case 'u':
        case 'U':
        tot_u = tot_u + 1;
        printf("el valor de su caso es de: %i\n",tot_u);
        break;
        default:
        printf("el valor ingresado no pertenece a ningun caso\n");
    }
    return 0;
}