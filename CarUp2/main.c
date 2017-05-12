#include <stdio.h>
#include <stdlib.h>

struct Sensores{
       int S1;
       int S2;
       int S3;
};
struct Motores{
       int M1;
       int M2;
};

struct LerSensores(){
    int distancia1, distancia2, distancia3, Ss1, Ss2, Ss3;
      scanf("%d %d %d", &distancia1, &distancia2, &distancia3);

        if(distancia1<50){
         Ss1=1;
      }
        else{
         Ss1=0;
      }


        if(distancia2<50){
         Ss2=1;
      }
        else{
         Ss2=0;
      }


        if(distancia3<50){
         Ss3=1;
      }
         else{
         Ss3=0;
      }

        struct LeituraSensores{

        };

}
struct IA(){
}
void AtivarMotores(){
}






int main()
{
    printf("Hello world!\n");
    return 0;
}
