#include <stdio.h>
#include <string.h>

char* normaliza(char* nome, char *resultado) {
    int tamanho = strlen(nome);

    if (tamanho == 0) {
        return NULL; // Nome inválido
    }

    char *ultimo_espaco = strrchr(nome, ' ');

    if (ultimo_espaco == NULL || ultimo_espaco == nome || ultimo_espaco == nome + tamanho - 1) {
        return NULL;
    }

    strncpy(resultado, ultimo_espaco + 1, tamanho - (ultimo_espaco - nome));
    resultado[tamanho - (ultimo_espaco - nome) - 1] = ',';
    resultado[tamanho - (ultimo_espaco - nome)] = ' ';
    strncpy(resultado + tamanho - (ultimo_espaco - nome) + 1, nome, ultimo_espaco - nome);
    resultado[tamanho + 1] = '\0';

    return resultado;
}

int main() {
    char nome[] = "Joaquim José da Silva Xavier";
    char resultado[100];

    if (normaliza(nome, resultado) != NULL) {
        printf("Nome formatado: %s\n", resultado);
    } else {
        printf("Nome inválido.\n");
    }

    return 0;
}