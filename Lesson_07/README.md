
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
    int random_eded() { return rand() % 100; }
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

/* --- MÜHAZIRƏ 7: FUNKSIYALAR --- */

// Tapşırıq 1: Dərəcə
/*
int power(int esas, int derece) {
    int netice = 1;
    for(int i = 0; i < derece; i++) {
        netice *= esas;
    }
    return netice;
}

int main() {
    printf("%d\n", power(2, 10));  // 1024
    return 0;
}
*/

// Tapşırıq 2: Armstrong ədədi
/*
#include <math.h>

int armstrong_mu(int n) {
    int cemm = 0, temp = n, reqem_sayi = 0;
    
    // Rəqəm sayı
    while(temp != 0) {
        reqem_sayi++;
        temp /= 10;
    }
    
    temp = n;
    while(temp != 0) {
        int reqem = temp % 10;
        cemm += pow(reqem, reqem_sayi);
        temp /= 10;
    }
    
    return (cemm == n);
}

int main() {
    printf("%d\n", armstrong_mu(153));  // 1^3 + 5^3 + 3^3 = 153
    return 0;
}
*/

// Tapşırıq 3: Fibonacci (rekursiv)
/*
int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    for(int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
*/

// Tapşırıq 4: Palindrom
/*
#include <string.h>

int palindrom_mu(char str[]) {
    int uzunluq = strlen(str);
    for(int i = 0; i < uzunluq/2; i++) {
        if(str[i] != str[uzunluq-1-i]) return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", palindrom_mu("madam"));  // 1
    printf("%d\n", palindrom_mu("hello"));  // 0
    return 0;
}
*/

