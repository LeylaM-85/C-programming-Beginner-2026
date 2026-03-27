# Mühazirə 5: İdarəetmə Operatorları (Hissə 1)

1. `if`, `if-else` və `else-if` ilə qərar qəbul etmə
2. İç-içə (`Nested`) `if` operatorları
3. `switch-case` operatorları
4. Praktik nümunələr

> **Mənbə:** Kitabdan Fəsil 3: Şərti Operatorlar (Səh. 20-23)

---

## 1. `if` və `if-else` Operatorları

### Tək `if` strukturu

Əgər şərt doğrudursa, blok daxilindəki kod icra olunur.

```c
if(şərt) {
    // kod
}

```

### `if-else-if` Pilləvari Strukturu

Çoxsaylı şərtləri yoxlamaq üçün istifadə olunur:

```c
int qiymet = 85;

if(qiymet >= 90) {
    printf("A");
} else if(qiymet >= 80) {
    printf("B");
} else if(qiymet >= 70) {
    printf("C");
} else {
    printf("F");
}

```

---

## 2. İç-içə (`Nested`) `if`

Bir şərtin daxilində digər şərtin yoxlanılmasıdır.

```c
if(yas >= 18) {
    if(vezifeli) {
        printf("Səs verə bilər");
    } else {
        printf("Vəzifə tələb olunur");
    }
} else {
    printf("18 yaşdan kiçikdir");
}

```
---

## 3. `switch-case` Operatoru

Dəyişənin qiymətinə görə çoxvariantlı seçim etmək üçün istifadə olunur.

```c
int gun = 3;

switch(gun) {
    case 1:
        printf("Bazar ertəsi");
        break;
    case 2:
        printf("Çərşənbə axşamı");
        break;
    case 3:
        printf("Çərşənbə");
        break;
    default:
        printf("Digər gün");
}

```

### `break` Olmadıqda (Fall-through):

Əgər `break` istifadə edilməsə, proqram növbəti `case`-ə keçid edəcək. Bu bəzən qruplaşdırma üçün faydalıdır:

```c
switch(eded) {
    case 1:
    case 2:
    case 3:
        printf("1-3 arası"); // 1, 2 və ya 3 olduqda işləyir
        break;
}

```
---

## 🛠 Praktik Tapşırıqlar

Dərsi mənimsəmək üçün aşağıdakı proqramları yazmağa çalışın:

1. **Hesablama maşını:** `switch-case` istifadə edərək sadə kalkulyator (+, -, *, /).
2. **Yaş kateqoriyası:** Yaşa görə (uşaq, gənc, yaşlı) təyinat.
3. **Üçbucağın növü:** Tərəflərinə görə (bərabəryanlı, bərabərtərəfli, müxtəliftərəfli) təyin etmə.
4. **Təqvim:** Daxil edilən ayın nömrəsinə görə günlərin sayını tapan proqram.

---
```mermaid
graph TD
    A[İstifadəçi qiyməti daxil edir] --> B{Qiymət >= 90?}
    B -- Bəli --> C[Nəticə: A]
    B -- Xeyr --> D{Qiymət >= 80?}
    D -- Bəli --> E[Nəticə: B]
    D -- Xeyr --> F[Nəticə: F]
    
    style C fill:#d4edda,stroke:#155724
    style E fill:#d4edda,stroke:#155724
    style F fill:#f8d7da,stroke:#721c24
    ```

---

```markdown
# C Proqramlaşdırma Dilində Ternary Operator

Ternary operator (üçlü operator), sadə `if-else` şərtlərini daha qısa və tək sətirdə yazmaq üçün istifadə olunan xüsusi bir operatordur. C dilində **üç arqumentlə** işləyən yeganə operatordur.

## 📌 Sintaksis (Yazılış Qaydası)

Operatorun ümumi strukturu aşağıdakı kimidir:

```c
şərt ? cavab1 : cavab2;
```

| Komponent | Təsviri |
| :--- | :--- |
| **Şərt** | Yoxlanılan məntiqi ifadə (məsələn, `a > b`) |
| **?** | "Əgər şərt doğrudursa..." mənasını verir |
| **Cavab 1** | Şərt **doğru (true)** olduqda icra edilən hissə |
| **:** | "Əks halda..." (else) mənasını verir |
| **Cavab 2** | Şərt **səhv (false)** olduqda icra edilən hissə |

---

## 🔍 Müqayisəli Nümunə

İki ədəddən böyüyünü tapmaq üçün hər iki üsulun fərqi:

### 1. Klassik `if-else` metodu
```c
int a = 10, b = 20, max;

if (a > b) {
    max = a;
} else {
    max = b;
}
```

### 2. Ternary Operator metodu
```c
int a = 10, b = 20;
int max = (a > b) ? a : b;
```

---

## 🚀 İstifadə Sahələri

### 1. Dəyişənə qiymət mənimsədilməsi
Cəmi bir sətirdə dəyişənə şərtli qiymət vermək üçün idealdır.

### 2. `printf` daxilində istifadə
Məsələn, bir ədədin tək və ya cüt olduğunu birbaşa çap etmək üçün:
```c
printf("%s", (n % 2 == 0) ? "Cutdur" : "Tekdir");
```

---

## ⚠️ Ehtiyatlı olmalı məqamlar

* **Mürəkkəblik:** Əgər şərt çox uzundursa və ya iç-içə (*nested*) ternary operatorlar yazmaq lazımdırsa, kodun oxunurluğunu qorumaq üçün `if-else` istifadə etmək daha yaxşıdır.
* **Geri dönüş dəyəri:** Ternary operator mütləq bir dəyər qaytarmalıdır (onu boş buraxmaq olmaz).

---
```
---

```markdown
# C Proqramlaşdırma: Nested if-else və Məntiqi Operatorlar

Bu sənəddə C dilində şərt strukturlarının iç-içə istifadəsi (**Nested if-else**) və onların məntiqi operatorlarla sadələşdirilməsi izah olunur.

## 1. Nested if-else nədir?

**Nested if-else** (iç-içə if-else), bir `if` və ya `else` blokunun daxilində başqa bir `if-else` strukturunun yazılmasıdır. Bu, birdən çox şərtin bir-birindən asılı olduğu hallarda istifadə olunur.

> **Məntiq:** "Əgər birinci şərt doğrudursa, o zaman keç ikinci şərti yoxla."

### 📌 Sintaksis (Yazılış qaydası)

```c
if (şərt1) {
    // Şərt 1 doğrudursa bura daxil olur
    if (şərt2) {
        // Həm şərt 1, həm də şərt 2 doğrudursa bura icra olunur
    } else {
        // Şərt 1 doğru, amma şərt 2 səhvdirsə bura icra olunur
    }
} else {
    // Şərt 1 səhvdirsə birbaşa bura gəlir
}
```

---

## 2. Praktiki Nümunə

Aşağıdakı nümunədə istifadəçinin həm parolunun, həm də yaşının yoxlanılması göstərilmişdir:

```c
#include <stdio.h>

int main() {
    int parol = 1234;
    int yas = 20;

    if (parol == 1234) {
        printf("Giris ugurludur!\n");

        // Daxili if (Nested if)
        if (yas >= 18) {
            printf("Siz sistemden tam istifade ede bilersiniz.\n");
        } else {
            printf("Yasiniz mehdudiyyetlidir.\n");
        }

    } else {
        printf("Parol sehvdir!\n");
    }

    return 0;
}
```

---

## 3. Məntiqi Operatorlarla (`&&`) Sadələşdirmə

İç-içə `if`-lər çoxaldıqca kodun oxunması çətinləşir (buna proqramlaşdırmada **"Arrow Anti-pattern"** deyilir). Bu problemi `&&` (VƏ) operatoru ilə həll etmək olar.

### Sadələşdirilmiş Tam Kod:

```c
if (parol == 1234 && yas >= 18) {
    // Həm parol, həm də yaş şərti eyni anda ödənir
    printf("Giris ugurludur! Siz sistemden tam istifade ede bilersiniz.\n");
} 
else if (parol == 1234 && yas < 18) {
    // Parol düzdür, lakin yaş uyğun deyil
    printf("Parol dogrudur, lakin yasiniz catmir!\n");
} 
else {
    // Parolun səhv olduğu bütün digər hallar
    printf("Giris rədd edildi! Parol sehvdir.\n");
}
```

---

## 💡 Nə zaman istifadə olunur?

1.  **Mərhələli yoxlamalarda:** Əvvəl istifadəçi adının doğruluğunu, sonra isə yetkisini (məsələn: admin və ya qonaq) yoxlayanda.
2.  **Daha dəqiq qruplaşdırmada:** Ədədin müsbət olduğunu tapdıqdan sonra, onun həm də cüt və ya tək olmasını yoxlamaq üçün.

## ⚠️ Diqqət edilməli məqam
Əgər 3-4 dərəcəli iç-içəlik yaranırsa, kodu daha anlaşıqlı etmək üçün `&&`, `||` operatorlarından və ya `switch-case` strukturundan istifadə etmək tövsiyə olunur.
```
---