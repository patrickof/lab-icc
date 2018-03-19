#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency Failed.\n");
    PCFreq = (double)(li.QuadPart) / 1000.0;
    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart - CounterStart) / PCFreq;
}


int main(){

   int c, array[MAX];

   double tempoEmMilissegundo = 0.0000000;

   srand(time(NULL));

   for (c = 0; c < MAX; c++){
        int rando = (rand() % (MAX*2));
        if(rando!=array[c-1]){
           array[c] = rando;
        }
}
    bubbleSort(array, MAX);

      for (c = 0; c < MAX; c++){
        printf("%d ", array[c]);
}
    printf("\n");

    StartCounter();
    binary_search(array,MAX,MAX/2);
    tempoEmMilissegundo = GetCounter();
    printf("Tempo do Binary Search= %.7lf milissegundos\n", tempoEmMilissegundo);



   return 0;
}


void bubbleSort(int *vetor, int tamanho){

    int aux, i, j;

    for(i=0; i < tamanho; i++ ){

	  for(j = tamanho - 1; j > i; j-- ){

		 if( vetor[j] < vetor[j-1] ){
            aux = vetor[j];
            vetor[j] = vetor[j-1];
            vetor[j-1]= aux;
        }
	  }
   }
}
void binary_search(int *array[],int tam,int search ){
    int first = 0;
    int last = tam - 1;
    int middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

}
