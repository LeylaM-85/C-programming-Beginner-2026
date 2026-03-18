/*Təqvim: Ayın günləri (switch-case qruplaşdırma ilə)
Bu nümunədə bir neçə case-i bir qrupda birləşdirərək kodun həcmini azaldırıq (Fevral ayı üçün 28 gün nəzərdə tutulub).*/

#include <stdio.h>

int main() {
    int ay;
    printf("Ayin nomresini daxil edin (1-12): ");
    scanf("%d", &ay);

    switch(ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Bu ay 31 gunden ibaretdir.");
            break;
        case 4: case 6: case 9: case 11:
            printf("Bu ay 30 gunden ibaretdir.");
            break;
        case 2:
            printf("Bu ay 28 ve ya 29 gunden ibaretdir.");
            break;
        default:
            printf("Yanlis ay nomresi!");
    }

    return 0;
}



/*2) Təqvim: Ayın günləri (switch-case qruplaşdırma ilə) enum siyahisindan istifade
Bu nümunədə bir neçə case-i bir qrupda birləşdirərək kodun həcmini azaldırıq (Fevral ayı üçün 28 gün nəzərdə tutulub).*/
#include <stdio.h>

// İlk aya 1 mənimsətməklə siyahını başladırıq
enum Aylar {
    Yanvar = 1, Fevral, Mart, Aprel, May, Iyun, 
    Iyul, Avqust, Sentyabr, Oktyabr, Noyabr, Dekabr
};

int main() {
    int ay_no, gun = 0;
    printf("Ayin nomresini daxil edin (1-12): ");
    scanf("%d", &ay_no);

    switch(ay_no) {
        case Yanvar: case Mart: case May: case Iyul: 
        case Avqust: case Oktyabr: case Dekabr:
            gun = 31;
            break;
            
        case Aprel: case Iyun: case Sentyabr: case Noyabr:
            gun = 30;
            break;
            
        case Fevral:
            gun = 28; // Sadəlik üçün 28 götürdük
            break;
            
        default:
            printf("Yanlis ay nomresi!\n");
            return 0;
    }

    printf("Bu ay %d gunden ibaretdir.", gun);

    return 0;
}
