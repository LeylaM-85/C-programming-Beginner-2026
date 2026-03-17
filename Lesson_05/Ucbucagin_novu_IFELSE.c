//Üçbucağın növü (if-else ilə)
//Üçbucağın tərəflərinin bərabərliyini yoxlayaraq növünü təyin edirik.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Ucbucagin 3 terefini daxil edin: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c) {
        printf("Bərabərtərəfli üçbucaq");
    } else if(a == b || a == c || b == c) {
        printf("Bərabəryanlı üçbucaq");
    } else {
        printf("Müxtəliftərəfli üçbucaq");
    }

    return 0;
}
