# Nama : Mohammad Adeeb Ekananda Suhatman
# Nim : 20230801405


# Fungsi Perkalian
def perkalian(a, b):
    return a * b

# Fungsi Pembagian
def pembagian(a, b):
    if b == 0:
        return "Error: Pembagian dengan nol"
    else:
        return a / b

# Fungsi Penjumlahan
def penjumlahan(a, b):
    return a + b

# Fungsi Pengurangan
def pengurangan(a, b):
    return a - b

# Menu Program
def main():
    print("Pilih Menu Aritmetika Dasar:")
    print("1. Perkalian")
    print("2. Pembagian")
    print("3. Penjumlahan")
    print("4. Pengurangan")
    print("5. Keluar!!")

    pilihan = input("Pilih Menu (1/2/3/4/5): ")
    
    if pilihan == '5':
        print("Terima kasih!")
    
    if pilihan in ['1', '2', '3', '4']:
        angka1 = float(input("Masukkan angka pertama: "))
        angka2 = float(input("Masukkan angka kedua: "))

        if pilihan == '1':
            print("Hasil perkalian:", perkalian(angka1, angka2))
        elif pilihan == '2':
            print("Hasil pembagian:", pembagian(angka1, angka2))
        elif pilihan == '3':
            print("Hasil penjumlahan:", penjumlahan(angka1, angka2))
        elif pilihan == '4':
            print("Hasil pengurangan:", pengurangan(angka1, angka2))
            
    else:
        print("Pilihan tidak valid!")

if __name__ == "__main__":
    main()
    
    