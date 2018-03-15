#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
   int n;

   printf("Enter number of elements\n");
   scanf("%d",&n);

   int c, first, last, middle, search, array[n], cont, aux;



   for (c = 0; c < n; c++){}

        srand(time(NULL));
        array[c] = rand() % 50;
}

    bubbleSort(array, n);

    for (c = 0; c < n; c++){
        printf("%d ",&array[c]);
    }
    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

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

   return 0;
}
void bubbleSort(int *vetor, int tamanho){

    int aux;

    for( int i=0; i < tamanho; i++ ){

	  for( int j = tamanho - 1; j > i; j-- ){

		 if( vetor[j] < vetor[j-1] )
            aux = vetor[j];
            vetor[j] = vetor[j-1];
            vetor[j-1]= aux;
	  }
   }
}
