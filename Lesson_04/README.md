# 📘 Mühazirə 4: C Dilində Operatorlar və İfadələrin Strateji Təhlili

Bu mühazirə operatorların daxili iş mexanizmini, onların prosessor səviyyəsində əhəmiyyətini və alqoritmik sistemlərdəki rolunu əhatə edir.

---

## 1. Proqramlaşdırmada Operatorların Rolu

Operatorlar proqramçının niyyətini prosessorun başa düşəcəyi aşağı səviyyəli əməliyyatlara (register manipulyasiyası, ALU fəaliyyəti) tərcümə edən **strateji körpü** rolunu oynayır. Düzgün seçilmiş operator strukturu kodun həm icra sürətini, həm də yaddaş effektivliyini birbaşa müəyyənləşdirir.

## 2. Əsas Operator Kateqoriyaları

C dilində operatorlar funksional vəzifəsinə görə aşağıdakı strateji kateqoriyaya ayrılır:

* **Arifmetik Operatorlar:** `+`, `-`, `*`, `/`, `%`.
> ⚠️ **Qeyd:** Tam ədəd bölməsində (`/`) kəsr hissə atılır (*truncation*).


* **Müqayisə Operatorları:** `==`, `!=`, `<`, `>`, `<=`, `>=`. Şərti keçid strukturlarının (if-else) mərkəzidir.
* **Məntiqi Operatorlar:** `&&` (VƏ), `||` (VƏ YA), `!` (İNKAR).
* *Short-circuit evaluation:* Əgər nəticə birinci operanddan məlumdursa, ikinci hesablanmır.


* **Bitüstü (Bitwise) Operatorlar:** `&`, `|`, `^`, `~`, `<<`, `>>`. Yaddaş optimallaşdırılması və flag-lərin idarə olunması üçün.

---

## 3. Mənimsətmə və Artım Operatorları

### 📊 Mürəkkəb Mənimsətmə (Compound Assignment)

Bu operatorlar həm kodun oxunaqlılığını artırır, həm də bəzi kompilyatorlarda daha optimal maşın kodu yaradır.

| Operator | Standart Yazılış | Mürəkkəb (Compound) |
| --- | --- | --- |
| Toplama | `a = a + b` | `a += b` |
| Çıxma | `a = a - b` | `a -= b` |
| Vurma | `a = a * b` | `a *= b` |
| Bölmə | `a = a / b` | `a /= b` |
| Qalıq | `a = a % b` | `a %= b` |

### ➕ İnkrement (++) və Dekrement (--)

Qiymətin dəyişmə zamanlamasına (side effect) görə iki forması var:

1. **Prefiks (`++i`):** Qiymət dərhal artırılır, sonra ifadədə iştirak edir.
2. **Postfiks (`i++`):** İfadə cari qiymətlə hesablanır, sonra qiymət artırılır.

---

## 4. Operatorların Üstünlük Növbəsi (Precedence)

İfadələrin hesablanma sırası ciddi iyerarxiyaya tabedir. Səhv başa düşülməsi məntiqi xətalara (*logic errors*) səbəb olur.

**İcra İyerarxiyası (Yuxarıdan aşağı):**

1. Mötərizələr `()`
2. Unar Operatorlar `++`, `--`, `!`, `~` (Sağdan sola)
3. Multiplikativ Operatorlar `*`, `/`, `%`
4. Additiv Operatorlar `+`, `-`
5. Mənimsətmə Operatorları `=`, `+=`, `-=` (Ən aşağı prioritet)

---

## 5. Strateji Transformasiya Nümunəsi

Riyazi düsturların C koduna çevrilməsi zamanı operator prioritetləri mütləq nəzərə alınmalıdır.

**Riyazi düstur:**


$$x = \frac{-b + \sqrt{D}}{2a}$$

**C dilində yazılışı:**

```c
x = (-b + sqrt(D)) / (2 * a);

```

### 💡 Format Spesifikatorları haqqında Qeyd

Düzgün nəticə çıxarmaq üçün format spesifikatorları dəqiq seçilməlidir:

* `int` üçün: `%d`
* `float/double` üçün: `%f` (məs: `%.2f` - nöqtədən sonra 2 rəqəm)

---

> **Nəticə:** Operatorlar üzərindəki mütləq nəzarət kodun həm riyazi doğruluğunu, həm də maşın səviyyəsində performansını təmin edir.

---
