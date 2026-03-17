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
