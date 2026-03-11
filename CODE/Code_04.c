#include <stdio.h>
#include <string.h> // Sətir funksiyaları üçün mütləqdir

int main() {
    char ad[50];
    char kopya_ad[50];
    char parol[] = "Admin123";

    printf("Adinizi daxil edin: ");
    
    // 1. fgets() - Boşluqla birlikdə təhlükəsiz oxuma
    fgets(ad, sizeof(ad), stdin);

    // 2. strcspn() - Sondakı 'Enter' (\n) simvolunu tapıb silmək
    // Əgər bunu etməsək, müqayisə zamanı problem yarana bilər
    ad[strcspn(ad, "\n")] = '\0';

    // 3. strlen() - Mətnin uzunluğunu tapmaq
    printf("Daxil etdiyiniz adin uzunlugu: %zu simvoldur.\n", strlen(ad));

    // 4. strcpy() - Bir mətni digərinə kopyalamaq
    strcpy(kopya_ad, ad);
    printf("Adiniz ugurla kopyalandi. Kopya: %s\n", kopya_ad);

    // 5. strcmp() - İki mətni müqayisə etmək
    // Funksiya 0 qaytarırsa, deməli mətnlər eynidir
    if (strcmp(ad, parol) == 0) {
        printf("Giris ugurludur! Xos geldiniz.\n");
    } else {
        printf("Siz sistem idarəçisi deyilsiniz.\n");
    }

    return 0;
}
