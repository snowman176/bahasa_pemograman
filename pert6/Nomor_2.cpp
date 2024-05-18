#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    // Menu makanan
    map<string, int> makanan = {{"Bakso", 13000}, {"Mie Ayam", 15000}, {"Soto Ayam", 20000}};
    // Menu minuman
    map<string, int> minuman = {{"Teh Botol", 11000}, {"Es Teh Hangat", 13000}, {"Air Putih", 7000}};
    // Menu dessert
    map<string, int> dessert = {{"Es Krim", 10000}, {"Es Cendol", 11000}, {"Es Campur", 12000}};
    
    int total = 0;
    
    // Tampilkan menu
    cout << "Menu Jualan" << endl;
    cout << "1. Makanan" << endl;
    for (auto const &entry : makanan) {
        cout << "   " << entry.first << " - Rp" << entry.second << endl;
    }
    cout << "2. Minuman" << endl;
    for (auto const &entry : minuman) {
        cout << "   " << entry.first << " - Rp" << entry.second << endl;
    }
    cout << "3. Dessert" << endl;
    for (auto const &entry : dessert) {
        cout << "   " << entry.first << " - Rp" << entry.second << endl;
    }
    
    // Input pilihan dan jumlah untuk makanan
    int pilihan_makanan;
    int jumlah_makanan;
    cout << "Masukkan nomor menu makanan yang dipilih: ";
    cin >> pilihan_makanan;
    cout << "Masukkan jumlah makanan yang ingin dibeli: ";
    cin >> jumlah_makanan;
    total += makanan.begin()->second * jumlah_makanan;

    // Input pilihan dan jumlah untuk minuman
    int pilihan_minuman;
    int jumlah_minuman;
    cout << "Masukkan nomor menu minuman yang dipilih: ";
    cin >> pilihan_minuman;
    cout << "Masukkan jumlah minuman yang ingin dibeli: ";
    cin >> jumlah_minuman;
    total += minuman.begin()->second * jumlah_minuman;

    // Input pilihan dan jumlah untuk dessert
    int pilihan_dessert;
    int jumlah_dessert;
    cout << "Masukkan nomor menu dessert yang dipilih: ";
    cin >> pilihan_dessert;
    cout << "Masukkan jumlah dessert yang ingin dibeli: ";
    cin >> jumlah_dessert;
    total += dessert.begin()->second * jumlah_dessert;
    
    // Tampilkan struk pembelian
    cout << endl << "Struk Pembelian" << endl;
    cout << "Makanan: " << endl;
    cout << "   " << pilihan_makanan << ". " << makanan.begin()->first << " - Rp" << makanan.begin()->second << " x " << jumlah_makanan << endl;
    cout << "Minuman: " << endl;
    cout << "   " << pilihan_minuman << ". " << minuman.begin()->first << " - Rp" << minuman.begin()->second << " x " << jumlah_minuman << endl;
    cout << "Dessert: " << endl;
    cout << "   " << pilihan_dessert << ". " << dessert.begin()->first << " - Rp" << dessert.begin()->second << " x " << jumlah_dessert << endl;
    cout << "Total: Rp" << total << endl;

    return 0;
}