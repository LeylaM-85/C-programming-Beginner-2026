Mühazirə 6: İdarəetmə Strukturları (Hissə 2)
Dövrlər eyni əməliyyatların müəyyən şərt daxilində təkrarən yerinə yetirilməsi üçün istifadə olunur. C dilində üç əsas dövr operatoru mövcuddur: for, while və do-while.
1. Dövr strukturları
for dövr operatoru (Səhifə 25)
Bu operator dövrün addımlarının sayı qabaqcadan məlum olduqda istifadə edilir. Sintaksis:
C
for (başlanğıc_qiymət; şərt; dəyişmə) {
    // dövrün gövdəsi
}
Nümunə: 1-dən 5-ə qədər ədədlərin kvadratını hesablamaq:
C
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d-in kvadrati: %d\n", i, i * i);
    }
    return 0;
}
while dövr operatoru (Səhifə 27)
Dövrün addımlarının sayı məlum olmadıqda və şərt dövrün əvvəlində yoxlanıldıqda istifadə olunur. Şərt yanlışdırsa, dövrün gövdəsi heç bir dəfə də yerinə yetirilməyə bilər. Nümunə: Ədədin rəqəmlərinin sayını tapmaq:
C
int n = 12345, say = 0;
while (n != 0) {
    n = n / 10;
    say++;
}
do-while dövr operatoru (Səhifə 28)
Bu operator dövrü heç olmasa bir dəfə yerinə yetirib, sonra şərt əsasında davam etdirmək lazım olduqda istifadə olunur. Şərt sonda yoxlanılır. Nümunə: Natural ədədin rəqəmlərinin cəmini tapmaq:
C
int n = 456, cem = 0;
do {
    cem += n % 10;
    n /= 10;
} while (n > 0);
2. İç-içə dövrlər (Nested loops) (Səhifə 101, 104)
Bir dövrün içərisində digər dövrün yerləşməsidir. Bu struktur əsasən matrislərin emalı və cədvəllərin qurulması üçün istifadə olunur. Nümunə: 3x3 ölçülü matrisin elementlərini ekrana çıxarmaq:
C
int i, j;
for (i = 0; i < 3; i++) {       // Sətirlər üçün
    for (j = 0; j < 3; j++) {   // Sütunlar üçün
        printf("%d ", matris[i][j]);
    }
    printf("\n");
}
3. break, continue və goto operatorları (Səhifə 29, 131)
•	break: Dövrün sonunu gözləmədən onu vaxtından tez dayandırır. switch operatorunda da bir variantdan digərinə keçidin qarşısını almaq üçün istifadə olunur.
•	continue: Cari addımı dayandırır və dövrdən çıxmadan növbəti addıma keçir.
•	goto (Şərtsiz keçid): Proqramın icrasını göstərilən nişana (label) keçirir. Struktur proqramlaşdırma prinsiplərinə görə, bu operatordan istifadə məsləhət görülmür, yalnız modulun çıxış nöqtəsinə keçid üçün istifadə edilə bilər.

3. İdarəetmə Operatorlarının Sadə İzahı
break (Dövrü qıran): Təsəvvür edin ki, pilləkənlə 10-cu mərtəbəyə qalxmalısınız. Amma 5-ci mərtəbədə qapının bağlı olduğunu görürsünüz və dayanmağa qərar verirsiniz.
•	Kodda mənası: Dövr bitməmiş onu məcburi dayandırır.
continue (Addımı ötürən): Yenə pilləkənlə qalxırsınız, amma 3-cü pilləkən rənglidir və siz o pilləkənə ayaq basmadan birbaşa 4-cü pilləyə keçirsiniz.
•	Kodda mənası: Cari addımı işləmir, amma dövrü dayandırmır, növbəti addımdan davam edir.
goto (Atlama): Kitab oxuyarkən birdən səhifənin sonunda "bax: səhifə 50" qeydini görüb birbaşa oraya keçməyiniz kimidir.
•	Kodda mənası: Proqramın axışını istənilən nişanlanmış (label) nöqtəyə atladır. Lakin proqramın oxunaqlığını pozduğu üçün çox tövsiyə edilmir.

3. break, continue və goto operatorları (Səhifə 29, 131)
break: Dövrün daxilində müəyyən bir şərt ödənildikdə dövrü dərhal dayandırır.
C
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
continue: Cari addımı atlayaraq birbaşa növbəti addıma keçir.
C
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
goto (Şərtsiz keçid): Proqramın icrasını nişanlanmış hissəyə transfer edir.
C
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
________________________________________

4. Real həyatdan istifadə ssenariləri
1.	Animasiya (Səhifə 55, 59): Obyektlərin ekranda hərəkətini təmin etmək üçün sonsuz while(1) dövründən istifadə olunur. Məsələn, istifadəçi Esc düyməsini (kod 27) basana qədər fiqurun yerini dəyişmək.
2.	Sıraların cəmlənməsi (Səhifə 30): Müəyyən bir dəqiqliklə (limitlə) riyazi sıraların hesablanması.
3.	Məlumatların doldurulması (Səhifə 67, 102): Massivlərin və ya matrislərin təsadüfi ədədlərlə avtomatik doldurulması.
4.	Ədədi üsullar (Səhifə 155): Evklid alqoritmi ilə ƏBOB-un tapılması və ya sadə ədədlərin (Eratosfen xəlbiri) müəyyən edilməsi.


4. Real Həyat Ssenarilərinin Sadə İzahı
Animasiya (while(1) və ESC): Bunu oyunun "Start" düyməsinə basıldıqdan sonrakı vəziyyəti kimi düşünün. Oyun dayanmadan davam edir (sonsuz dövr), ta ki siz "Çıxış" və ya "ESC" düyməsinə basana qədər.
Sıraların cəmlənməsi (Dəqiqliklə hesablanma): Bir stəkan suyu damla-damla doldurmağa bənzəyir. Siz damcılar çox kiçik (məsələn, 0.001 ml) olana qədər və ya stəkan dolana qədər davam edirsiniz. Riyaziyyatda bu, sonsuzluğa gedən ədədlərin limitini tapmaq üçün istifadə olunur.
Məlumatların doldurulması (Təsadüfi ədədlər): Bir torbanın içərisinə əlinizi atıb hər dəfə fərqli bir nömrə çıxarıb kağıza yazmaq kimidir. Proqramlaşdırmada bu, test məlumatları yaratmaq və ya oyunlarda düşmənlərin fərqli yerlərdə çıxması üçün lazımdır.
Ədədi üsullar (Evklid alqoritmi): İki ipiniz var: biri 48 sm, digəri 18 sm. Siz hər dəfə uzun ipdən qısa ipin boyda hissə kəsib atırsınız. Hər iki ipin uzunluğu bərabər olan ana qədər bu prosesi təkrar edirsiniz. Həmin qalan uzunluq ən böyük ortaq böləndir (ƏBOB).


________________________________________

4. Real həyatdan istifadə ssenariləri
Animasiya (Sonsuz dövr və ESC düyməsi ilə çıxış):
C
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
Sıraların cəmlənməsi (Müəyyən limitlə hesablanma):
C
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
Məlumatların doldurulması (Massivin təsadüfi ədədlərlə doldurulması):
C
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
Ədədi üsullar (Evklid alqoritmi ilə ƏBOB-un tapılması):
C
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
________________________________________


1. for dövrü
for(başlanğıc; şərt; artım) {
    // kod
}

// Nümunə:
for(int i = 1; i <= 10; i++) {
    printf("%d ", i);
}
2. while dövrü
int i = 1;
while(i <= 10) {
    printf("%d ", i);
    i++;
}
3. do-while dövrü
int i = 1;
do {
    printf("%d ", i);
    i++;
} while(i <= 10);
Fərq: do-while ən azı 1 dəfə icra olunur.
4. İç-içə dövrlər
// Vurma cədvəli
for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 10; j++) {
        printf("%4d", i * j);
    }
    printf("\n");
}
5. break və continue
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
Praktik Tapşırıqlar:
1.	Faktorial hesablama (for)
2.	Fibonacci seriyası (while)
3.	Sadə ədəd yoxlama
4.	Piramida çap etmə (nested loops)
5.	ƏBOB və ƏKOB
1. Faktorial nədir?
Riyaziyyatda verilmiş müsbət tam ədədin özünə qədər olan bütün ədədlərə hasilidir. Məsələn, $5! = 5 \times 4 \times 3 \times 2 \times 1 = 120$.
•	Məqsəd: Dövr (loop) vasitəsilə ədədləri bir-birinə vurmağı öyrənmək.
2. Fibonacci ardıcıllığı nədir?
Bu ardıcıllıqda hər bir ədəd özündən əvvəlki iki ədədin cəminə bərabərdir:  0, 1, 1, 2, 3, 5, 8, 13...
•	Məqsəd: Dəyişənlərin qiymətini bir-biri ilə necə sürüşdürməyi (temp dəyişəni vasitəsilə) başa düşmək.
3. Sadə ədəd (Prime number) nədir?
Yalnız özünə və 1-ə bölünən, 1-dən böyük ədədlərdir (məsələn: 2, 3, 5, 7, 11...).
•	Məqsəd: Qalıqlı bölməni (%) və if şərti ilə ədədin böləninin olub-olmadığını yoxlamağı öyrənmək.
4. Piramida nədir?
Burada məqsəd ekranda ulduzlarla (*) simmetrik bir üçbucaq forması yaratmaqdır.
•	Məqsəd: İç-içe dövrlərin (nested loops) işləmə prinsipini anlamaq: bir dövr boşluqları qoyur, digəri isə ulduzları yan-yana düzür.
5. ƏBOB (Ən Böyük Ortaq Bölən) nədir?
İki ədədin hər ikisini də qalıqsız bölən ən böyük ədəddir. Məsələn, 12 və 18 üçün ƏBOB 6-dır.
•	Məqsəd: Evklid alqoritmini (qalıqla bölmə yolu ilə sürətli tapma) tətbiq etmək.
________________________________________
Faktorial Hesablanması
C
#include <stdio.h>

int main() {
    int n, fakt = 1;
    printf("Faktorialı tapılacaq ədədi daxil edin: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        fakt *= i;
    }
    printf("%d! = %d\n", n, fakt);
    return 0;
}
Fibonacci Ardıcıllığı
C
#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    printf("Neçə Fibonacci ədədi göstərilsin: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}
Sadə və ya Mürəkkəb Ədəd
C
#include <stdio.h>

int main() {
    int n, sade = 1;
    printf("Yoxlanılacaq ədədi daxil edin: ");
    scanf("%d", &n);
    
    if(n <= 1) {
        sade = 0;
    } else {
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                sade = 0;
                break;
            }
        }
    }
    
    if(sade)
        printf("%d sadə ədəddir.\n", n);
    else
        printf("%d mürəkkəb ədəddir.\n", n);
        
    return 0;
}
Ulduzlarla Piramida
C
#include <stdio.h>

int main() {
    int n = 5; // Piramidanın hündürlüyü
    for(int i = 1; i <= n; i++) {
        // Boşluqlar üçün
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Ulduzlar üçün
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
ƏBOB-un Tapılması
C
#include <stdio.h>

int main() {
    int a, b;
    printf("İki ədəd daxil edin: ");
    scanf("%d %d", &a, &b);
    
    int num1 = a, num2 = b; // Orijinal ədədləri saxlamaq üçün
    
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d və %d üçün ƏBOB: %d\n", num1, num2, a);
    return 0;
}
________________________________________

