#include <stdio.h>
#include <stdlib.h>

/* alusão da função que implementa o algoritmo pretendido */
/* allusion to the function that implements the algorithm */
int MaxRepetition (int [], int);

/* variável global para contar as operações de comparação executadas pelo algoritmo */
/* global variable for counting the comparations executed by the algorithm */
int Count = 0;

int main (void)
{
    /* declaração dos arrays de teste - usar o pretendido para cada execução */
    /* declaration of the test arrays - use each one for each execution */

     //int Array[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; 
     //int Array[] = { 1, 1, 1, 1, 1, 3, 1, 1, 1, 1 }; 
     int Array[] = { 1, 1, 1, 4, 1, 1, 4, 1, 1, 1 }; 
     /*int Array[] = { 1, 1, 1, 1, 1, 1, 2, 5, 1, 9 }; 
     int Array[] = { 1, 1, 1, 1, 9, 1, 2, 5, 1, 9 }; 
     int Array[] = { 1, 1, 1, 9, 1, 2, 8, 3, 7, 1 }; 
     int Array[] = { 1, 1, 1, 9, 5, 2, 8, 1, 9, 9 }; 
     int Array[] = { 1, 1, 3, 9, 5, 2, 8, 7, 9, 9 }; 
     int Array[] = { 1, 1, 6, 0, 5, 2, 8, 7, 9, 9 }; 
     int Array[] = { 1, 4, 6, 0, 5, 2, 8, 7, 9, 9 }; 
     int Array[] = { 1, 3, 6, 0, 5, 2, 8, 7, 11, 9 }; */
  
    int NElem = sizeof (Array) / sizeof (int); int Result;

    /* invocação do algoritmo - algorithm invocation */    
	Result = MaxRepetition (Array, NElem);

	/* apresentação do resultado e do número de comparações executadas pelo algoritmo */
	/* presenting the result and the number of comparasions executed by the algorithm */
	fprintf (stdout, "Maximum repeatability of elements = %2d - Comparisons = %3d\n", Result, Count);

    exit (EXIT_SUCCESS);
}

/* implementação do algoritmo com a contagem das comparações */


int MaxRepetition (int array[], int n)
{
	int big_c = 0, c, left = n, last_num;
	for (int i = 0; i < n - 1; i++)
	{
		Count++;
		if(last_num == array[i])
			break;
		c = 1;
		for(int k = i + 1; k < n; k++){
			Count++;
			if(array[i] == array[k])
				c++;
		}	
		Count++;
		Count++;
		if(left > big_c){
			Count++
			if(c > big_c)
				big_c = c;
		}
		last_num = array[i];
		left--;
	}
	return big_c;
    
}

