//Hesablama maşını (switch-case ilə)
#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    printf("Operatoru daxil edin (+, -, *, /): ");
    scanf("%c", &op);
    printf("Iki eded daxil edin: ");
    scanf("%lf %lf", &n1, &n2);

    switch(op) {
        case '+': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2); break;
        case '-': printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2); break;
        case '*': printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2); break;
        case '/':
            if(n2 != 0) printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
            else printf("Sifra bolmek olmaz!");
            break;
        default: printf("Sehv operator!");
    }
    return 0;
}
