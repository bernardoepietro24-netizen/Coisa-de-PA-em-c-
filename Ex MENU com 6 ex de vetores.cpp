#include <stdio.h>

// ========== SUBALGORITMOS ==========

void exercicio1() 
{
    int V[5], ind, soma = 0; 
    float media;

    printf("\n=== EXERCICIO 1: Media de 5 numeros ===\n");
    for(ind = 0; ind < 5; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);
        soma = soma + V[ind];
    }
    media = (float)soma / 5;
    printf("A media eh: %.2f\n", media);
}

void exercicio2()
{
    int V[8], ind, maior;

    printf("\n=== EXERCICIO 2: Maior valor em 8 numeros ===\n");
    for(ind = 0; ind < 8; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);
    }

    maior = V[0];
    for(ind = 1; ind < 8; ind++)
    {
        if(V[ind] > maior)
            maior = V[ind];
    }
    printf("O maior valor eh: %d\n", maior);
}

void exercicio3() 
{
    int V[10], ind, pares = 0;

    printf("\n=== EXERCICIO 3: Contar numeros pares ===\n");
    for(ind = 0; ind < 10; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);
        if(V[ind] % 2 == 0)
            pares++;
    }
    printf("Sao %d numeros pares\n", pares);
}

void exercicio4() 
{
    int V[6], ind;

    printf("\n=== EXERCICIO 4: Ordem inversa ===\n");
    for(ind = 0; ind < 6; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);
    }

    printf("A ordem inversa eh:\n");
    for(ind = 5; ind >= 0; ind--)
    {
        printf("%d\n", V[ind]);
    }
}

void exercicio5()
{
    int V[10], ind, procura, encontrado = 0;

    printf("\n=== EXERCICIO 5: Buscar um numero ===\n");
    for(ind = 0; ind < 10; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);
    }

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &procura);

    for(ind = 0; ind < 10; ind++)
    {
        if(procura == V[ind])
        {
            printf("O numero foi encontrado! Posicao: %d\n", ind);
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0)
        printf("Seu numero nao pertence a lista\n");
}

void exercicio6() 
{
    int V[10], ind, posi = 0, nega = 0, nulo = 0;

    printf("\n=== EXERCICIO 6: Positivos, Negativos e Nulos ===\n");
    for(ind = 0; ind < 10; ind++)
    {
        printf("V[%d] = ", ind);
        scanf("%d", &V[ind]);

        if(V[ind] > 0)
            posi++;
        else if(V[ind] < 0)
            nega++;
        else
            nulo++;
    }
    printf("A lista tem %d positivos, %d negativos e %d nulos\n", posi, nega, nulo);
}

// ========== PROGRAMA PRINCIPAL (MENU) ==========

int main()
{
    int opcao;

    do
    {
        printf("\n\n========== MENU PRINCIPAL ==========\n");
        printf("1 - Media de 5 numeros\n");
        printf("2 - Maior valor em 8 numeros\n");
        printf("3 - Contar numeros pares (10 numeros)\n");
        printf("4 -  vetores na ordem inversa\n");
        printf("5 - Buscar um numero no vetor\n");
        printf("6 - Contar positivos, negativos e nulos\n");
        printf("0 - Sair\n");
        printf("====================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                exercicio5();
                break;
            case 6:
                exercicio6();
                break;
            case 0:
                printf("Programa finalizado!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}
