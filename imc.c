/**
 * IDENTIFICAÃ‡ÃƒO DO ESTUDANTE:
 * Preencha seus dados e leia a declaraÃ§Ã£o de honestidade abaixo. NÃƒO APAGUE
 * nenhuma linha deste comentÃ¡rio de seu cÃ³digo!
 *
 *    Nome completo:Pedro Henrique Sousa França
 *    MatrÃ­cula: 202524266
 *    Turma: AN1tN
 *    Email: pedrohenriquesusafra@gmail.com
 *
 * DECLARAÃ‡ÃƒO DE HONESTIDADE ACADÃŠMICA:
 * Eu afirmo que o cÃ³digo abaixo foi de minha autoria. TambÃ©m afirmo que nÃ£o
 * pratiquei nenhuma forma de "cola" ou "plÃ¡gio" na elaboraÃ§Ã£o do programa,
 * e que nÃ£o violei nenhuma das normas de integridade acadÃªmica da disciplina.
 * Estou ciente de que todo cÃ³digo enviado serÃ¡ verificado automaticamente
 * contra plÃ¡gio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito Ã  penalidades conforme
 * definidas pelo professor da disciplina e/ou instituiÃ§Ã£o.
 */

/**
 * InclusÃ£o de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * FunÃ§Ã£o main
 */
int main(void)
{
    // TODO: escreva aqui o cÃ³digo que solicita o peso da pessoa (em kg).
    // Seu cÃ³digo sÃ³ deve aceitar valores vÃ¡lidos entre 40,0 e 200,0 kg
    // (inclusive). Se o peso informado nÃ£o estiver nessa faixa ou se o usuÃ¡rio
    // informar um dado invÃ¡lido, seu programa deve continuar a solicitar o peso
    // atÃ© que ele informe um peso vÃ¡lido.
    double kg;
    do
    {
        kg = get_double("Informe seu peso (kg): ");
    }
    while (kg < 40.0 || kg > 200);

    // TODO: escreva aqui o cÃ³digo que solicita a altura da pessoa (em m)
    // Seu cÃ³digo sÃ³ deve aceitar valores vÃ¡lidos entre 1,40 e 2,50 m
    // (inclusive). Se a altura informada nÃ£o estiver nessa faixa ou se o
    // usuÃ¡rio informar um dado invÃ¡lido, seu programa deve continuar a
    // solicitar a altura atÃ© que ele informe uma altura vÃ¡lida.
    double alt;
    do
    {
        alt = get_double("Informe sua altura (m):");
    }
    while (alt > 2.50 || alt < 1.40);

    // TODO: escreva aqui o cÃ³digo que calcula o IMC e imprime a classificaÃ§Ã£o
    // da obesidade no terminal, conforme as especificaÃ§Ãµes do exercÃ­cio.

    double imc = kg / (alt * alt);
    if (imc < 16)
    {
        printf("IMC: %.2f; Classificação: Magreza Grau III.\n", imc);
    }
    else if (imc < 17)
    {
        printf("IMC: %.2f; Classificação: Magreza Grau II.\n", imc);
    }
    else if (imc < 18.5)
    {
        printf("IMC: %.2f; Classificação: Magreza Grau I.\n", imc);
    }
    else if (imc < 25)
    {
        printf("IMC: %.2f; Classificação: Peso Adequado.\n", imc);
    }
    else if (imc < 30)
    {
        printf("IMC: %.2f; Classificação: Pré-Obeso.\n", imc);
    }
    else if (imc < 35)
    {
        printf("IMC: %.2f; Classificação: Obesidade Grau I.\n", imc);
    }
    else if (imc < 40)
    {
        printf("IMC: %.2f; Classificação: Obesidade Grau II.\n", imc);
    }
    else
    {
        printf("IMC: %.2f; Classificação: Obesidade Grau III.\n", imc);
    }
    // Termina o programa:
    return 0;
}
