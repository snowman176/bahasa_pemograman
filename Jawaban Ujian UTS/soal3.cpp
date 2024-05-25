#include <iostream>
using namespace std;

int main() {
    int n, a, i, b; // Mengganti placeholder '_' dengan variabel yang sesuai.
    cout << "Masukkan jumlah baris : ";
    cin >> n;
    
    for (i = 1; i <= n; i++) { // Mengasumsikan 'l' adalah '1' (angka satu) dan mengganti '_' yang tidak terdefinisi.
        for (a = 1; a <= i; a++) // Loop untuk menghasilkan spasi, mengasumsikan 'a' adalah spasi.
            cout << " ";
        for (b = 1; b <= i; b++) // Loop untuk menghasilkan tanda bintang atau karakter lain.
            cout << "*";
        cout << "\n"; // Mencetak baris baru setelah setiap iterasi dari loop luar.
    }

    return 0;
}