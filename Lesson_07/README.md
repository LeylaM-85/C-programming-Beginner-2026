
---

# Mühazirə 7: Funksiyalar və Modul Proqramlaşdırma

Funksiyalar proqramın müəyyən bir hissəsini yerinə yetirən və təkrar istifadə oluna bilən kod bloklarıdır. Proqramı kiçik hissələrə (modullara) bölməklə həm oxunaqlığı artırır, həm də xətaları tapmağı asanlaşdırır.

## 1. Funksiyanın Tərifi (Səhifə 33)
Funksiya təyin edilərkən onun hansı tip dəyər qaytaracağı, adı və qəbul etdiyi parametrlər qeyd olunur.

```c
qayıdan_tip funksiya_adı(parametrlər) {
    // yerinə yetiriləcək kodlar
    return dəyər; // əgər qayıdan_tip void deyilsə
}
```

## 2. Funksiya Növləri


* **a) Parametrsiz, return yoxdur:** Heç bir məlumat almır və geri qaytarmır.
    ```c
    void salam() { printf("Salam!\n"); }
    ```
* **b) Parametrli, return yoxdur:** Məlumat qəbul edir, lakin nəticəni geri qaytarmır (məsələn, birbaşa ekrana çap edir).
    ```c
    void topla(int a, int b) { printf("Cəm: %d\n", a + b); }
    ```
* **c) Parametrsiz, return var:** Məlumat almır, lakin hesabladığı nəticəni geri qaytarır.
    ```c
    #include <stdio.h>
#include <stdlib.h>

int random_eded() { 
    return rand() % 100; 
}

int main() {
    printf("Eded: %d", random_eded());
    return 0;
}
    ```
* **d) Parametrli, return var:** Həm məlumat alır, həm də emal edib nəticəni proqrama qaytarır.
    ```c
    int carp(int a, int b) { return a * b; }
    ```

## 3. Funksiya Elanı (Prototype) (Səhifə 35)
Əgər funksiyanı `main()` funksiyasından sonra yazırsınızsa, proqramın əvvəlində onu "tanıtmalısınız".

```c
int topla(int, int); // Prototip (Elan)

int main() {
    int netice = topla(5, 3);
    return 0;
}

int topla(int a, int b) { return a + b; } // Təyin
```

## 4. Dəyər üzrə ötürmə (Pass by Value)
C dilində funksiyaya arqument ötürüləndə onun **kopyası** ötürülür. Funksiya daxilində dəyişən üzərində edilən dəyişiklik ana proqramdakı (main) orijinal dəyişənə təsir etmir.

```c
void deyis(int x) { x = 100; }

int main() {
    int a = 50;
    deyis(a);
    printf("%d", a); // Çıxış: 50 (Çünki funksiya yalnız kopyanı dəyişdi)
}
```

## 5. Rekursiya (Səhifə 41)
Funksiyanın öz-özünü çağırmasıdır. Rekursiv funksiyalarda mütləq bir "dayanma şərti" olmalıdır, yoxsa sonsuz dövr yaranar.
**Nümunə (Faktorial):** $5! = 5 \times 4!$ məntiqi ilə işləyir.

```c
int faktorial(int n) {
    if(n <= 1) return 1; // Dayanma şərti
    return n * faktorial(n - 1);
}
```

---
## Praktik Tapşırıqlar üçün İzahlar

1.  **Armstrong Ədədi:** Əgər ədədin rəqəmlərinin, rəqəm sayı qədər dərəcədən qüvvətləri cəmi özünə bərabərdirsə, bu Armstrong ədədidir (məs: $153 = 1^3 + 5^3 + 3^3$).
2.  **Fibonacci (Rekursiv):** $F(n) = F(n-1) + F(n-2)$ düsturu ilə hesablanır.
3.  **Palindrom:** Həm sağdan, həm soldan eyni oxunan söz və ya ədədlər (məs: "madam", 121).
---

-----

# Mühazirə 7: Funksiyalar üzrə Praktik Tapşırıqların kodları

-----

### 1\. Ədədin dərəcəsinin hesablanması

Bu funksiya verilmiş əsasın (base) göstərilən dərəcəyə (power) qaldırılmasını `for` dövrü vasitəsilə həyata keçirir.

```c
#include <stdio.h>

int power(int esas, int derece) {
    int netice = 1;
    for(int i = 0; i < derece; i++) {
        netice *= esas;
    }
    return netice;
}

int main() {
    printf("Nəticə (2^10): %d\n", power(2, 10));  // Gözlənilən çıxış: 1024
    return 0;
}
```

-----

### 2\. Armstrong ədədinin yoxlanılması

Əgər ədədin rəqəmlərinin, rəqəm sayı qədər dərəcədən qüvvətləri cəmi özünə bərabərdirsə, bu Armstrong ədədidir.
*Məsələn:* $153 = 1^3 + 5^3 + 3^3$

```c
#include <stdio.h>
#include <math.h>

int armstrong_mu(int n) {
    int cemm = 0, temp = n, reqem_sayi = 0;
    
    // 1. Addım: Rəqəm sayını tapmaq
    int t = n;
    while(t != 0) {
        reqem_sayi++;
        t /= 10;
    }
    
    // 2. Addım: Hər bir rəqəmin qüvvətlər cəmini hesablamaq
    temp = n;
    while(temp != 0) {
        int reqem = temp % 10;
        cemm += pow(reqem, reqem_sayi);
        temp /= 10;
    }
    
    // 3. Addım: Nəticəni orijinal ədədlə müqayisə etmək
    return (cemm == n);
}

int main() {
    if(armstrong_mu(153))
        printf("153 Armstrong ədədidir.\n");
    else
        printf("153 Armstrong ədədi deyil.\n");
    return 0;
}
```

-----

### 3\. Fibonacci seriyası (Rekursiv)

Funksiyanın özünü çağırması (rekursiya) vasitəsilə Fibonacci ardıcıllığının $n$-ci həddini tapır.

```c
#include <stdio.h>

int fib(int n) {
    if(n <= 1) return n; // Dayanma şərti
    return fib(n-1) + fib(n-2);
}

int main() {
    printf("Fibonacci seriyası (ilk 10 hədd):\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
```

-----

### 4\. Palindrom sözün yoxlanılması

Verilmiş simvollar massivinin (string) həm soldan, həm də sağdan eyni oxunub-oxunmadığını yoxlayır.

```c
#include <stdio.h>
#include <string.h>

int palindrom_mu(char str[]) {
    int uzunluq = strlen(str);
    for(int i = 0; i < uzunluq / 2; i++) {
        // Qarşılıqlı simvollar fərqlidirsə, palindrom deyil
        if(str[i] != str[uzunluq - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    printf("madam: %s\n", palindrom_mu("madam") ? "Palindromdur" : "Deyil");
    printf("hello: %s\n", palindrom_mu("hello") ? "Palindromdur" : "Deyil");
    return 0;
}
```

-----
