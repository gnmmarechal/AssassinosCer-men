#include <stdio.h>

int Count = 0;

int PerrinRec(int n);
int PerrinDin(int n);

int main(void)
{
    // Recursivo
    printf("================= ALGORITMO Recursivo\n");
    for (int n = 0; n < 16; n ++ ){
    Count = 0;
    int r = PerrinRec(n);
    printf("N:%d P:%d Add:%d\n", n, r, Count);
    }
     // Recursivo
    printf("================= ALGORITMO Dinâmico\n");
    for (int n = 0; n < 16; n ++ ){
    Count = 0;
    int r = PerrinDin(n);
    printf("N:%d P:%d Add:%d\n", n, r, Count);
    }
}

int PerrinRec(int n){
	if(n < 0) return -1; // Erro
    Count++;
    if(n == 0) return 3;
    if(n == 1) return 0;
    if(n == 2) return 2;
    return (PerrinRec(n-2) + PerrinRec(n-3));
}

int PerrinDin(int n){
    Count++;
    return 1;
}
