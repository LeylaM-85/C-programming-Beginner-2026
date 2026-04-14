---

# 📘 Mühazirə 7: Funksiyalar və Modul Proqramlaşdırma

Bu qovluqda C proqramlaşdırma dilində funksiyaların yaradılması, növləri və praktiki tətbiqləri (rekursiya, riyazi hesablamalar) əks olunmuşdur.

## 📌 Funksiya Növləri 

C dilində funksiyalar dörd formada təzahür edir. 

### 1. Parametrsiz və Geri Dəyər Qaytarmayan (`void`)
Heç bir giriş məlumatı almır və nəticə qaytarmır.
```c
#include <stdio.h>

void salam_ver() { 
    printf("Salam! Funksiya ugurla cagirildi.\n"); 
}

int main() {
    salam_ver(); 
    return 0;
}
```

### 2. Parametrli və Geri Dəyər Qaytarmayan
Məlumat qəbul edir, lakin nəticəni funksiyanın daxilində çap edir.
```c
#include <stdio.h>

void cem_cap_et(int a, int b) { 
    printf("Iki ededin cemi: %d\n", a + b); 
}

int main() {
    cem_cap_et(10, 20); 
    return 0;
}
```

### 3. Parametrsiz və Geri Dəyər Qaytaran
Giriş parametri yoxdur, lakin hesabladığı dəyəri `main`-ə göndərir.
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sansli_eded() { 
    return rand() % 100; // 0-99 arasi
}

int main() {
    srand(time(0)); 
    printf("Sizin sansli edediniz: %d\n", sansli_eded());
    return 0;
}
```

### 4. Parametrli və Geri Dəyər Qaytaran (Ən çox istifadə edilən)
Məlumat alır, emal edir və nəticəni geri qaytarır.
```c
#include <stdio.h>

int hasil(int x, int y) { 
    return x * y; 
}

int main() {
    int netice = hasil(5, 8);
    printf("Hasil: %d\n", netice);
    return 0;
}
```

---

## 🛠 Praktik Tapşırıqların Həlli

Bu bölmədə mühazirədə qeyd olunan mürəkkəb məsələlərin tam və izahlı həlləri verilmişdir.

### 🔢 Ədədin Dərəcəsinin Hesablanması

```c
#include <stdio.h>

int quvvet_tap(int esas, int derece) {
    int netice = 1;
    for(int i = 0; i < derece; i++) {
        netice *= esas;
    }
    return netice;
}

int main() {
    printf("3 ustu 4 = %d\n", quvvet_tap(3, 4));
    return 0;
}
```

### ✨ Armstrong Ədədinin Yoxlanılması
*Qeyd:* Armstrong ədədi rəqəmlərinin kubları (və ya rəqəm sayı qədər qüvvəti) cəmi özünə bərabər olan ədəddir ($153, 370$ və s.).
```c
#include <stdio.h>
#include <math.h>

int armstrong_yoxla(int n) {
    int cem = 0, temp = n, reqem_sayi = 0;
    
    // Reqem sayini tapiriq
    int t = n;
    while(t != 0) { reqem_sayi++; t /= 10; }
    
    // Her reqemin quvvetini cemleyirik
    temp = n;
    while(temp != 0) {
        int reqem = temp % 10;
        cem += pow(reqem, reqem_sayi);
        temp /= 10;
    }
    return (cem == n);
}

int main() {
    int eded = 153;
    if(armstrong_yoxla(eded)) printf("%d Armstrongdur.\n", eded);
    else printf("%d Armstrong deyil.\n", eded);
    return 0;
}
```

### 🌀 Fibonacci Seriyası (Rekursiya ilə)

```c
#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    printf("Fibonacci (ilk 10 element): ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
```

### 🔁 Palindrom Söz Yoxlanılması
```c
#include <stdio.h>
#include <string.h>

int palindrom_yoxla(char soz[]) {
    int uzunluq = strlen(soz);
    for(int i = 0; i < uzunluq / 2; i++) {
        if(soz[i] != soz[uzunluq - 1 - i]) return 0; // Palindrom deyil
    }
    return 1; // Palindromdur
}

int main() {
    char s[] = "radar";
    if(palindrom_yoxla(s)) printf("'%s' palindromdur.\n", s);
    else printf("'%s' palindrom deyil.\n", s);
    return 0;
}
```