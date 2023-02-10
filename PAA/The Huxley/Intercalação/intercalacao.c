#include <stdio.h>
#include <stdlib.h>

int *ordenaListasOrdenados(int *l1, int *l2)
{
    int *listaOrdenada = (int *)malloc(sizeof(l1) + sizeof(l2));

    int pointerl1 = 0;
    int pointerl2 = 0;

    for (int i = 0; i < sizeof(listaOrdenada); i++)
    {
        if (l1[pointerl1] < l2[pointerl2])
        {
            listaOrdenada[i] = l1[pointerl1];
            pointerl2++;
        }
        else if (l1[pointerl1] == l2[pointerl2])
        {
            listaOrdenada[i] = l1[pointerl1];
            listaOrdenada[i + 1] = l2[pointerl2];
            pointerl1++;
            pointerl2++;
            i++;
        }
        else if (l1[pointerl1] > l2[pointerl2])
        {
            listaOrdenada[i] = l2[pointerl2];
            pointerl1++;
        }
    }
    return listaOrdenada;
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);

    int *l1 = (int *)malloc(sizeof(int) * n1);
    int *l2 = (int *)malloc(sizeof(int) * n2);

    for (int i = 0; i < n1; i++)
    {
        scanf("%d\n", &l1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        scanf("%d\n", &l2[i]);
    }

    int *lista = ordenaListasOrdenados(l1, l2);

    for (int i = 0; i < sizeof(lista); i++)
    {
        printf("%d\n", lista[i]);
    }

    return 0;
}