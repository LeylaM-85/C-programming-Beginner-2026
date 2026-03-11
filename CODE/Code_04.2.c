//Daxil edilmiş mətnin kopyalanması
#include <stdio.h>
#include <string.h> // Sətir funksiyaları üçün mütləqdir
int main() {
    char ad[50];
    char kopya_ad[50];
    printf("Adinizi daxil edin: ");
    fgets(ad, sizeof(ad), stdin);
    strcpy(kopya_ad, ad);
    printf("Adiniz ugurla kopyalandi. Kopya: %s\n", kopya_ad);
    return 0;
}
