#include "stdio.h"
#include "errno.h"
#include "string.h"

int  main (int argc, char * argv[]) {
    if (argc < 3) {
        printf( "Uso %s nome_arquivo\n", argv[0]);
        return 1;
    }
    FILE * arq = fopen(argv[1], "r");
    if (arq == NULL) {
        perror("ao abrir o arquivo");
        return errno;

    }
     char linha [10240];
    char *sequencia = argv[2];
    while (fgets(linha, 10240, arq) != NULL) {
        if (strstr(linha,sequencia)){
            printf(linha);
        }
    }
    return 0;
}
