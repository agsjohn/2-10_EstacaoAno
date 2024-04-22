#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    int mes, dia;
    do{
        printf("Digite o mês: ");
        scanf("%i", &mes);
        switch(mes){
        case 4:
        case 5:
            printf("Outono\n");
            break;
        case 7:
        case 8:
            printf("Inverno\n");
            break;
        case 10:
        case 11:
            printf("Primavera\n");
            break;
        case 1:
        case 2:
            printf("Verão\n");
            break;
        case 3:
            printf("Digite o dia do mês: ");
            scanf("%i", &dia);
            while(dia < 1 || dia > 31){
                printf("Dia inválido, digite novamente: ");
                scanf("%i", &dia);
            }
            if(dia > 21){
                printf("Outono\n");
            }
            else{
                printf("Verão\n");
            }
            break;
        case 6:
            printf("Digite o dia do mês: ");
            scanf("%i", &dia);
            while(dia < 1 || dia > 30){
                printf("Dia inválido, digite novamente: ");
                scanf("%i", &dia);
            }
            if(dia > 21){
                printf("Inverno\n");
            }
            else{
                printf("Outono\n");
            }
            break;
        case 9:
            printf("Digite o dia do mês: ");
            scanf("%i", &dia);
            while(dia < 1 || dia > 30){
                printf("Dia inválido, digite novamente: ");
                scanf("%i", &dia);
            }
            if(dia >= 23){
                printf("Primavera\n");
            }
            else{
                printf("Inverno\n");
            }
            break;
        case 12:
            printf("Digite o dia do mês: ");
            scanf("%i", &dia);
            while(dia < 1 || dia > 31){
                printf("Dia inválido, digite novamente: ");
                scanf("%i", &dia);
            }
            if(dia >= 21){
                printf("Verão\n");
            }
            else{
                printf("Primavera\n");
            }
        }
    }while(mes != 0);
}