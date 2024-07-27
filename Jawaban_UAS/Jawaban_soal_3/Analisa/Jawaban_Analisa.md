GUI (Graphical User Interface) adalah antarmuka pengguna yang memungkinkan pengguna untuk berinteraksi dengan perangkat lunak melalui elemen grafis seperti tombol, ikon, menu, dan lainnya, bukan melalui perintah teks. GUI membuat program lebih mudah digunakan dan lebih intuitif, terutama untuk pengguna yang tidak terbiasa dengan perintah teks.

Berikut adalah contoh sederhana program GUI menggunakan Python dan library tkinter, yang merupakan salah satu pustaka GUI bawaan Python:

import tkinter as tk
from tkinter import messagebox

# Fungsi untuk menampilkan pesan ketika tombol ditekan
def show_message():
    messagebox.showinfo("Pesan", "Halo semuanya!!")

# Membuat jendela utama
root = tk.Tk()
root.title("Contoh GUI dengan tkinter")

# Menentukan ukuran jendela
root.geometry("300x200")

# Membuat label
label = tk.Label(root, text="Ini adalah contoh GUI sederhana")
label.pack(pady=10)

# Membuat tombol
button = tk.Button(root, text="Tekan saya", command=show_message)
button.pack(pady=10)

# Menjalankan aplikasi
root.mainloop()

