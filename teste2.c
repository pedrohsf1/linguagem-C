#include <stdio.h>
#include <cs50.h>
int main (void){
   int numero = get_int("Escreva seu número:");
   for(int i = 1; i<=numero;i++){
    printf("%d,",i);
   }
}
