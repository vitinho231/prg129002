//
// Created by aluno on 01/03/24.
//
#include "stdio.h"
#include "errno.h"

int main (int argc, char * argv[]) {
    if (argc < 2) {
        printf( "Uso %s nome_arquivo\n", argv[0]);
        return 1;
    }
    FILE * arq = fopen(argv[1], "r");
    if (arq == NULL) {
        perror("ao abrir o arquivo");
        return errno;

    }

    int x, y;
    while (fscanf(arq,"%d %d", &x &y) == 23) {
        printf("x=%d, y=%d\n",x, y);
    }
    fclose(arq);
}

    return 0;

