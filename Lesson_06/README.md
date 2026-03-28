
---

# Mühazirə 6: İdarəetmə Strukturları (Hissə 2)

Dövrlər eyni əməliyyatların müəyyən şərt daxilində təkrarən yerinə yetirilməsi üçün istifadə olunur. C dilində üç əsas dövr operatoru mövcuddur: `for`, `while` və `do-while`.

## 1. Dövr strukturları

### `for` dövr operatoru (Səhifə 25)
Bu operator dövrün addımlarının sayı qabaqcadan məlum olduqda istifadə edilir.

**Sintaksis:**
```c
for (başlanğıc_qiymət; şərt; dəyişmə) {
    // dövrün gövdəsi
}
```

**Nümunə:** 1-dən 5-ə qədər ədədlərin kvadratını hesablamaq:
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d-in kvadrati: %d\n", i, i * i);
    }
    return 0;
}
```

### `while` dövr operatoru (Səhifə 27)
Dövrün addımlarının sayı məlum olmadıqda və şərt dövrün əvvəlində yoxlanıldıqda istifadə olunur. Şərt yanlışdırsa, dövrün gövdəsi heç bir dəfə də yerinə yetirilməyə bilər.

**Nümunə:** Ədədin rəqəmlərinin sayını tapmaq:
```c
int n = 12345, say = 0;
while (n != 0) {
    n = n / 10;
    say++;
}
```

### `do-while` dövr operatoru (Səhifə 28)
Bu operator dövrü heç olmasa bir dəfə yerinə yetirib, sonra şərt əsasında davam etdirmək lazım olduqda istifadə olunur. Şərt sonda yoxlanılır.

**Nümunə:** Natural ədədin rəqəmlərinin cəmini tapmaq:
```c
int n = 456, cem = 0;
do {
    cem += n % 10;
    n /= 10;
} while (n > 0);
```

---

## 2. İç-içə dövrlər (Nested loops) (Səhifə 101, 104)
Bir dövrün içərisində digər dövrün yerləşməsidir. Bu struktur əsasən matrislərin emalı və cədvəllərin qurulması üçün istifadə olunur.

**Nümunə:** 3x3 ölçülü matrisin elementlərini ekrana çıxarmaq:
```c
int i, j;
for (i = 0; i < 3; i++) {       // Sətirlər üçün
    for (j = 0; j < 3; j++) {   // Sütunlar üçün
        printf("%d ", matris[i][j]);
    }
    printf("\n");
}
```

---

## 3. break, continue və goto operatorları (Səhifə 29, 131)

* **break:** Dövrün sonunu gözləmədən onu vaxtından tez dayandırır. `switch` operatorunda da bir variantdan digərinə keçidin qarşısını almaq üçün istifadə olunur.
* **continue:** Cari addımı dayandırır və dövrdən çıxmadan növbəti addıma keçir.
* **goto (Şərtsiz keçid):** Proqramın icrasını göstərilən nişana (label) keçirir. Struktur proqramlaşdırma prinsiplərinə görə, bu operatordan istifadə məsləhət görülmür, yalnız modulun çıxış nöqtəsinə keçid üçün istifadə edilə bilər.

### İdarəetmə Operatorlarının Sadə İzahı

* **break (Dövrü qıran):** Təsəvvür edin ki, pilləkənlə 10-cu mərtəbəyə qalxmalısınız. Amma 5-ci mərtəbədə qapının bağlı olduğunu görürsünüz və dayanmağa qərar verirsiniz.
    * *Kodda mənası:* Dövr bitməmiş onu məcburi dayandırır.
* **continue (Addımı ötürən):** Yenə pilləkənlə qalxırsınız, amma 3-cü pilləkən rənglidir və siz o pilləkənə ayaq basmadan birbaşa 4-cü pilləyə keçirsiniz.
    * *Kodda mənası:* Cari addımı işləmir, amma dövrü dayandırmır, növbəti addımdan davam edir.
* **goto (Atlama):** Kitab oxuyarkən birdən səhifənin sonunda "bax: səhifə 50" qeydini görüb birbaşa oraya keçməyiniz kimidir.
    * *Kodda mənası:* Proqramın axışını istənilən nişanlanmış (label) nöqtəyə atladır. Lakin proqramın oxunaqlığını pozduğu üçün çox tövsiyə edilmir.

### Kod Nümunələri

**break:**
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // i 6-ya bərabər olduqda dövr dayanır
        }
        printf("%d ", i);
    }
    return 0;
}
```

**continue:**
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // 3 rəqəmini çap etmir, növbəti addıma keçir
        }
        printf("%d ", i);
    }
    return 0;
}
```

**goto:**
```c
#include <stdio.h>
int main() {
    int x = 0;
    start: // Bu bir nişandır (label)
    x++;
    if (x <= 3) {
        printf("X-in qiymeti: %d\n", x);
        goto start; // "start" nişanına geri qayıdır
    }
    return 0;
}
```

---

## 4. Real həyatdan istifadə ssenariləri

1.  **Animasiya (Səhifə 55, 59):** Obyektlərin ekranda hərəkətini təmin etmək üçün sonsuz `while(1)` dövründən istifadə olunur.
2.  **Sıraların cəmlənməsi (Səhifə 30):** Müəyyən bir dəqiqliklə (limitlə) riyazi sıraların hesablanması.
3.  **Məlumatların doldurulması (Səhifə 67, 102):** Massivlərin və ya matrislərin təsadüfi ədədlərlə avtomatik doldurulması.
4.  **Ədədi üsullar (Səhifə 155):** Evklid alqoritmi ilə ƏBOB-un tapılması.

### Sadə İzahlar
* **Animasiya:** Oyunun "Start" vəziyyəti kimi düşünün, ESC-ə basana qədər davam edir.
* **Sıraların cəmlənməsi:** Stəkanı damla-damla doldurmağa bənzəyir.
* **Məlumatların doldurulması:** Torbadan nömrə çıxarıb yazmaq kimidir (test məlumatları üçün).
* **Ədədi üsullar (Evklid):** İki ipi bərabərləşənə qədər kəsib qısaltmaq kimidir.

### Real Həyat Kod Nümunələri

**Animasiya (ESC ilə çıxış):**
```c
#include <stdio.h>
#include <conio.h> 

int main() {
    printf("Proqram işləyir... Çıxmaq üçün 'ESC' basın.\n");
    while (1) {
        if (kbhit()) { 
            char ch = getch();
            if (ch == 27) { 
                printf("\nProqram dayandırıldı.");
                break;
            }
        }
    }
    return 0;
}
```

**Sıraların cəmlənməsi:**
```c
#include <stdio.h>
int main() {
    double limit = 0.001, cem = 0, addim = 1.0;
    int n = 1;
    while (addim >= limit) {
        addim = 1.0 / n;
        cem += addim;
        n *= 2;
    }
    printf("Sıranın cəmi: %.4f", cem);
    return 0;
}
```

**Massivin təsadüfi doldurulması:**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int massiv[5], i;
    srand(time(0)); 
    for (i = 0; i < 5; i++) {
        massiv[i] = rand() % 100;
        printf("Element %d: %d\n", i, massiv[i]);
    }
    return 0;
}
```

**ƏBOB (Evklid alqoritmi):**
```c
#include <stdio.h>
int main() {
    int a = 48, b = 18;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    printf("ƏBOB: %d", a);
    return 0;
}
```

---

## Praktik Tapşırıqlar

### Dövr Növlərinin Müqayisəsi
1.  **for dövrü:** `for(int i = 1; i <= 10; i++) { ... }`
2.  **while dövrü:** Şərt əvvəldə yoxlanılır.
3.  **do-while dövrü:** Ən azı 1 dəfə icra olunur.

### Praktik Tapşırıqlar

1.  **Faktorial hesablama (for):** $5! = 5 \times 4 \times 3 \times 2 \times 1 = 120$.
2.  **Fibonacci seriyası (while):** $0, 1, 1, 2, 3, 5, 8, 13...$
3.  **Sadə ədəd yoxlama:** Yalnız özünə və 1-ə bölünən ədədlər.
4.  **Piramida çap etmə (nested loops):** Ulduzlarla simmetrik üçbucaq yaratmaq.
5.  **ƏBOB və ƏKOB:** Evklid alqoritmi ilə tapılması.

---