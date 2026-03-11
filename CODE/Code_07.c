//3. İstifadəçidən bir kiçik hərf daxil etməsini istəyin. Proqram həmin hərfi böyük hərfə çevirib ekrana çıxarsın. (İpucu: ASCII cədvəlində böyük və kiçik hərflər arasında 32 vahid fərq var).


#include <stdio.h>

int main() {
    char kicik_herf, boyuk_herf;

    puts("Bir kicik herf daxil edin:");
    kicik_herf = getchar();

    // Kiçik hərfi böyük hərfə çevirmək üçün 32 çıxırıq
    boyuk_herf = kicik_herf - 32;

    printf("Herfin boyuk formasi: ");
    putchar(boyuk_herf);
    putchar('\n');

    return 0;
}
