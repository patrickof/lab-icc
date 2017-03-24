#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
 int hora, minuto, segundo;
 hora=minuto=segundo=0;
 int h, m, s;
while(1)
{
    printf("\r  %2dh %2dm %2ds", hora, minuto, segundo);
    segundo++;
    if(segundo==60){segundo=0; minuto++;}
    if(minuto==60){minuto=0; hora++;}
    if(hora==24){hora=0;minuto=0;segundo=0; minuto++;}
    Sleep(1000);
}

    return 0;

}

