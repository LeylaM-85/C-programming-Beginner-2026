/*1. puts() və putchar() funksiyalarına aid kod
puts funksiyasının ən böyük üstünlüyü avtomatik olaraq sətir sonuna \n əlavə etməsidir. putchar isə yaddaşda simvolun ASCII kodu ilə işləyir.*/


#include <stdio.h>

int main() {
    // puts istifadəsi
    puts("Proqramlasdirma dunyasina xos gelmisiniz!");
    puts("Bu funksiya avtomatik yeni setre kecir.");

    // putchar istifadəsi
    putchar('C'); // Tək dırnaq mütləqdir
    putchar('\n');
    putchar(65);  // ASCII cədvəlində 65 'A' hərfidir
    putchar('\n');

    return 0;
}
//Tapşırıq 1: Ekrana putchar funksiyasından istifadə edərək öz adınızın baş hərfini, puts funksiyası ilə isə soyadınızı çap edən proqram yazın.
