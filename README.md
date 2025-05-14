# sistem-penilaian-sederhana-cpp
Program C++ untuk input nilai mahasiswa dengan grading otomatis menggunakan struct

---

Program C++ ini dirancang untuk menginput data mahasiswa (NIM, nama, dan nilai), lalu menampilkan laporan dalam bentuk tabel beserta perhitungan nilai akhir (grades) secara otomatis menggunakan struktur data dan fungsi.

## 📌 Fitur
- Input data NIM, nama, dan nilai mahasiswa
- Menggunakan `struct` untuk menyimpan data
- Fungsi `grades()` untuk menentukan huruf mutu (A-E)
- Menampilkan tabel data mahasiswa beserta grade
- Menggunakan waktu lokal untuk memberi timestamp laporan

---

## 📂 Struktur Data
```cpp
struct mhs {
    string nim;
    string nama;
    int nilai;
};
```

---

##🧠 Fungsi Grade

```cpp
char grades(int n) {
    if (n > 85) return 'A';
    else if (n > 75) return 'B';
    else if (n > 65) return 'C';
    else if (n > 45) return 'D';
    else return 'E';
}
```

---

## 💡 Contoh Output

```yml
REPORT NILAI MAHASISWA PERTANGGAL 14-5-2025

Masukkan jumlah Mahasiswa yang ingin diinput : 2

Silahkan input 2 nilai Mahasiswa tersebut
Nilai Mahasiswa ke-1
Nim    : 220111
Nama   : Hanif
Nilai  : 88

Nilai Mahasiswa ke-2
Nim    : 220112
Nama   : Rizky
Nilai  : 74

==================================================
|    NIM    |      NAMA      |   NILAI  | GRADES |
==================================================
|    220111    |     Hanif      |    88    |    A   |
|    220112    |     Rizky      |    74    |    C   |
--------------------------------------------------
```

---

**luqmanaru**

Program ini ditulis sebagai latihan penggunaan struct, fungsi, dan array untuk laporan nilai mahasiswa dalam bahasa C++.
