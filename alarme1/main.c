#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 int hora, minuto, segundo, hU, mU, sU;
 hora=minuto=segundo=hU=mU=sU=0;
    printf("Digite as horas:\n");
    scanf("%d",&hU);
    printf("Digite os minutos:\n");
    scanf("%d",&mU);
    printf("Digite os segundos:\n");
    scanf("%d",&sU);
while(1)
{
    printf("\r  %2dh %2dm %2ds", hora, minuto, segundo);
    if((hora==hU)&&(minuto==mU)&&(segundo==sU)){
            printf("\nACOOORDA!!");
            break;
    };
    segundo++;
    if(segundo==60){segundo=0; minuto++;}
    if(minuto==60){minuto=0; hora++;}
    if(hora==24){hora=0;minuto=0;segundo=0; minuto++;}
    Sleep(1000);
}

    return 0;

}

