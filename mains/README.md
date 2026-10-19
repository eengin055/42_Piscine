# 42 Piscine - Ayri Main Testleri

Her alistirma icin main dosyasi cozumden ayri tutulur:

- `mains/C02/ex09/main.c` -> `C02/ex09/ft_strcapitalize.c` icin test
- `mains/C09/ex02/main.c` -> `C09/ex02/ft_split.c` icin test

**Onemli:** Bunlar ogrenme/test amaclidir, egzersiz teslim dizinine
kopyalanmamalidir. Bazi 42 subject'lerinde yalnizca tek bir .c veya .h
dosyasi istenir. Main testleri printf, malloc/free ve gerekli sistem
fonksiyonlarini kullanabilir; bunlar cozumlere eklenmemistir.

C06 egzersizleri  fonksiyonlarini zaten icerir.
Bu klasorlerde ikinci bir main yerine bilgilendirme vardir.
Rush00 icin kendi main'i bulunduğu halde ayri test main'i de yazildi.

## Ornek manuel derleme

Depo kokunden:

```sh
cc -Wall -Wextra -Werror C02/ex09/ft_strcapitalize.c \
  mains/C02/ex09/main.c -o /tmp/test_piscine
/tmp/test_piscine
```

Bütün testler icin depo kokunden:

```sh
bash mains/run_all.sh
```

`run_all.sh` gcc/cc ile her egzersizi ayrica derler ve calistirir.
C08/ex00, C08/ex05 ve C09 gibi birden fazla kaynak gerektiren
orneklerin bagimliliklarini da yonetir. Derlenen testler gecici dizine
kaydedilir ve otomatik temizlenir.
