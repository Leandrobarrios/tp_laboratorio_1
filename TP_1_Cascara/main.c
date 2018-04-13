#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1;
    int num2;
    int resultado_suma;
    int resultado_resta;
    float resultado_division;
    int resultado_multiplicacion;
    int resultado_factorial;
    int flag_numero_uno = 0;
    int flag_numero_dos = 0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                scanf("%d", &num1);
                printf("el numero 1 es : %d\n", num1);
                flag_numero_uno = 1;
                break;
            case 2:
                scanf("%d",&num2);
                printf("el numero 2 es: %d\n", num2);
                flag_numero_dos = 1;
                break;
            case 3:
                if(flag_numero_uno && flag_numero_dos == 1){
                    resultado_suma=suma(num1,num2);
                    printf("la suma de los numeros es :%d\n",resultado_suma);
                    break;
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 4:
                if(flag_numero_uno && flag_numero_dos == 1){
                    resultado_resta=resta(num1,num2);
                    printf("la resta da como resultado %d\n",resultado_resta);
                    break;
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 5:
                if(flag_numero_uno && flag_numero_dos == 1){
                    if(num2!=0){
                        resultado_division=division(num1, num2);
                        printf("la division de los numeros da: %f\n", resultado_division);
                        break;
                    }else{
                        printf("No se puede dividir por 0\n");
                        break;
                    }
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 6:
                if(flag_numero_uno && flag_numero_dos == 1){
                    resultado_multiplicacion=multiplicacion(num1,num2);
                    printf("la multiplicacion de los numeros da :%d\n",resultado_multiplicacion);
                    break;
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 7:
                if(flag_numero_uno && flag_numero_dos == 1){
                    resultado_factorial=factorial(num1);
                    printf("el factorial es : %d\n", resultado_factorial);
                    break;
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 8:
                if(flag_numero_uno && flag_numero_dos == 1){
                    resultado_suma=suma(num1,num2);
                    printf("la suma de los numeros es :%d\n",resultado_suma);
                    resultado_resta=resta(num1,num2);
                    printf("la resta da como resultado %d\n",resultado_resta);
                    if(num2!=0){
                        resultado_division=division(num1, num2);
                        printf("la division de los numeros da: %f\n", resultado_division);
                        break;
                    }else{
                        printf("No se puede dividir por 0\n");
                        break;
                    }
                    resultado_multiplicacion=multiplicacion(num1,num2);
                    printf("la multiplicacion de los numeros da :%d\n",resultado_multiplicacion);
                    resultado_factorial=factorial(num1);
                    printf("el factorial es : %d\n", resultado_factorial);
                    break;
                }else{
                    printf("Debe ingresar ambos numeros\n");
                    break;
                }
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}


