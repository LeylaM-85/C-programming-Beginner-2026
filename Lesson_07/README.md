
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