/*
---

### 1. printf() və scanf() ilə sadə giriş-çıxış
```c
#include <stdio.h>

int main() {
    char ad[50];
    int yas;
    
    printf("Adinizi daxil edin: ");
    scanf("%s", ad);
    
    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);
    
    printf("Salam %s, sizin %d yasiniz var.\n", ad, yas);
    return 0;
}
```

### 2. Ədədin kubunu hesablama
```c
#include <stdio.h>

int main() {
    int eded;
    printf("Eded daxil edin: ");
    scanf("%d", &eded);
    
    printf("Ededin kubu: %d\n", eded * eded * eded);
    return 0;
}
```

### 3. 3 rəqəmli ədədin rəqəmləri cəmi
```c
#include <stdio.h>

int main() {
    int eded, a, b, c, cem;
    printf("3 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    c = eded % 10;          // Təkliklər
    b = (eded / 10) % 10;   // Onluqlar
    a = eded / 100;         // Yüzlüklər
    
    cem = a + b + c;
    printf("Reqemleri cemi: %d\n", cem);
    return 0;
}
```

### 4. 4 rəqəmli ədədin rəqəmləri cəmi
```c
#include <stdio.h>

int main() {
    int eded, a, b, c, d, cem;
    printf("4 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    d = eded % 10;
    c = (eded / 10) % 10;
    b = (eded / 100) % 10;
    a = eded / 1000;
    
    cem = a + b + c + d;
    printf("Reqemleri cemi: %d\n", cem);
    return 0;
}
```

### 5. 3 rəqəmli ədədin rəqəmləri hasili
```c
#include <stdio.h>

int main() {
    int eded, a, b, c, hasil;
    printf("3 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    c = eded % 10;
    b = (eded / 10) % 10;
    a = eded / 100;
    
    hasil = a * b * c;
    printf("Reqemleri hasili: %d\n", hasil);
    return 0;
}
```

### 6. 4 rəqəmli ədədin rəqəmləri hasili
```c
#include <stdio.h>

int main() {
    int eded, a, b, c, d, hasil;
    printf("4 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    d = eded % 10;
    c = (eded / 10) % 10;
    b = (eded / 100) % 10;
    a = eded / 1000;
    
    hasil = a * b * c * d;
    printf("Reqemleri hasili: %d\n", hasil);
    return 0;
}
```

### 7. 2 rəqəmli ədədin rəqəmlərinin kvadratları cəmi
```c
#include <stdio.h>

int main() {
    int eded, a, b, cem;
    printf("2 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    b = eded % 10;
    a = eded / 10;
    
    cem = (a * a) + (b * b);
    printf("Reqemlerin kvadratlari cemi: %d\n", cem);
    return 0;
}
```

### 8. Tam ədədlərin kəsr nisbəti (Casting)
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Iki tam eded daxil edin: ");
    scanf("%d %d", &a, &b);
    
    float nisbet = (float)a / b; // Açıq tip dönüşümü
    printf("Nisbet: %.2f\n", nisbet);
    return 0;
}
```

### 9. Çoxlu məlumat daxil etmə (Ad, Soyad, Tarix, Nömrə)
```c
#include <stdio.h>

int main() {
    char ad[30], soyad[30], tarix[20], nomre[20];
    
    printf("Adiniz: "); scanf("%s", ad);
    printf("Soyadiniz: "); scanf("%s", soyad);
    printf("Dogum tarixiniz (GG.AA.IIII): "); scanf("%s", tarix);
    printf("Telefon nomreniz: "); scanf("%s", nomre);
    
    printf("\n--- Profil ---\n");
    printf("Ad: %s\nSoyad: %s\nTarix: %s\nNomre: %s\n", ad, soyad, tarix, nomre);
    return 0;
}
```

### 10. Sağa düzləndirmə (Formatlı çap)
```c
#include <stdio.h>

int main() {
    // %4s mətni 4 simvolluq sahədə sağa söykəyir
    printf("%4s\n", "x");
    printf("%4s\n", "xxx");
    printf("%4s\n", "xxxx");
    return 0;
}
```

### 11. Rəqəmsal Saat formatı (%02d)
```c
#include <stdio.h>

int main() {
    int saat, deqiqe;
    printf("Saat və deqiqeni daxil edin: ");
    scanf("%d %d", &saat, &deqiqe);
    
    printf("Zaman: %02d:%02d\n", saat, deqiqe);
    return 0;
}
```

### 12. Mağaza proqramı (%.2f AZN)
```c
#include <stdio.h>

int main() {
    float qiymet, umumi;
    int say;
    
    printf("Qiymət: "); scanf("%f", &qiymet);
    printf("Say: "); scanf("%d", &say);
    
    umumi = qiymet * say;
    printf("Ödəniləcək məbləğ: %.2f AZN\n", umumi);
    return 0;
}
```

### 13. Ad və soyadın uzunluğu (<string.h>)
```c
#include <stdio.h>
#include <string.h>

int main() {
    char ad[50], soyad[50];
    
    printf("Adinizi daxil edin: "); scanf("%s", ad);
    printf("Soyadinizi daxil edin: "); scanf("%s", soyad);
    
    printf("Adin uzunlugu: %zu\n", strlen(ad));
    printf("Soyadin uzunlugu: %zu\n", strlen(soyad));
    return 0;
}
```

### 14. İki ədədin ən böyüyü
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Iki eded daxil edin: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("En boyuk: %d\n", a);
    } else {
        printf("En boyuk: %d\n", b);
    }
    return 0;
}
```

### 15. Üç ədədin ən kiçiyi (Məntiqi operator)
```c
#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Uc eded daxil edin: ");
    scanf("%d %d %d", &a, &b, &c);
    
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    
    printf("En kicik eded: %d\n", min);
    return 0;
}
```

### 16. Ternary operator (Cüt/Tək)
```c
#include <stdio.h>

int main() {
    int eded;
    printf("Eded daxil edin: ");
    scanf("%d", &eded);
    
    printf("%s\n", (eded % 2 == 0) ? "Cutdur" : "Tekdir");
    return 0;
}
```

### 17. Nested if-else (Mənfi/Sıfır/Müsbət kateqoriyası)
```c
#include <stdio.h>

int main() {
    int eded;
    printf("Eded daxil edin: ");
    scanf("%d", &eded);
    
    if (eded > 0) {
        if (eded > 100) printf("Boyuk musbet eded\n");
        else printf("Kicik musbet eded\n");
    } else if (eded < 0) {
        printf("Menfi eded\n");
    } else {
        printf("Sifir\n");
    }
    return 0;
}
```

### 18. Yaş validasiyası
```c
#include <stdio.h>

int main() {
    int yas;
    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);
    
    if (yas < 18) {
        printf("Giriş qadağandır!\n");
    } else {
        printf("Xosh gelmisiniz!\n");
    }
    return 0;
}
```

### 19. Hava Proqnozu
```c
#include <stdio.h>

int main() {
    float temp;
    printf("Temperaturu daxil edin: ");
    scanf("%f", &temp);
    
    if (temp < 10) printf("Soyuq\n");
    else if (temp >= 10 && temp <= 25) printf("Normal\n");
    else printf("Cox isti\n");
    
    return 0;
}
```

### 20. Switch-case: Ayın günləri
```c
#include <stdio.h>

int main() {
    int ay;
    printf("Ayin nomresini daxil edin (1-12): ");
    scanf("%d", &ay);
    
    switch(ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 gun\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 gun\n"); break;
        case 2:
            printf("28 veya 29 gun\n"); break;
        default:
            printf("Yanlis ay nomresi!\n");
    }
    return 0;
}
```

### 21. Switch-case: Kurs Seçimi
```c
#include <stdio.h>

int main() {
    int kurs;
    printf("Kurs nomresini secin (1-C, 2-Python, 3-Java): ");
    scanf("%d", &kurs);
    
    switch(kurs) {
        case 1: printf("C Proqramlasdirma\n"); break;
        case 2: printf("Python\n"); break;
        case 3: printf("Java\n"); break;
        default: printf("Secim yanlisdir!\n");
    }
    return 0;
}
```

### 22. if-else if: Hərf qiyməti (A, B, C, D, F)
```c
#include <stdio.h>

int main() {
    int bal;
    printf("Bali daxil edin (0-100): ");
    scanf("%d", &bal);
    
    if (bal >= 90 && bal <= 100) printf("Qiymet: A\n");
    else if (bal >= 80) printf("Qiymet: B\n");
    else if (bal >= 70) printf("Qiymet: C\n");
    else if (bal >= 60) printf("Qiymet: D\n");
    else if (bal >= 0 && bal < 60) printf("Qiymet: F\n");
    else printf("Yanlis bal daxil edilib!\n");
    
    return 0;
}
```
*/