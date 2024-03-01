#include "stdio.h"
#include "errno.h"

int main (int argc, char * argv[]) {kkk
    if (argc < 2) {
        printf( "Uso %s nome_arquivo\n", argv[0]);
        return 1;
    }
    FILE * arq = fopen(argv[1], "r");
    if (arq == NULL) {
        perror("ao abrir o arquivo");
        return errno;

    }
    char linha[10240];
    while (fgets(linha, 10240, arq) != NULL) {
        printf(linha);
    }

    puts("Fim!");
    return 0;
}