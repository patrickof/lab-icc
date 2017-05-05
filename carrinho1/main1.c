#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int s1, s2, s3, m1, m2;
    char t;
    printf("Digite um comando:\n");

    while(1){

     if(kbhit()){

      t= getch();

      if (t=='1'){
         s1=0;
         s2=0;
         s3=0;
   }
     if (t=='2'){
         s1=1;
         s2=0;
         s3=0;
   }
     if (t=='3'){
         s1=0;
         s2=1;
         s3=0;
   }
     if (t=='4'){
         s1=0;
         s2=0;
         s3=1;
    }
     if (t=='5'){
         s1=1;
         s2=1;
         s3=0;
   }
     if (t=='6'){
         s1=1;
         s2=0;
         s3=1;
   }
     if (t=='7'){
         s1=0;
         s2=1;
         s3=1;
   }
    if (t=='8'){
        s1=1;
        s2=1;
        s3=1;
   }


      if((s1==0)&&(s2==0)&&(s3==0)){
          m1=m2=1;
          printf("\n\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==1)&&(s2==0)&&(s3==0)){
          m1=1;
          m2=0;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==0)&&(s2==1)&&(s3==0)){
          m1=0;
          m2=1;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==0)&&(s2==0)&&(s3==1)){
         m1=0;
         m2=1;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==1)&&(s2==1)&&(s3==0)){
         m1=1;
         m2=0;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==1)&&(s2==0)&&(s3==1)){
          m1=0;
          m2=1;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
      }
      if((s1==0)&&(s2==1)&&(s3==1)){
          m1=0;
          m2=1;
          printf("\nM1=%d\nM2=%d\n\n", m1, m2);
         }
      if((s1==1)&&(s2==1)&&(s3==1)){
          m1=0;
          m2=1;
          printf("\nM1=%d\nM2=%d\n9\n", m1, m2);
         }
  }
    }
   return;
}



