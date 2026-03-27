# C Proqramlaşdırma 💻

Bu repozitoriya **Western Caspian University** tələbələri üçün C proqramlaşdırma dilinin əsaslarını öyrənmək məqsədilə yaradılmışdır. Burada siz real kompilyasiya prosesini və terminal əmrlərini öyrənəcəksiniz.

---

**Müəllim:** Leyla Məmmədova 

**Kafedra:** İnformasiya Texnologiyaları

---

### ƏSAS TƏDRİS MATERIALI
 [C proqramlaşdırma üzrə tədris olunan kitab](https://drive.google.com/file/d/1CMFoo4uMT4gIDwnkr4HZhUvuTWceTDX1/view?usp=sharing)

---

## ⚠️ Tez-tez Rastlaşan Xətalar və Həlləri

Proqramlaşdırmaya yeni başlayanda xətalarla qarşılaşmaq tamamilə normaldır. Əsas olan terminaldakı xəta mesajını düzgün oxumaqdır.

### 1. Unudulmuş Nöqtəli Vergül (`;`)

**Xəta mesajı:** `error: expected ';' before '...'`

* **Səbəb:** C dilində hər bir əmrin sonu mütləq `;` ilə bitməlidir.
* **Həll:** Xəta göstərilən sətirdən bir əvvəlki sətrin sonuna nöqtəli vergül əlavə edin.

### 2. Kitabxananın Unudulması (`#include`)

**Xəta mesajı:** `warning: implicit declaration of function 'printf'`

* **Səbəb:** `printf` və ya `scanf` istifadə etmisiniz, lakin yuxarıda `#include <stdio.h>` yazmamısınız.
* **Həll:** Faylın ən üstünə standart giriş-çıxış kitabxanasını əlavə edin.

### 3. Kompilyasiya Zamanı "No such file" Xətası

**Xəta mesajı:** `fatal error: ders1.c: No such file or directory`

* **Səbəb:** Terminalda yazdığınız fayl adı ilə qovluqdakı fayl adı üst-üstə düşmür və ya səhv qovluqdasınız.
* **Həll:** `ls` əmri ilə fayllarınızın adını yoxlayın və adı hərfi-hərfinə düzgün yazın.

### 4. Bağlanmamış Mörtərizələr `{ }`

**Xəta mesajı:** `error: expected '}' at end of input`

* **Səbəb:** `main` funksiyasının və ya bir şərt blokunun açılan `{` mörtərizəsini bağlamağı unutmusunuz.
* **Həll:** Hər açılan mörtərizənin mütləq bir qarşılığı olduğunu yoxlayın.

---

## 💡 Qızıl Qayda: "Compile Early, Compile Often"

Kodu 50 sətir birdən yazıb sonra kompilyasiya etməyin. Hər 2-3 sətirdən bir yoxlayın ki, xətanın harada olduğunu dərhal biləsiniz.

---

## 📌 Proqramçının "Yaddaş Kitabçası"

### 1. `scanf`ilə Məlumat Girişi (Diqqətli olun!)

İstifadəçidən məlumat alarkən C dili bizdən dəyişənin yaddaşdakı **ünvanını** istəyir. Buna görə də dəyişən adının önünə mütləq **`&` ampersand** işarəsi qoyulmalıdır.

* **Düzgün:** `scanf("%d", &yas);` — "Yaşı oxu və `yas` dəyişəninin ünvanına yaz."
* **Səhv:** `scanf("%d", yas);` — Bu proqramın işini dərhal dayandırmasına (Segmentaton fault) səbəb olacaq.

### 2. Dəyişən Adlandırma Qaydaları (Clean Code)

Dəyişənlərə ad verərkən bu qızıl qaydalara əməl etmək proqramın oxunaqlılığını artırır:

* ✅ **İcazə verilir:** Kiçik və böyük hərflər (`a-z`, `A-Z`), rəqəmlər (`0-9`) və alt xətt (`_`).
* ❌ **Rəqəmlə başlamaq olmaz:** `int 1_eded;` (Səhv) ➡️ `int eded_1;` (Düzgün).
* ❌ **Boşluq istifadə etmək olmaz:** `int ev qiymeti;` (Səhv) ➡️ `int ev_qiymeti;` və ya `int evQiymeti;` (Düzgün).
* ❌ **Açar sözlərdən istifadə etməyin:** `int return;` və ya `int if;` adlarından istifadə etmək olmaz.

### 3. Format Seçiciləri (Placeholder) Cheat Sheet

Məlumatları daxil edərkən və ya çap edərkən düzgün simvoldan istifadə etdiyinizə əmin olun:

| Tip | Seçici | Təsviri |
| --- | --- | --- |
| `int` | `%d` və ya `%i` | Tam ədədlər üçün |
| `float` | `%f` | Onluq ədədlər üçün |
| `double` | `%lf` | Daha böyük onluq ədədlər üçün |
| `char` | `%c` | Tək bir simvol üçün |
| `char[]` | `%s` | Sözlər (string) üçün |

---