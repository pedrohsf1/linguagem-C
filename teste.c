#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int idade;
    do
    {
        idade = get_int("Escreva sua idade:");
    }
    while (idade < 0 || idade > 100 );
    if (idade <= 12)
    {
        printf("Você é uma criança\n");
    }
    else if (idade >= 13 && idade <= 17)
    {
        printf("Você é um adolescente\n");
    }
    else if (idade >= 18 && idade <= 59)
    {
        printf("Você é um adulto\n");
    }
    else
    {
        printf("Você é um idoso\n");
    }
}
