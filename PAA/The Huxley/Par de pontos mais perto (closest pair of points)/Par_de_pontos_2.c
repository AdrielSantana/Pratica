#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

typedef struct Coordenada
{
    float ponto1;
    float ponto2;
} *TCoord;

float calculaDistancia(TCoord coord1, TCoord coord2)
{
    float a = coord1->ponto1 - coord2->ponto1;
    float b = coord1->ponto2 - coord2->ponto2;

    float soma = a * a + b * b;

    float distancia = sqrt(soma);

    return distancia;
}

float menorDistancia(TCoord *pontos, int qtdPontos)
{
    float menor = FLT_MAX;
    int i = 0;
    for (int i = 0; i < qtdPontos; i++)
    {
        for (int j = 0; j < qtdPontos; j++)
        {
            if (i != j)
            {
                float distancia = calculaDistancia(pontos[i], pontos[j]);
                if (calculaDistancia(pontos[i], pontos[j]) < menor)
                {
                    menor = distancia;
                }
            }
        }
    }
    return menor;
}

int main(int argc, char const *argv[])
{
    int qtdPontos;
    float distancia;

    scanf("%d", &qtdPontos);

    TCoord *pontos = (TCoord *)malloc(qtdPontos * sizeof(TCoord));

    while (qtdPontos > 0)
    {
        int i = 0;
        while (i < qtdPontos)
        {
            TCoord coordenada = (TCoord)malloc(2 * sizeof(float));
            scanf("%f %f", &coordenada->ponto1, &coordenada->ponto2);
            pontos[i] = coordenada;

            i++;
        }
        distancia = menorDistancia(pontos, qtdPontos);

        if (distancia < 10000)
        {
            printf("%.4f\n", distancia);
        }
        else
        {
            printf("INFINITY\n");
        }

        scanf("%d", &qtdPontos);
    }
    free(pontos);

    return 0;
}
