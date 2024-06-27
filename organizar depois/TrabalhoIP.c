#include <stdio.h>

double calcular_pic(int n, double p[], double q[]) {
    double soma_q = 0, soma_p = 0;
    for (int i = 0; i < n; i++) {
        soma_q += q[i];
        soma_p += p[i];
    }
    if (soma_p > 0) {
        return (soma_q / soma_p) * 100.0;
    } else {
        return 0.0;
    }
}

double calcular_guc(int n, double p[], double q[], double u[]) {
    double soma_u_pq = 0, soma_pq = 0;
    for (int i = 0; i < n; i++) {
        soma_u_pq += u[i] * (p[i] - q[i]);
        soma_pq += (p[i] - q[i]);
    }
    if (soma_pq != 0) {
        return (soma_u_pq / soma_pq) * 100.0;
    } else {
        return 0.0;
    }
}

int main() {
    int n;
    printf("Digite o numero de amostras: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Numero de amostras invalido. Encerrando o programa.\n");
        return 1;
    }

    double p[n], q[n], u[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o peso bruto da amostra %d: ", i + 1);
        scanf("%lf", &p[i]);
        
        printf("Digite o peso de impurezas da amostra %d: ", i + 1);
        scanf("%lf", &q[i]);
        
        printf("Digite o grau de umidade da amostra %d (em percentual): ", i + 1);
        scanf("%lf", &u[i]);

        u[i] /= 100.0;
    }

    double pic = calcular_pic(n, p, q);
    double guc = calcular_guc(n, p, q, u);

    printf("Percentual medio de impurezas da carga (pic): %.2lf%%\n", pic);
    printf("Percentual medio de umidade da carga (guc): %.2lf%%\n", guc);

    return 0;
}
