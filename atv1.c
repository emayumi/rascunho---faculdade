#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
    int x,tam;
    char nome[30];
    printf("Digite um nome");
    scanf("%s",nome);
    tam = strlen(nome);
    for (x=1; x<=tam; x++);
        printf("\n%s",nome);
        printf("n\n");
        system("pause");
        return 0;
}
