/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Pedro Henrique Sousa França
 *    Matrícula: 202524266
 *    Turma: AN1tN
 *    Email: pedrohenriquesousafra@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int altura;
    do
    {
        altura = get_int("altura:");
    }
    while (altura < 1 || altura > 8);
    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= altura - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Quebra de linha
        printf("\n");
    }
}
