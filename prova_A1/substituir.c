#include <stdio.h>
#include <string.h>

int substitui(char* texto, char* sub, char* outra, char *resultado) {
    char *posicao_substring = strstr(texto, sub);

    if (posicao_substring == NULL) {
        strcpy(resultado, texto);
        return 0;
    }

    int posicao = posicao_substring - texto;
    strncpy(resultado, texto, posicao);
    resultado[posicao] = '\0';

    strcat(resultado, outra);
    strcat(resultado, posicao_substring + strlen(sub));
    return 1;
}

int main() {
    char texto[] = "correr";
    char sub[] = "rre";
    char outra[] = "pia";
    char resultado[100];

    int substituido = substitui(texto, sub, outra, resultado);

    if (substituido) {
        printf("Resultado: %s\n", resultado);
    } else {
        printf("Nenhuma substituicao feita.\n");
    }

    return 0;
}