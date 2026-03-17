# Mühazirə 5: İdarəetmə Operatorları (Hissə 1)

Bu mühazirə C proqramlaşdırma dilində qərar qəbul etmə mexanizmlərini, şərt operatorlarını və seçim strukturunu əhatə edir.

## 📋 Plan

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