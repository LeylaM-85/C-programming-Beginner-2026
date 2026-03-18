//1. Hesablama maşını (switch-case ilə)
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


//2. Hesablama maşını (switch-case ilə) getchar()
#include <stdio.h>

int main() {
    char op;
    float n1, n2;
    
    printf("Iki eded daxil edin: ");
    scanf("%f %f", &n1, &n2);
    
    getchar(); //scanf-deki /n artiq ENTER-i silir
    
    printf("Operatoru daxil edin (+, -, *, /): ");
    scanf("%c", &op);
    

    switch(op) {
        case '+': printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2); break;
        case '-': printf("%.1f - %.1f = %.lf", n1, n2, n1 - n2); break;
        case '*': printf("%.1f * %.1f = %.lf", n1, n2, n1 * n2); break;
        case '/':
            if(n2 != 0) printf("%.lf / %.lf = %.lf", n1, n2, n1 / n2);
            else printf("Sifra bolmek olmaz!");
            break;
        default: printf("Sehv operator!");
    }
    return 0;
}


//3. Hesablama maşını (switch-case ilə) 
#include <stdio.h>

int main() {
    char op;
    float n1, n2;
    
    printf("Iki eded daxil edin: ");
    scanf("%f %f", &n1, &n2);
    
     //scanf-deki /n artiq ENTER-i silmek ucun %C-d' c-nin qarsisina %-den evvel bir bosluq qoyuruq
    
    printf("Operatoru daxil edin (+, -, *, /): ");
    scanf(" %c", &op);
    

    switch(op) {
        case '+': printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2); break;
        case '-': printf("%.1f - %.1f = %.lf", n1, n2, n1 - n2); break;
        case '*': printf("%.1f * %.1f = %.lf", n1, n2, n1 * n2); break;
        case '/':
            if(n2 != 0) printf("%.lf / %.lf = %.lf", n1, n2, n1 / n2);
            else printf("Sifra bolmek olmaz!");
            break;
        default: printf("Sehv operator!");
    }
    return 0;
}

