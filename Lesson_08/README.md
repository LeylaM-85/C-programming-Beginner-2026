# 📘 Massivlər (Birölçülü) – C Proqramlaşdırma

## 🔷 1. Massiv Elanı (Array Declaration)

### 📌 Massiv nədir?

Massiv — **eyni tipli dəyişənlərin ardıcıl yaddaşda saxlanılmasıdır**.

---
```c
#include <stdio.h>

int main() {
    int ededler[5];

    ededler[0] = 10;
    ededler[1] = 20;
    ededler[2] = 30;
    ededler[3] = 40;
    ededler[4] = 50;

    for(int i = 0; i < 5; i++) {
        printf("%d ", ededler[i]);
    }

    return 0;
}
```

---

### 🔹 İnisializasiya

```c
int a[5] = {1, 2, 3, 4, 5};
```

```c
#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

---

```c
int b[] = {1, 2, 3};
```

```c
#include <stdio.h>

int main() {
    int b[] = {1, 2, 3};
    int n = sizeof(b) / sizeof(b[0]);

    for(int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
```

---

```c
int c[5] = {1, 2};
```

```c
#include <stdio.h>

int main() {
    int c[5] = {1, 2};

    for(int i = 0; i < 5; i++) {
        printf("%d ", c[i]); // 1 2 0 0 0
    }

    return 0;
}
```

---

## 🔷 2. Elementlərə Müraciət

```c
int a[5] = {10, 20, 30, 40, 50};
```


```c
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    a[0] = 100;

    printf("a[2] = %d\n", a[2]);
    printf("a[4] = %d\n", a[4]);

    return 0;
}
```

---

## 🔷 3. Massivi Keçmək (Traversal)

```c
#include <stdio.h>

int main() {
    int a[] = {5, 10, 15, 20, 25};

    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

---

## 🔷 4. Axtarış (Linear Search)

```c
#include <stdio.h>

int linear_search(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);

    int index = linear_search(a, n, 30);

    if(index != -1)
        printf("Tapildi! Index: %d\n", index);
    else
        printf("Tapilmadi\n");

    return 0;
}
```

---

## 🔷 5. Sıralama (Sorting)

### 🔸 Bubble Sort

```c
#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {5, 2, 9, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

---

### 🔸 Selection Sort

```c
#include <stdio.h>

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = sizeof(a) / sizeof(a[0]);

    selection_sort(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

---

## 🔥 Bonus: Maksimum elementi tapmaq

```c
#include <stdio.h>

int main() {
    int a[] = {3, 7, 2, 9, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int max = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("Max: %d", max);

    return 0;
}
```

/* --- 8: MASSİVLƏR TAPŞIRIQLAR VƏ KODLARI--- */

// Tapşırıq 1: Ən böyük element
```c
#include <stdio.h>
int main() {
    int arr[] = {3, 7, 2, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Ən böyük: %d\n", max);
    return 0;
}
```

// Tapşırıq 2: Ortalama
```c
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cemm = 0;
    
    for(int i = 0; i < n; i++) {
        cemm += arr[i];
    }
    printf("Ortalama: %.2f\n", (float)cemm / n);
    return 0;
}
```

// Tapşırıq 3: Tərs çevirmə
```c
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // 5 4 3 2 1
    }
    return 0;
}
```

// Tapşırıq 4: İki massivin birləşdirilməsi
```c
#include <stdio.h>
int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int na = 3, nb = 3;
    int c[6];
    
    for(int i = 0; i < na; i++) c[i] = a[i];
    for(int i = 0; i < nb; i++) c[na + i] = b[i];
    
    for(int i = 0; i < 6; i++) printf("%d ", c[i]);
    return 0;
}
```

// Tapşırıq 5: Təkrarları silmək
```c
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7, yeni_n = 0;
    int yeni[7];
    
    for(int i = 0; i < n; i++) {
        int tekrar = 0;
        for(int j = 0; j < yeni_n; j++) {
            if(arr[i] == yeni[j]) {
                tekrar = 1;
                break;
            }
        }
        if(!tekrar) {
            yeni[yeni_n++] = arr[i];
        }
    }
    
    for(int i = 0; i < yeni_n; i++) {
        printf("%d ", yeni[i]);  // 1 2 3 4 5
    }
    return 0;
}
```
 
---