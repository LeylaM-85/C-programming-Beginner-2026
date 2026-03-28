
```markdown
# Mühazirə 6: İdarəetmə Strukturları (Hissə 2)

Dövrlər eyni əməliyyatların müəyyən şərt daxilində təkrarən yerinə yetirilməsi üçün istifadə olunur. C dilində üç əsas dövr operatoru mövcuddur: for, while və do-while.

## 1. Dövr strukturları

### for dövr operatoru (Səhifə 25)
Bu operator dövrün addımlarının sayı qabaqcadan məlum olduqda istifadə edilir. Sintaksis:

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

### while dövr operatoru (Səhifə 27)
Dövrün addımlarının sayı məlum olmadıqda və şərt dövrün əvvəlində yoxlanıldıqda istifadə olunur. Şərt yanlışdırsa, dövrün gövdəsi heç bir dəfə də yerinə yetirilməyə bilər. 

**Nümunə:** Ədədin rəqəmlərinin sayını tapmaq:

```c
int n = 12345, say = 0;
while (n != 0) {
    n = n / 10;
    say++;
}
```

### do-while dövr operatoru (Səhifə 28)
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

* **break:** Dövrün sonunu gözləmədən onu vaxtından tez dayandırır. switch operatorunda da bir variantdan digərinə keçidin qarşısını almaq üçün istifadə olunur.
* **continue:** Cari addımı dayandırır və dövrdən çıxmadan növbəti addıma keçir.
* **goto (Şərtsiz keçid):** Proqramın icrasını göstərilən nişana (label) keçirir. Struktur proqramlaşdırma prinsiplərinə görə, bu operatordan istifadə məsləhət görülmür, yalnız modulun çıxış nöqtəsinə keçid üçün istifadə edilə bilər.

### İdarəetmə Operatorlarının Sadə İzahı

* **break (Dövrü qıran):** Təsəvvür edin ki, pilləkənlə 10-cu mərtəbəyə qalxmalısınız. Amma 5-ci mərtəbədə qapının bağlı olduğunu görürsünüz və dayanmağa qərar verirsiniz.
    * **Kodda mənası:** Dövr bitməmiş onu məcburi dayandırır.
* **continue (Addımı ötürən):** Yenə pilləkənlə qalxırsınız, amma 3-cü pilləkən rənglidir və siz o pilləkənə ayaq basmadan birbaşa 4-cü pilləyə keçirsiniz.
    * **Kodda mənası:** Cari addımı işləmir, amma dövrü dayandırmır, növbəti addımdan davam edir.
* **goto (Atlama):** Kitab oxuyarkən birdən səhifənin sonunda "bax: səhifə 50" qeydini görüb birbaşa oraya keçməyiniz kimidir.
    * **Kodda mənası:** Proqramın axışını istənilən nişanlanmış (label) nöqtəyə atladır. Lakin proqramın oxunaqlığını pozduğu üçün çox tövsiyə edilmir.

### break, continue və goto operatorları (Kod Nümunələri)

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
    // Çıxış: 1 2 3 4 5
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
    // Çıxış: 1 2 4 5
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

1. **Animasiya (Səhifə 55, 59):** Obyektlərin ekranda hərəkətini təmin etmək üçün sonsuz while(1) dövründən istifadə olunur. Məsələn, istifadəçi Esc düyməsini (kod 27) basana qədər fiqurun yerini dəyişmək.
2. **Sıraların cəmlənməsi (Səhifə 30):** Müəyyən bir dəqiqliklə (limitlə) riyazi sıraların hesablanması.
3. **Məlumatların doldurulması (Səhifə 67, 102):** Massivlərin və ya matrislərin təsadüfi ədədlərlə avtomatik doldurulması.
4. **Ədədi üsullar (Səhifə 155):** Evklid alqoritmi ilə ƏBOB-un tapılması və ya sadə ədədlərin (Eratosfen xəlbiri) müəyyən edilməsi.

### Real Həyat Ssenarilərinin Sadə İzahı

* **Animasiya (while(1) və ESC):** Bunu oyunun "Start" düyməsinə basıldıqdan sonrakı vəziyyəti kimi düşünün. Oyun dayanmadan davam edir (sonsuz dövr), ta ki siz "Çıxış" və ya "ESC" düyməsinə basana qədər.
* **Sıraların cəmlənməsi (Dəqiqliklə hesablanma):** Bir stəkan suyu damla-damla doldurmağa bənzəyir. Siz damcılar çox kiçik (məsələn, 0.001 ml) olana qədər və ya stəkan dolana qədər davam edirsiniz. Riyaziyyatda bu, sonsuzluğa gedən ədədlərin limitini tapmaq üçün istifadə olunur.
* **Məlumatların doldurulması (Təsadüfi ədədlər):** Bir torbanın içərisinə əlinizi atıb hər dəfə fərqli bir nömrə çıxarıb kağıza yazmaq kimidir. Proqramlaşdırmada bu, test məlumatları yaratmaq və ya oyunlarda düşmənlərin fərqli yerlərdə çıxması üçün lazımdır.
* **Ədədi üsullar (Evklid alqoritmi):** İki ipiniz var: biri 48 sm, digəri 18 sm. Siz hər dəfə uzun ipdən qısa ipin boyda hissə kəsib atırsınız. Hər iki ipin uzunluğu bərabər olan ana qədər bu prosesi təkrar edirsiniz. Həmin qalan uzunluq ən böyük ortaq böləndir (ƏBOB).

### Real həyatdan istifadə ssenariləri (Kod Nümunələri)

**Animasiya (Sonsuz dövr və ESC düyməsi ilə çıxış):**
```c
#include <stdio.h>
#include <conio.h> // kbhit() və getch() üçün (Windows)

int main() {
    printf("Proqram işləyir... Çıxmaq üçün 'ESC' basın.\n");
    while (1) {
        if (kbhit()) { // Düymə basılıb-basılmadığını yoxlayır
            char ch = getch();
            if (ch == 27) { // 27 ESC düyməsinin ASCII kodudur
                printf("\nProqram dayandırıldı.");
                break;
            }
        }
        // Burada animasiya və ya hərəkət kodları ola bilər
    }
    return 0;
}
```

**Sıraların cəmlənməsi (Müəyyən limitlə hesablanma):**
```c
#include <stdio.h>

int main() {
    double limit = 0.001, cem = 0, addim = 1.0;
    int n = 1;
    // 1/1 + 1/2 + 1/4... sırasının müəyyən həddə qədər cəmi
    while (addim >= limit) {
        addim = 1.0 / n;
        cem += addim;
        n *= 2;
    }
    printf("Sıranın cəmi: %.4f", cem);
    return 0;
}
```

**Məlumatların doldurulması (Massivin təsadüfi ədədlərlə doldurulması):**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int massiv[5], i;
    srand(time(0)); // Hər dəfə fərqli təsadüfi ədədlər üçün

    for (i = 0; i < 5; i++) {
        massiv[i] = rand() % 100; // 0-99 arası təsadüfi ədəd
        printf("Element %d: %d\n", i, massiv[i]);
    }
    return 0;
}
```

**Ədədi üsullar (Evklid alqoritmi ilə ƏBOB-un tapılması):**
```c
#include <stdio.h>

int main() {
    int a = 48, b = 18;
    printf("%d və %d üçün ƏBOB: ", a, b);

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("%d", a);
    return 0;
}
```

---

## Nümunələr

**1. for dövrü**
```c
for(int i = 1; i <= 10; i++) {
    printf("%d ", i);
}
```

**2. while dövrü**
```c
int i = 1;
while(i <= 10) {
    printf("%d ", i);
    i++;
}
```

**3. do-while dövrü**
```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while(i <= 10);
```
*Fərq: do-while ən azı 1 dəfə icra olunur.*

**4. İç-içə dövrlər (Vurma cədvəli)**
```c
for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 10; j++) {
        printf("%4d", i * j);
    }
    printf("\n");
}
```

**5. break və continue**
```c
// break - dövrü dayandır
for(int i = 1; i <= 10; i++) {
    if(i == 5) break;
    printf("%d ", i);  // 1 2 3 4
}

// continue - növbəti iterasiyaya keç
for(int i = 1; i <= 10; i++) {
    if(i % 2 == 0) continue;  // Cüt ədədləri keç
    printf("%d ", i);  // 1 3 5 7 9
}
```

---

## Praktik Tapşırıqlar

1. **Faktorial hesablama (for)**
   * **Nədir?** Müsbət tam ədədin özünə qədər olan bütün ədədlərə hasilidir ($5! = 120$).
   * **Məqsəd:** Dövr vasitəsilə ədədləri bir-birinə vurmağı öyrənmək.

2. **Fibonacci seriyası (while)**
   * **Nədir?** Hər bir ədəd özündən əvvəlki iki ədədin cəmidir (0, 1, 1, 2, 3, 5, 8...).
   * **Məqsəd:** Dəyişənlərin qiymətini bir-biri ilə sürüşdürməyi öyrənmək.

3. **Sadə ədəd yoxlama**
   * **Nədir?** Yalnız özünə və 1-ə bölünən 1-dən böyük ədədlər.
   * **Məqsəd:** Qalıqlı bölməni (%) və şərt yoxlamağı öyrənmək.

4. **Piramida çap etmə (nested loops)**
   * **Nədir?** Ekranda ulduzlarla (*) simmetrik üçbucaq yaratmaq.
   * **Məqsəd:** İç-içə dövrlərin boşluq və simvol məntiqini anlamaq.

5. **ƏBOB (Ən Böyük Ortaq Bölən)**
   * **Nədir?** İki ədədi qalıqsız bölən ən büyük ədəd.
   * **Məqsəd:** Evklid alqoritmini tətbiq etmək.
```