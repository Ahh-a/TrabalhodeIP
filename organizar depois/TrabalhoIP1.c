#include <stdio.h>
#include <string.h>

void centerText(char* dest, const char* src, int width) {
    int len = strlen(src);
    int padding = (width - len) / 2;
    for (int i = 0; i < padding; i++) {
        dest[i] = ' ';
    }
    strcpy(dest + padding, src);
    for (int i = padding + len; i < width; i++) {
        dest[i] = ' ';
    }
    dest[width] = '\0';
}

void printRelatorio(char* mes, int linhas, char dados[linhas][6][10]) {
    printf("=>> Mes: %s\n", mes);
    printf("\n");

    char origem[15], cargas[15], guFaixa1[15], guFaixa2[15], guFaixa3[15], guExtra[15];
    centerText(origem, "Origem", 14);
    centerText(cargas, "Cargas", 14);
    centerText(guFaixa1, "GU Faixa 1", 14);
    centerText(guFaixa2, "GU Faixa 2", 14);
    centerText(guFaixa3, "GU Faixa 3", 14);
    centerText(guExtra, "GU Extra", 14);

    printf("%s %s %s %s %s %s\n", origem, cargas, guFaixa1, guFaixa2, guFaixa3, guExtra);
    printf("--------------+--------------+--------------+--------------+--------------+--------------\n");

    for (int i = 0; i < linhas; i++) {
        for (int k = 0; k < 6; k++) {
            char aligned[15];
            centerText(aligned, "xxxx", 14);
            printf("%s ", aligned);
        }
        printf("\n");
    }
}

int main() {
    char mes[] = "aaaaaaaa";

    char dados[2][6][10] = {
        {"xxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx"},
        {"xxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx"}
    };

    printRelatorio(mes, 2, dados);

    return 0;
}
