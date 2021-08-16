#include <stdio.h> 

int main () { 
    int vet[10]; 
    int i=0; 
    do { 
        printf ("Digite o valor %d do vetor: ", i); 
        scanf ("%d", &vet[i]); 
        i++; } 
        while (i<=9);        
        printf ("\n"); 
        for (i=0; i<10; i++){ 
            if (vet[i]<0) 
            vet[i]=1; 
            printf(" %d ", vet[i]); 
            } 
        
         return(0); 
    } 