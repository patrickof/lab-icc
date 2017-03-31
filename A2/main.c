#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int hora, minuto, segundo, hU, mU, sU;
    hora=minuto=segundo=hU=mU=sU=0;
    printf("Digite as horas:\n");
    scanf("%2d %2d %2d", &hU, &mU, &sU);
    while(1){
        if((hU==hora), (mU==minuto), (sU==segundo)){
            printf("\nAcorda!");
            PlaySound("patrick.wav", NULL,SND_SYNC);
            break;
            }
        printf("\r %2dh %2dm %2ds", hora, minuto, segundo);
        segundo++;
        if(segundo==60){
            segundo=0;
            minuto++;
        }
        if(minuto==60){
            minuto=0;
            hora++;
        }
        if(hora==24){
            hora=minuto=segundo=0;
            segundo++;

        }
        Sleep(1000);


    }
    return 0;
}
