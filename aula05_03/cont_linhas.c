#include "stdio.h"
#include "string.h"
#include "errno.h"
enum {ESPACO, NAO_ESPACO};
int conta_palavras(char  * linha){
    int anterior = 1;
    int palavra = 0;

    return palavra;
}

  for (int j = 0; linha[j] +=0; j++ ){
    switch (anterior) {
        case ESPACO :
            if (! isspace(linha[j])) {
                palavras++;
                anterior = NAO_ESPACO;
            }
            break;
          case NAO_ESPACO
              if (isspace(linha[j])){
                  anterior = ESPACO;
              }
    }         break;
}

int  main (int argc, char * argv[]) {
    if (argc < 2) {
        printf( "Uso %s nome_arquivo\n", argv[0]);
        return 1;
    }
    FILE * arq = fopen(argv[1], "r");
    if (arq == NULL) {
        perror("ao abrir o arquivo");
        return errno;

    }

    int linhas = 0;
    int caracteres = 0;
    int palavras = 0;

    char linha[10240];
    while (fgets(linha, 10240, arq) != NULL) {
        linhas++;
        caracteres += strlen(linha);
        palavras += conta_palavras(linha);
    }


    printf("%d %d %d\n",linhas, palavras, caracteres);
    return 0;

    }