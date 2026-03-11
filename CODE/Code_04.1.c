//Daxil edilmiş ad və soyadın uzunluğunu tapan proqram qrun.
#include <stdio.h>
#include <string.h> // Sətir funksiyaları üçün mütləqdir (strlen)

int main() {
    char melumat[50];
    printf("Adinizi daxil edin: ");
    fgets(melumat, sizeof(melumat), stdin);
    printf("Daxil etdiyiniz adin uzunlugu: %zu simvoldur.\n", strlen(melumat));
    return 0;
}


