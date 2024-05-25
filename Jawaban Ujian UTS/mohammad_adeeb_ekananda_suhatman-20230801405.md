# SOAL 1
1. Jelaskan secara singkat apa itu paradigma dalam bahasa pemograman?
# JAWABAN
## Paradigma pemrograman merupakan gaya, klasifikasi, dan pendekatan dalam penulisan program untuk memecahkan masalah dengan menggunakan bahasa pemrograman yang digunakan.

# Soal 2
2. Jelaskan apa yang dimaksud dengan model data, operator, seleksi dan fungsi?
# JAWABAN
## Model data mengacu pada cara data disimpan, diatur, dan dimanipulasi dalam program. Dalam pemrograman, beberapa model data dasar meliputi:
Tipe Data Primitif: Tipe data dasar yang disediakan oleh bahasa pemrograman, seperti integer, float, char, dan boolean.
Variabel: Simbol yang digunakan untuk menyimpan dan mereferensikan data dalam memori.
Struktur Data: Tipe data yang lebih kompleks yang mengatur kumpulan data, seperti array, list, stack, queue, dan tree.

## Operator adalah simbol yang memberitahu kompiler atau interpreter untuk melakukan operasi tertentu. Operator biasanya digunakan dalam ekspresi untuk memanipulasi data dan variabel. Ada beberapa jenis operator, antara lain:
Operator Aritmetika: Digunakan untuk operasi matematis seperti penjumlahan (+), pengurangan (-), perkalian (*), pembagian (/), dan modulo (%).
Operator Relasional: Digunakan untuk membandingkan dua nilai, seperti lebih besar (>), lebih kecil (<), sama dengan (==), dan tidak sama dengan (!=).
Operator Logika: Digunakan untuk operasi logika, seperti AND (&&), OR (||), dan NOT (!).
Operator Penugasan: Digunakan untuk memberikan nilai ke variabel, seperti penugasan sederhana (=), penugasan penjumlahan (+=), penugasan pengurangan (-=), dll.

## Seleksi adalah struktur kontrol yang digunakan untuk membuat keputusan dalam program. contohnya:
If Statement: Struktur yang mengeksekusi blok kode jika kondisi tertentu terpenuhi
If-Else Statement: Struktur yang menyediakan jalur alternatif jika kondisi tidak terpenuhi.
Switch Statement: Struktur yang memungkinkan pemilihan di antara banyak blok kode berdasarkan nilai variabel.

## Fungsi adalah blok kode yang dirancang untuk melakukan tugas tertentu dan dapat dipanggil di mana saja dalam program.

# Soal 3
3. Jelaskan konsep perulangan pernyataan(Looping Statmen) di bawah ini:
int n, _, i, _;
cout << "Masukkan jumlah baris : ";
cin >> n;
for (i = l; i <= _; i++){
    for (s = i; _ <= i; _++)
    cout << " ";
    for (j = l; _ <= i; _++)
    cout << " ";
    cout << "\n";
}
Pecahkan perulangan di atas, berikan penjelasan terhadap program tersebut dan keluaran dari program tersebut!
# JAWABAN
## Penjelasan Program
Deklarasi Variabel: n: Menyimpan jumlah baris yang dimasukkan oleh pengguna.
a, i, b: Variabel untuk kontrol perulangan.
Input Pengguna: Meminta pengguna untuk memasukkan jumlah baris dan menyimpannya dalam variabel n.
Perulangan Luar (for (i = 1; i <= n; i++)):
i dimulai dari 1 dan bertambah hingga mencapai n.
Setiap iterasi dari loop ini mencetak satu baris dari pola. 
Perulangan Dalam 1 (for (a = 1; a <= i; a++)):
Perulangan ini mencetak spasi (" ") sebanyak nilai i.
Fungsi ini adalah untuk mengatur jarak atau indentasi dari karakter yang akan dicetak di setiap baris.
Perulangan Dalam 2 (for (b = 1; b <= i; b++)):
Perulangan ini mencetak karakter * sebanyak nilai i.
Ini menciptakan pola bintang yang meningkat seiring dengan bertambahnya baris.
Baris Baru: cout << "\n"; Mencetak baris baru setelah selesai dengan satu iterasi penuh dari loop luar.
Keluaran dari Program
Jika pengguna memasukkan n = 5, maka keluaran program akan menghasilkan pola seperti berikut: JAWABAN ANDA(soal3.cpp)

# Soal 4
4. Buatlah program sederhana dengan hasil akhir seperti berikut:
g++ soal4.ccp -o soal4 && ./soal4
Berati Usia Kalian sekarang adalah 21 Tahun
# JAWABAN
## JAWABAN ANDA (soal4.cpp)

# Soal 5
g++ soal5.ccp -o soal5 && ./soal5
Masukan Angka Pertama : 10
Masukan Angka Kedua   : 2
Penjumlahan : 12
Pengurangan : 8 
Perkalian   : 20
Pembagian   : 5
# JAWABAN
## JAWABAN ANDA (soal5.cpp)

# Soal 6
Lengkapi penggalan source code berikut sehingga bisa berfungsi dengan baik:
int main(){
    menu()
    tambah()
    kurang()
    kali()
    bagi()
    return 0;
}
# JAWABAN
## JAWABAN ANDA (soal6.cpp)

# Soal 7
Buatlah Diagram Alur/Flow yang sesuai dengan source yang anda lengkapi (soal nomor 6)
# JAWABAN
## JAWABAN ANDA (soal7.puml)