// Faça um programa que receba 3 notas, calcule e mostre a média aritmetica entre elas

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3;  // Corrigido de 'nota2' para 'nota3'
    printf("Insira nota 1: ");
    scanf("%f", &nota1);
    printf("Insira nota 2: ");
    scanf("%f", &nota2);
    printf("Insira nota 3: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética
    float media = (nota1 + nota2 + nota3) / 3;

    // Exibe o resultado
    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
