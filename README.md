# Get Next Line

## Languages / Diller
- [🇺🇸 English](#english)
- [🇹🇷 Türkçe](#türkçe)

---

## English

### 📖 Description

**get_next_line** is a 42 School project that implements a function to read a file line by line. This function is particularly useful for reading large files efficiently without loading the entire file into memory.

### 🎯 Project Goals

- Read a file descriptor line by line
- Return one line at a time including the newline character
- Handle multiple file descriptors simultaneously (bonus)
- Efficient memory management
- Work with any buffer size

### 🛠️ Implementation

The project consists of:

- **get_next_line.c**: Main function implementation
- **get_next_line.h**: Header file with function prototypes
- **get_next_line_utils.c**: Utility functions (strlen, strjoin, calloc, strchr, substr)
- **get_next_line_bonus.c**: Bonus version supporting multiple file descriptors
- **get_next_line_bonus.h**: Header file for bonus version
- **get_next_line_utils_bonus.c**: Utility functions for bonus version

### 🔧 Compilation

```bash
# Basic version
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

# Bonus version
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c
```

### 📝 Usage

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char *line;
    
    fd = open("test.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

### ⚙️ Function Prototype

```c
char *get_next_line(int fd);
```

**Parameters:**
- `fd`: File descriptor to read from

**Return Value:**
- Line read from the file descriptor
- `NULL` if there's nothing more to read or an error occurred

### 🌟 Features

- **Static Variables**: Uses static variables to maintain state between function calls
- **Dynamic Buffer**: Configurable buffer size via `BUFFER_SIZE` macro
- **Memory Safety**: Proper memory allocation and deallocation
- **Error Handling**: Handles invalid file descriptors and read errors
- **Bonus**: Multiple file descriptors support using an array of static variables

### 📊 Algorithm

1. Read from file descriptor using the specified buffer size
2. Store read data in a static variable (cage)
3. Extract one line from the stored data
4. Update the static variable to remove the extracted line
5. Return the line with newline character included

### 👨‍💻 Author

**42 Username:** iduman  
**GitHub:** [CilginSinek](https://github.com/CilginSinek)

### 📜 License

This project is part of the 42 School curriculum.

---

## Türkçe

### 📖 Açıklama

**get_next_line** bir dosyayı satır satır okumak için fonksiyon geliştiren 42 Okulu projesidir. Bu fonksiyon, büyük dosyaları tamamını belleğe yüklemeden verimli bir şekilde okumak için özellikle kullanışlıdır.

### 🎯 Proje Hedefleri

- Dosya tanımlayıcısını satır satır okumak
- Her seferinde newline karakteri dahil olmak üzere bir satır döndürmek
- Birden fazla dosya tanımlayıcısını aynı anda işlemek (bonus)
- Verimli bellek yönetimi
- Herhangi bir buffer boyutuyla çalışmak

### 🛠️ Uygulama

Proje şunlardan oluşur:

- **get_next_line.c**: Ana fonksiyon implementasyonu
- **get_next_line.h**: Fonksiyon prototiplerini içeren header dosyası
- **get_next_line_utils.c**: Yardımcı fonksiyonlar (strlen, strjoin, calloc, strchr, substr)
- **get_next_line_bonus.c**: Birden fazla dosya tanımlayıcısını destekleyen bonus versiyon
- **get_next_line_bonus.h**: Bonus versiyon için header dosyası
- **get_next_line_utils_bonus.c**: Bonus versiyon için yardımcı fonksiyonlar

### 🔧 Derleme

```bash
# Temel versiyon
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

# Bonus versiyon
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c
```

### 📝 Kullanım

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char *line;
    
    fd = open("test.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

### ⚙️ Fonksiyon Prototipi

```c
char *get_next_line(int fd);
```

**Parametreler:**
- `fd`: Okunacak dosya tanımlayıcısı

**Dönüş Değeri:**
- Dosya tanımlayıcısından okunan satır
- Okunacak başka bir şey yoksa veya hata oluşursa `NULL`

### 🌟 Özellikler

- **Static Değişkenler**: Fonksiyon çağrıları arasında durumu korumak için static değişkenler kullanır
- **Dinamik Buffer**: `BUFFER_SIZE` makrosu ile yapılandırılabilir buffer boyutu
- **Bellek Güvenliği**: Doğru bellek ayırma ve serbest bırakma
- **Hata İşleme**: Geçersiz dosya tanımlayıcıları ve okuma hatalarını işler
- **Bonus**: Static değişken dizisi kullanarak birden fazla dosya tanımlayıcısı desteği

### 📊 Algoritma

1. Belirtilen buffer boyutunu kullanarak dosya tanımlayıcısından okuma
2. Okunan veriyi static değişkende (cage) saklama
3. Saklanan veriden bir satır çıkarma
4. Çıkarılan satırı kaldırmak için static değişkeni güncelleme
5. Newline karakteri dahil satırı döndürme

### 👨‍💻 Yazar

**42 Kullanıcı Adı:** iduman  
**GitHub:** [CilginSinek](https://github.com/CilginSinek)

### 📜 Lisans

Bu proje 42 Okulu müfredatının bir parçasıdır.