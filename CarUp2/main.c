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

struct Sensores LerSensores(){
      int distancia1, distancia2, distancia3, Ss1, Ss2, Ss3;
      scanf("%d %d %d", &distancia1, &distancia2, &distancia3);

        if(distancia1<50) Ss1=1;
        else Ss1=0;

        if(distancia2<50) Ss2=1;
        else Ss2=0;

        if(distancia3<50) Ss3=1;
        else Ss3=0;

        struct Sensores LeituraSensores = {Ss1,Ss2,Ss3};
        return LeituraSensores;

}
struct Motores IA(int s1, int s2, int s3){
      int m1, m2;

      if((s1==0)&&(s2==0)&&(s3==0)){
          m1=m2=1;
      }
      if((s1==1)&&(s2==0)&&(s3==0)){
          m1=1;
          m2=0;
      }
      if((s1==0)&&(s2==1)&&(s3==0)){
          m1=0;
          m2=1;
      }
      if((s1==0)&&(s2==0)&&(s3==1)){
          m1=0;
          m2=1;
      }
      if((s1==1)&&(s2==1)&&(s3==0)){
          m1=1;
          m2=0;
      }
      if((s1==1)&&(s2==0)&&(s3==1)){
          m1=0;
          m2=1;
      }
      if((s1==0)&&(s2==1)&&(s3==1)){
          m1=0;
          m2=1;
      }
      if((s1==1)&&(s2==1)&&(s3==1)){
          m1=0;
          m2=1;
      }

          struct Motores run = {m1, m2};
          return run;

}


void AtivarMotores(int Mm1, int Mm2){

      printf("\nM1=%d\nM2=%d\n", Mm1, Mm2);

}






int main()
{
   while(1){
    struct Sensores xupa = LerSensores();
    struct Motores rr = IA(xupa.S1, xupa.S2, xupa.S3);
    AtivarMotores(rr.M1, rr.M2);
   }
    return 0;
}

