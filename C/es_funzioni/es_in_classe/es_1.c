/* Author: Acchiardi Paolo
Date: 18/01/2019
Es.: Fare una funzione che restituisce true se il numero � pari e false se il numero � dispari. */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPari(int num){
    bool ePari; //vale true se � pari e false se non lo �
    if(num % 2==0){
        ePari = true;
    }
    else{
        ePari = false;
    }
    return ePari;
}
main(){
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    if (isPari(numero) == true){
        printf("Il numero e' pari.");
    }
    else{
         printf("Il numero e' dispari.");
    }
    printf("\n");
    system("pause");
    }
