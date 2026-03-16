//Yaş kateqoriyası (if-else ilə)
//Burada daxil edilən yaşa görə insanın hansı qrupa aid olduğu təyin edilir.
#include <stdio.h>

int main() {
    int yas;
    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);

    if(yas < 0) printf("Yash menfi ola bilmez.");
    else if(yas <= 12) printf("Kateqoriya: Uşaq");
    else if(yas <= 35) printf("Kateqoriya: Gənc");
    else if(yas <= 60) printf("Kateqoriya: Orta yaşlı");
    else printf("Kateqoriya: Yaşlı");

    return 0;
}
