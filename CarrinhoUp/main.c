#include <stdio.h>
#include <stdlib.h>


    int s1, s2, s3, m1, m2;


    void LerSensor(void){
      int distancia1, distancia2,distancia3;
      scanf("%d %d %d", &distancia1, &distancia2, &distancia3);

        if(distancia1<50){
         s1=1;
      }
        else{
         s1=0;
      }
        if(distancia2<50){
         s2=1;
      }
        else{
         s2=0;
      }
        if(distancia3<50){
         s3=1;
      }
         else{
         s3=0;
      }

     return;
    }

    void IA(void){
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
    return ;
    }

   void DriveMotors(void){

         printf("\nM1=%d\nM2=%d\n\n", m1, m2);
     return ;
   }



 int main()
{
    while(1){
        LerSensor();

        IA();

        DriveMotors();

    }
    return 0;

}
