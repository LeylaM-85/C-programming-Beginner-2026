

# 🎓 C Proqramlaşdırma Dili: Mühazirə Materialları Toplusu (Dərs 1 - 5)

**Universitet:** Qərbi Kaspi Universiteti  
**Müəllim:** Leyla Məmmədova  
**Fənn:** C proqramlaşdırma dili  

---

## 📌 Faydalı Linklər
* **[Dərs 01 Materialları (Google Drive)](https://drive.google.com/drive/folders/12Czcl1kkkOeRA_mVeZKuDUptpCtI6Qhd?usp=sharing)** | **[Ev tapşırığı 01 (GitHub Classroom)](https://classroom.github.com/a/ZnIe6yDz)**
* **[Dərs 02 Materialları (Google Drive)](https://drive.google.com/drive/folders/1NP0r29H28BjysdsI-hsgI6MEFBHEAJRr?usp=drive_link)** | **[Ev tapşırığı 02 (GitHub Classroom)](https://classroom.github.com/a/NE5sHsSV)**
* **[Dərs 03 Materialları (Google Drive)](https://drive.google.com/drive/folders/1nZx7STejhg54QHV1Y4yOzIh5s1y1Ndih?usp=drive_link)** | **[Ev tapşırığı 03 (GitHub Classroom)](https://classroom.github.com/a/70GIm9fa)**

---

# 📖 Mühazirə 1: C Dilinin İcmalı və Tarixi

## 1.1 Tarixi Kontekst və Əhəmiyyəti
* **1972-ci il:** Dennis Ritchie tərəfindən Bell Laboratories-də yaradılmışdır.
* **Məqsəd:** UNIX əməliyyat sistemini yazmaq üçün inkişaf etdirilmişdir.
* **Sələf:** B dili (Ken Thompson tərəfindən yaradılmışdır).
* **Təsir:** Bir çox müasir dillərin əsasıdır (C++, Java, C#, Python).

**Niyə C?**
* **Effektiv:** Maşın koduna yaxın, yüksək performans.
* **Portativ:** Müxtəlif platformalarda işləyir.
* **Güclü:** Sistem səviyyəli proqramlaşdırmaya imkan verir.
* **Sadə:** Az sayda açar sözlər (32 ədəd).

## 1.2 Əsas Xüsusiyyətlər və Tətbiq Sahələri
* **Sistem Proqramlaşdırma:** Linux, Windows kernel, Kompilyatorlar.
* **Embedded Sistemlər:** Mikrokontrollerlər (Arduino, ARM), IoT cihazları, Avtomobil sistemləri.
* **Oyun Proqramlaşdırma:** Oyun mühərrikləri, Fizika simulyasiyaları.
* **Digər:** Verilənlər bazası (MySQL, PostgreSQL), Şəbəkə proqramları.

## 1.3 İlk C Proqramı: Salam Dünya!
```c
#include <stdio.h>

int main() {
    printf("Salam Dünya!\n");
    return 0;
}
```
* **`#include <stdio.h>`**: Preprocessor direktivi, `printf()` üçün lazımdır.
* **`int main()`**: Proqramın başlanğıc nöqtəsi.
* **`\n`**: Yeni sətir simvolu.
* **`return 0;`**: Uğurlu icra kodu.

## 1.4 Kompilyasiya Prosesi və Debug
C proqramının icra oluna bilən fayla çevrilməsi 4 mərhələdən ibarətdir:
1. **Önişləmə (Preprocessing):** Header faylları daxil edilir, şərhlər silinir.
2. **Kompilyasiya (Compilation):** C kodu assembly dilinə çevrilir.
3. **Assemblə etmə (Assembly):** Assembly kodu maşın koduna çevrilir.
4. **Linkerləmə (Linking):** Object faylları birləşdirilir və icra oluna bilən fayl (.exe) yaradılır.

**Debug Alətləri:**
* **GDB (GNU Debugger):** Proqramı addım-addım izləmək və xətaları tapmaq üçün istifadə olunur.
* **Valgrind:** Yaddaş sızmalarını aşkar etmək üçün.

---

# 📘 Mühazirə 2: Məlumat Tipləri, Dəyişənlər və Sabitlər

## 2.1 Məlumat Tipləri və Yaddaş Strukturu
C dilində məlumat tipləri yaddaşda müəyyən həcm tutur: **char -> short -> int -> long -> float -> double**

| Tip | Ölçü (bayt) | Format | Diapazon |
| --- | --- | --- | --- |
| `char` | 1 | `%c` | -128 to 127 |
| `unsigned char` | 1 | `%c` | 0 to 255 |
| `int` | 4 | `%d` | ~ ±2.1 Milyard |
| `float` | 4 | `%f` | ~7 rəqəm dəqiqlik |
| `double` | 8 | `%lf` | ~15 rəqəm dəqiqlik |
| `size_t` | - | `%zu` | `sizeof()` operatorunun nəticəsi |

## 2.2 İşarəli (Signed) və İşarəsiz (Unsigned) Tiplər
* **Signed (Default):** İlk bit işarə bitidir (0: müsbət, 1: mənfi).
* **Unsigned:** Bütün bitlər dəyər üçün istifadə olunur. Mənfi ədəd almır, lakin müsbət diapazon 2 dəfə artır.

## 2.3 Sabitlər, Enum və Tip Dönüşümü
* **`const`**: Proqram boyu dəyişdirilə bilməyən sabit dəyərlər (`const float PI = 3.14;`).
* **`enum`**: Kodun oxunaqlılığını artırır (`enum Fesil { YAZ, YAY, PAYIZ, QIS };`).

**Tip Dönüşümü (Type Conversion):**
* **Gizli (Implicit):** Avtomatik (kiçik tipdən böyük tipə).
* **Açıq (Explicit Casting):** İstifadəçi tərəfindən məcburi: `(float)a / b`.

## 2.4 Yaddaş Effektivliyi
Həmişə lazım olan minimal tipi seçin. Məsələn, yaş üçün `unsigned char` (1 bayt) istifadə etmək `int` (4 bayt) istifadə etməkdən **75% yaddaş qənaəti** deməkdir.

### 🛠 Praktik Tapşırıqlar (Dərs 2)
1. **Dairə hesablama:** `const PI` istifadə edərək dairənin sahəsini ($S = \pi r^2$) hesablayın.
2. **Tip dönüşümü:** 22-ni 7-yə bölərək həm tam hissəni, həm də kəsr nəticəni ekrana çıxarın.

```c
// Tapşırıq 2 Həlli (Tam və Kəsr Bölməsi)
#include <stdio.h>

int main() {
    int a = 22, b = 7;
    int tam_netice = a / b;
    float kesr_netice = (float)a / b; // Casting
    
    printf("Tam bolme neticesi: %d\n", tam_netice);
    printf("Float (kesr) bolme neticesi: %.2f\n", kesr_netice);
    return 0;
}
```

---

# 📘 Mühazirə 3: Giriş və Çıxış (I/O) Əməliyyatları

## 3.1 Standart G/Ç Funksiyaları
* **`printf()` - Formatlı Çıxış:** Məlumatı müəyyən bir formatda ekrana çıxarmaq üçün istifadə olunur. Genişlik və dəqiqlik ayarları mümkündür (məsələn, `%05d`, `%.2f`).
* **`scanf()` - Formatlı Giriş:** İstifadəçidən məlumat alır. Dəyişənin ünvanını göstərmək üçün `&` operatoru mütləqdir. *Tipik problem:* Simvol oxuyarkən `\n` problemini həll etmək üçün formatdan əvvəl boşluq qoyulur (`scanf(" %c", &herf);`).
* **`fgets()` - Təhlükəsiz Sətir Oxuma:** Boşluqları da oxuyur və yaddaş daşmasının qarşısını alır.

```c
char ad[50];
fgets(ad, sizeof(ad), stdin);
ad[strcspn(ad, "\n")] = '\0'; // Sondakı Enter simvolunu təmizləyir
```

## 3.2 `<string.h>` Kitabxanasının Əhəmiyyəti
C-də mətnlər massiv olduğu üçün onlarla riyazi əməliyyat aparmaq olmur. Bizə lazımdır:
* `strcspn()`: Müəyyən simvolun indeksini tapır.
* `strlen()`: Mətnin uzunluğunu hesablayır.
* `strcpy()`: Mətni kopyalayır.
* `strcmp()`: İki mətni müqayisə edir.

## 3.3 Digər Funksiyalar
* **`puts()` / `putchar()`**: Sətir və tək simvol çapı.
* **`getchar()`**: Tək simvol girişi.

### 🛠 Praktik Tapşırıqlar (Dərs 3)
* `fgets()` istifadə edərək ad və soyadı boşluqlarla birgə təhlükəsiz şəkildə qəbul edən proqram yazın. Əgər eyni kodda `scanf` də istifadə edilirsə, bufferi təmizləmək üçün `getchar()` funksiyasından istifadə etməyi unutmayın.

---

# 📘 Mühazirə 4: C Dilində Operatorlar və İfadələrin Təhlili

## 4.1 Əsas Operator Kateqoriyaları
* **Arifmetik:** `+`, `-`, `*`, `/`, `%`. (*Qeyd: Tam ədəd bölməsində kəsr hissə atılır*).
* **Müqayisə:** `==`, `!=`, `<`, `>`, `<=`, `>=`.
* **Məntiqi:** `&&` (VƏ), `||` (VƏ YA), `!` (İNKAR).

## 4.2 Mənimsətmə və Artım Operatorları
* **Mürəkkəb Mənimsətmə:** `+=`, `-=`, `*=`, `/=`, `%=`.
* **İnkrement/Dekrement:** Prefiks (`++i`) dərhal artırır, Postfiks (`i++`) əməliyyatdan sonra artırır.

## 4.3 Operatorların Üstünlük Növbəsi (Precedence)
İcra iyerarxiyası yuxarıdan aşağıya:
1. Mötərizələr `()`
2. Unar Operatorlar `++`, `--`, `!`
3. Multiplikativ `*`, `/`, `%`
4. Additiv `+`, `-`
5. Mənimsətmə `=` , `+=`

---

# 📘 Mühazirə 5: İdarəetmə Operatorları (Şərt Strukturları)

## 5.1 `if`, `if-else` və `else-if`
Çoxsaylı şərtləri pilləvari yoxlamaq üçün istifadə olunur.

```c
if(qiymet >= 90) {
    printf("A");
} else if(qiymet >= 80) {
    printf("B");
} else {
    printf("F");
}
```

## 5.2 İç-içə (Nested) `if-else` və Məntiqi Operatorlarla Sadələşdirmə
Bir şərtin daxilində digər şərtin yoxlanılmasıdır. Çox iç-içəlik kodun oxunmasını çətinləşdirir. Bunu `&&` operatoru ilə həll etmək olar.

```c
// Məntiqi operatorlarla sadələşdirilmiş versiya:
if (parol == 1234 && yas >= 18) {
    printf("Giris ugurludur! Sistemden tam istifade ede bilersiniz.\n");
} else if (parol == 1234 && yas < 18) {
    printf("Parol dogrudur, lakin yasiniz catmir!\n");
} else {
    printf("Giris redd edildi!\n");
}
```

## 5.3 Ternary Operator (Üçlü Operator)
Sadə `if-else` şərtlərini daha qısa və tək sətirdə yazmaq üçündür. Sintaksis: `şərt ? cavab1 : cavab2;`

```c
int max = (a > b) ? a : b;
printf("%s", (n % 2 == 0) ? "Cutdur" : "Tekdir");
```

## 5.4 `switch-case` Operatoru
Dəyişənin qiymətinə görə çoxvariantlı seçim edir. `break` yazılmasa "Fall-through" baş verir və növbəti case-lər də icra olunur.

```c
switch(gun) {
    case 1:
        printf("Bazar ertəsi");
        break;
    case 2:
        printf("Çərşənbə axşamı");
        break;
    default:
        printf("Digər gün");
}
```

### 🛠 Praktik Tapşırıqlar (Dərs 5)
1. **Hesablama maşını:** `switch-case` istifadə edərək sadə kalkulyator (+, -, *, /) yaradın.
2. **Yaş kateqoriyası:** Yaşa görə (uşaq, gənc, yaşlı) təyinat proqramı yazın.
3. **Üçbucağın növü:** Tərəflərinə görə (bərabəryanlı, bərabərtərəfli, müxtəliftərəfli) təyin etmə.
4. **Təqvim:** Daxil edilən ayın nömrəsinə görə günlərin sayını tapan proqram.

***
