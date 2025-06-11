/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
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

/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // Solicita o valor da comida:
    float comida;
    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < 10.00 || comida > 999.99);

    // Solicita o percentual de impostos:
    float impostos;
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > 100.00);

    // Solicita o percentual de gorjeta:
    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    // TODO: coloque aqui seu código para o cálculo do valor da conta.
    // Não se esqueça de imprimir o valor final conforme especificado na
    // descrição do exercício.
    double valordoimposto = comida * (impostos / 100);
    double comidacimposto = comida + valordoimposto;
    double valorgorjeta = comidacimposto * ((double)gorjeta / 100);
    double valortotal = comidacimposto + valorgorjeta;
    double valorcd1 = valortotal / 2;
    printf("Cada um pagará R$ %.2f!\n", valorcd1);

    // Termina o programa:
    return 0;
}
