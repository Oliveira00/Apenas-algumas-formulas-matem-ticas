#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef CONTAS_HEADER_
#define CONTAS_HEADER_

void simetrica()
{
    int tipo;
    float m, k, x, y, a, b, c;
    do
    {
        printf("\n\nDigite o numero do tipo da equacao que voce quer transformar:\n1-Parametrica\n2-Cartesiana\n3-Vetorial\n4-Reduzida\n0-Para voltar ao menu principal");
        printf("\n\t\t\tSimetrica para====>");
        scanf("%d", &tipo);
        m = k = x = y = a = b = c = 0;
        switch (tipo)
        {
        case 0:
        {
            printf("\n");
        }
        break;
        case 1:
        {
            printf("Insira os dados da equacao simetrica \n\t\t\t(x-x0)/a=(y-y0)/b");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \n(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
            printf("\nA equacao parametrica dessa reta e:\n");
            printf("\n{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
        }
        break;
        case 2:
        {
            printf("Insira os dados da equacao simetrica \n\t\t\t(x-x0)/a=(y-y0)/b");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \n(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
            //Transformando
            c = -(b * x) + (a * y);
            printf("\nA equacao cartesiana dessa reta e:\n");
            printf("\n%.2fx+(%.2f)y+(%2.f)=0", b, -a, c);
        }
        break;
        case 3:
        {
            printf("Insira os dados da equacao simetrica \n\t\t\t(x-x0)/a=(y-y0)/b");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \n(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
            printf("\nA equacao vetorial dessa reta e:\n");
            printf("(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
        }
        break;
        case 4:
        {
            printf("Insira os dados da equacao simetrica \n\t\t\t(x-x0)/a=(y-y0)/b");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \n(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
            //Transformando
            c = (-b * x) + (a * y);
            m = b / a;
            k = c / a;
            printf("\nA equacao reduzida dessa reta e:\n");
            printf("y=%.2fx+(%.2f)", m, k);
        }
        break;
        default:
            printf("OPCAO INVALIDA!!!!!!!!");
        }
    } while (tipo != 0);
    return;
}

void vetorial()
{
    int tipo;
    float m, k, x, a, b, c, y;
    do
    {
        printf("\n\nDigite o numero do tipo da equacao que voce quer transformar:\n1-Parametrica\n2-Cartesiana\n3-Simetrica\n4-Reduzida\n0-Para voltar ao menu principal");
        printf("\n\t\t\tVetorial para====>");
        scanf("%d", &tipo);
        m = k = x = a = b = c = y = 0;
        switch (tipo)
        {
        case 0:
        {
            printf("\n");
        }
        break;
        case 1:
        {
            printf("Insira os dados da equacao vetorial \n\t\t\tx=(x0,y0)+t(a,b)");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \nx=(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
            printf("\nA equacao parametrica dessa reta e:\n");
            printf("{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
        }
        break;
        case 2:
        {
            printf("Insira os dados da equacao vetorial \n\t\t\tx=(x0,y0)+t(a,b)");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \nx=(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
            //Transformando a parametrica em cartesiana
            c = -(b * x) + (a * y);
            printf("\nA equacao cartesiana dessa reta e:\n");
            printf("%.2fx+(%.2f)y+(%.2f)=0", b, -a, c);
        }
        break;
        case 3:
        {
            printf("Insira os dados da equacao vetorial \n\t\t\tx=(x0,y0)+t(a,b)");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \nx=(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
            printf("\nA equacao simetrica dessa reta e:\n");
            printf("(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
        }
        break;
        case 4:
        {
            printf("Insira os dados da equacao vetorial \n\t\t\tx=(x0,y0)+t(a,b)");
            printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
            scanf(" %f %f", &x, &y);
            printf(" \nInsira o vetor diretor da reta(a,b):");
            scanf("%f %f", &a, &b);
            printf(" \nA equacao inserida foi: \nx=(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
            //Transformando
            c = (-b * x) + (a * y);
            m = b / a;
            k = c / a;
            printf("\nA equacao reduzida dessa reta e:\n");
            printf("y=%.2fx+(%.2f)", m, k);
        }
        break;
        default:
            printf("OPCAO INVALIDA!!!!!!!!");
        }
    } while (tipo != 0);
    return;
}

void cartesiana()
{
    int tipo;
    float y, a, b, c, m, k;
    do
    {
        printf("\n\nDigite o numero do tipo da equacao que voce quer transformar:\n1-Parametricas\n2-Simetrica\n3-Vetorial\n4-Reduzida\n0-Para voltar ao menu principal");
        printf("\n\t\t\tCartesiana para====>");
        scanf("%d", &tipo);
        y = a = b = c = m = k = 0;
        switch (tipo)
        {
        case 0:
        {
            printf("\n");
        }
        break;
        case 1:
        {
            printf("Insira os dados da equacao cartesiana \n\t\t\tbx+ay+c=0");
            printf(" \nInsira o vetor normal da reta (b,a):");
            scanf("%f %f", &b, &a);
            printf("\nInsira o valor de c:");
            scanf("%f", &c);
            printf(" \nA equacao inserida foi: \n%.2fx+(%.2f)y+(%2.f)=0", b, a, c);
            //Transformando
            y = (-b - c) / a;
            printf("\nAs equacoes parametricas dessa reta e:\n");
            printf("\n{x=1+(%.2f)t\n{y=%.2f+(%.2f)t", -a, y, b);
        }
        break;
        case 2:
        {
            printf("Insira os dados da equacao cartesiana \n\t\t\tbx+ay+c=0");
            printf(" \nInsira o vetor normal da reta (b,a):");
            scanf("%f %f", &b, &a);
            printf("\nInsira o valor de c:");
            scanf("%f", &c);
            printf(" \nA equacao inserida foi: \n%.2fx+(%.2f)y+(%2.f)=0", b, a, c);
            //Transformando
            y = (-b - c) / a;
            printf("\nA equacao simetrica dessa reta e:\n");
            printf("\n(x-1)/%.2f=(y-%.2f)/%.2f", a, y, -b);
        }
        break;
        case 3:
        {
            printf("Insira os dados da equacao cartesiana \n\t\t\tbx+ay+c=0");
            printf(" \nInsira o vetor normal da reta (b,a):");
            scanf("%f %f", &b, &a);
            printf("\nInsira o valor de c:");
            scanf("%f", &c);
            printf(" \nA equacao inserida foi: \n%.2fx+(%.2f)y+(%2.f)=0", b, a, c);
            //Transformando
            y = (-b - c) / a;
            printf("\nA equacao vetorial dessa reta e:\n");
            printf("x=(1,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", y, a, -b);
        }
        break;
        case 4:
        {
            printf("Insira os dados da equacao cartesiana \n\t\t\tbx+ay+c=0");
            printf(" \nInsira o vetor normal da reta (b,a):");
            scanf("%f %f", &b, &a);
            printf("\nInsira o valor de c:");
            scanf("%f", &c);
            printf(" \nA equacao inserida foi: \n%.2fx+(%.2f)y+(%2.f)=0", b, a, c);
            //Transformando
            m = (-b) / a;
            k = (-c) / a;
            printf("\nA equacao reduzida dessa reta e:\n");
            printf("\ny=%.2fx+(%.2f)", m, k);
        }
        break;
        default:
            printf("OPCAO INVALIDA!!!!!!!!");
        }
    } while (tipo != 0);
    return;
}

void parasiana()
{
    float x, y, a, b, c;
    printf("Insira os dados das equacoes parametricas \n{x=x0+at\n{y=y0+bt");
    printf(" \nInsira um ponto qualquer que passe na reta(x0,y0):");
    scanf(" %f %f", &x, &y);
    printf(" \nInsira o vetor diretor da reta(a,b):");
    scanf("%f %f", &a, &b);
    printf(" \nA equacao inserida foi: \n{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
    //Transformando a parametrica em cartesiana
    c = -(b * x) + (a * y);
    printf("\nA equacao cartesiana dessa reta e:\n");
    printf("%.2fx+(%.2f)y+(%.2f)=0", b, -a, c);
}

void parasime()
{
    float x, y, a, b, c;
    printf("Insira os dados das equacoes parametricas \n{x=x0+at\n{y=y0+bt");
    printf(" \nInsira um ponto qualquer que passe na reta(insira o eixo x e depois o y):");
    scanf(" %f %f", &x, &y);
    printf(" \nInsira o vetor diretor da reta(insira o eixo x e depois o y):");
    scanf("%f %f", &a, &b);
    printf(" \nA equacao inserida foi: \n{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
    printf("\nA equacao simetrica dessa reta e:\n");
    printf("(x-(%.2f))/%.2f = (y - (%.2f))/%.2f", x, a, y, b);
}
void paratorial()
{
    float x, y, a, b;
    printf("Insira os dados das equacoes parametricas \n{x=x0+at\n{y=y0+bt");
    printf(" \nInsira um ponto qualquer que passe na reta(insira o eixo x e depois o y):");
    scanf(" %f %f", &x, &y);
    printf(" \nInsira o vetor diretor da reta(insira o eixo x e depois o y):");
    scanf("%f %f", &a, &b);
    printf(" \nA equacao inserida foi: \n{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
    printf("\nA equacao vetorial dessa reta e:\n");
    printf("x=(%.2f,%.2f)+t(%.2f,%.2f), onde t pertence aos reais", x, y, a, b);
}

void parazida()
{
    float x, y, a, b, m, k, c;
    printf("Insira os dados das equacoes parametricas \n{x=x0+at\n{y=y0+bt");
    printf(" \nInsira um ponto qualquer que passe na reta(insira o eixo x e depois o y):");
    scanf(" %f %f", &x, &y);
    printf(" \nInsira o vetor diretor da reta(insira o eixo x e depois o y):");
    scanf("%f %f", &a, &b);
    printf(" \nA equacao inserida foi: \n{x=%.2f+(%.2f)t\n{y=%.2f+(%.2f)t", x, a, y, b);
    //Transformando
    c = (-b * x) + (a * y);
    m = b / a;
    k = c / a;
    printf("\nA equacao reduzida dessa reta e:\n");
    printf("y=%.2fx+(%.2f)", m, k);
}
void parametricas()
{
    int tipo;
    do
    {
        printf("\n\nDigite o numero do tipo da equacao que voce quer transformar:\n\n1-Cartesiana\n2-Simetrica\n3-Vetorial\n4-Reduzida\n0-Para voltar ao menu principal\n\n Opcao: ");
        printf("\n\t\t\tParametricas para ====> ");
        scanf("%d", &tipo);
        system("cls");
        switch (tipo)
        {
        case 0:
        {
            printf("\n");
        }
        break;
        case 1:
        {
            parasiana();
        }
        break;
        case 2:
        {
            parasime();
        }
        break;
        case 3:
        {
            paratorial();
        }
        break;
        case 4:
        {
            parazida();
        }
        break;
        default:
            printf("OPCAO INVALIDA!!!!!!!!");
        }
    } while (tipo != 0);
    return;
}

void transformar()
{
    system("cls");
    int escolha;
    do
    {
        printf("\t\t====Programa para transformacoes de equacoes da reta====");
        printf("\n\nDigite o numero do tipo da equacao que voce ira inserir:\n\n1-Parametricas\n2-Cartesiana\n3-Simetrica\n4-Vetorial\n0-Para finalizar o programa\n\nOpcao: ");
        scanf("%d",&escolha);
        system("cls");
        switch(escolha){
        case 0:
        {
            printf("\n\n\t\t\t===Fim do programa===\n\n");
        }
        break;
        case 1:
        {
            parametricas();
        }
        break;
        case 2:
        {
            cartesiana();
        }
        break;
        case 3:
        {
            simetrica();
        }
        break;
        case 4:
        {
            vetorial();
        }
        break;
        /*case 5:{
                reduzida();
            }break;*/
        default:
            printf("\t\t\tOPCAO INVALIDA!!!!!\n");
        }
    } while (escolha != 0);
    return;
}

unsigned long long fatorial(unsigned int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fatorial(n - 1) * n;
}

void raiz4()
{
    system("cls");
    float a, b;
    int t;
    printf("\t\t\t====Calcular a raiz quadrada====\n");
    do
    {
        printf("Digite o numero: ");
        scanf("%f", &a);
        b = sqrt(a);
        printf("A raiz quadrada de %f eh: %f\n\n", a, b);
        printf("Digite 1 para continuar ou 0 para voltar ao menu principal: ");
        scanf("%i", &t);
        system("cls");
    } while (t != 0);
}

void geometricos()
{
    system("cls");
    float base, altura, raio, area;
    int opcao, tipo1;
    do
    {
        printf("Para calcular a area digite:\n\n1 - Triangulo\n2 - Retangulo\n3 - Circulo\n\nOpcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
            {
                printf("Digite a base e a altura, respectivamente(cm): ");
                scanf("%f %f", &base, &altura);
                area = (base * altura) / 2;
                printf("\nA area do triangulo eh de : %f\n", area);
            }
            break;
            case 2:
            {
                printf("Digite a base e a altura, respectivamente(cm): ");
                scanf("%f %f", &base, &altura);
                area = base * altura;
                printf("\nA area do retangulo é de :%f\n ", area);
            }
            break;
            case 3:
            {
                printf("Digite o raio(cm): ");
                scanf("%f", &raio);
                printf("A area do circulo e de: %f x PI\n", pow(raio, 2));
                area = M_PI * pow(raio,2);
                printf("A area do circulo e de: %f\n", area);
            }
            break;
            default:
                printf("OPCAO INVALIDA!!!");
        }
        printf("\nDigite 1 para calcular outro solido ou 0 para voltar ao menu principal: ");
        scanf("%d", &tipo1);
        system("cls");
    } while (tipo1 != 0);
}

void segundograu()
{
    system("cls");
    float a, b, c, delta, delta2, raiz1, raiz2;
    int tipo, contador;
    printf("--- Encontrar as raizes de uma funcao de segundo grau---\n");
    //printf("Digite 1 se quiser calcular a raiz ou 0 para encerrar o programa: ");
    //scanf("%d",&tipo);
    tipo = 1;
    while (tipo != 0)
    {
        printf("\nFuncao de segundo grau: ax^2+bx+c=0\n\n");
        printf("Digite o valor de a: ");
        scanf("%f", &a);
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);
        if (a != 0)
        {
            delta = (b * b) - (4 * a * c);
            if (delta >= 0)
            {
                printf("O valor de delta eh: %f\n", delta);
                delta2 = sqrt(delta);
                printf("A raiz de delta eh: %f\n", delta2);
                raiz1 = (-b + delta2) / 2 * a;
                raiz2 = (-b - delta2) / 2 * a;
                printf("Os valores das raizes sao :\n%f\t%f\n", raiz1, raiz2);
            }
            else
            {
                delta = -delta;
                delta2 = sqrt(delta);
                printf("Raiz 1: %.2f + %.2f x i\n\n", (-b) / (2 * a), (delta2) / (2 * a));
                printf("Raiz 2: %.2f - %.2f x i\n\n", (-b) / (2 * a), (delta2) / (2 * a));
            }
        }
        else
        {
            printf("Por favor insira um numero diferente de 0 para 'a'.\n ");
        }
        printf("Digite 1 se quiser calcular a raiz ou 0 para voltar ao menu principal: ");
        scanf("%d", &tipo);
        system("cls");
    }
}

#endif