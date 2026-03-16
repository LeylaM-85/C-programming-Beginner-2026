# 📘 Mühazirə 4: C Dilində Operatorlar və İfadələrin Strateji Təhlili

## 1. Proqramlaşdırmada Operatorların Rolu

Operatorlar proqramçının niyyətini prosessorun başa düşəcəyi aşağı səviyyəli əməliyyatlara (register manipulyasiyası, ALU fəaliyyəti) tərcümə edən **strateji körpü** rolunu oynayır. Düzgün seçilmiş operator strukturu kodun həm icra sürətini, həm də yaddaş effektivliyini birbaşa müəyyənləşdirir.

## 2. Əsas Operator Kateqoriyaları

C dilində operatorlar funksional vəzifəsinə görə aşağıdakı strateji kateqoriyaya ayrılır:

* **Arifmetik Operatorlar:** `+`, `-`, `*`, `/`, `%`.
> ⚠️ **Qeyd:** Tam ədəd bölməsində (`/`) kəsr hissə atılır (*truncation*).

* **Müqayisə Operatorları:** `==`, `!=`, `<`, `>`, `<=`, `>=`. Şərti keçid strukturlarının (if-else) mərkəzidir.
* **Məntiqi Operatorlar:** `&&` (VƏ), `||` (VƏ YA), `!` (İNKAR).
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
$$m = \frac{a + b}{2}$$

**C dilində yazılışı:**

```c
x = (a+b) / 2;

```

### 💡 Format Spesifikatorları haqqında Qeyd

Düzgün nəticə çıxarmaq üçün format spesifikatorları dəqiq seçilməlidir:

* `int` üçün: `%d`
* `float/double` üçün: `%f` (məs: `%.2f` - nöqtədən sonra 2 rəqəm)
