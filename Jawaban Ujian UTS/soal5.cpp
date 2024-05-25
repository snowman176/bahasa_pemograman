#include <iostream>
using namespace std;

// Fungsi Perkalian
double perkalian(double a, double b) {
    return a * b;
}

// Fungsi Pembagian
double pembagian(double a, double b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol" << endl;
        return 0;
    } else {
        return a / b;
    }
}

// Fungsi Penjumlahan
double penjumlahan(double a, double b) {
    return a + b;
}

// Fungsi Pengurangan
double pengurangan(double a, double b) {
    return a - b;
}

int main() {
    double angka1, angka2;

    // Meminta input dari pengguna sekali saja
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Menampilkan hasil semua operasi aritmetika dasar
    cout << "Hasil perkalian: " << perkalian(angka1, angka2) << endl;
    cout << "Hasil pembagian: " << pembagian(angka1, angka2) << endl;
    cout << "Hasil penjumlahan: " << penjumlahan(angka1, angka2) << endl;
    cout << "Hasil pengurangan: " << pengurangan(angka1, angka2) << endl;

    return 0;
}
