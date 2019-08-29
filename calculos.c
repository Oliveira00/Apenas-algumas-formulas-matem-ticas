#include <stdio.h>
#include <math.h>

#include "func_contas.h"

int tipo;

void main()
{
    int n, tp = 1, escolha;
    do
    {
        printf("\t\t\t====Programa para calcular algumas coisas====");
        printf("\nDigite:\n1 - Raiz Quadrada\n2 - Fatorial\n3 - Areas\n4 - Raizes de uma equacao de segundo grau\n5 - Equacoes da reta\n0 - Sair\n\nOpcao: ");
        scanf("%d", &escolha);
        
        switch (escolha)
        {
            case 0:
            {
                printf("Tchau!!\n");
            }
            break;
            case 1:
            {
                raiz4();
            }
            break;
            case 2:
            {
                system("cls");
                printf("\t\t===Calcular o fatorial de numero inteiro ate 20===\n");
                while (tp != 0)
                {
                    printf("\nDigite o numero a ser fatoriado: ");
                    scanf("%d", &n);
                    if (n <= 20)
                    {
                        printf("O fatorial de %d e %llu \n\n\n", n, fatorial(n));
                    }
                    else
                    {
                        printf("O programa nao suporta numeros maiores que 20.\n\n\n");
                    }
                    printf("Digite 1 para continuar ou 0 para voltar ao menu principal: ");
                    scanf("%i", &tp);
                    system("cls");
                }

            }
            break;
            case 3:
            {
                geometricos();
            }
            break;
            case 4:
            {
                segundograu();
            }
            break;
            case 5:
            {
                transformar();
            }
            break;
            default:
                printf("\t\t\tOPCAO INVALIDA!!!!!!!!\n");
        }
    } while (escolha != 0);
}
