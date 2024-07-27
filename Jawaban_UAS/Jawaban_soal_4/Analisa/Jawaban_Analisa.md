Aplikasi dapat berkomunikasi dengan database menggunakan berbagai pustaka dan modul yang tersedia dalam bahasa pemrograman Python. Salah satu pustaka yang paling umum digunakan untuk berinteraksi dengan database adalah sqlite3, yang merupakan modul bawaan Python untuk berinteraksi dengan SQLite, sebuah database yang ringan dan file-based. Selain SQLite, ada juga pustaka lain seperti MySQL Connector untuk MySQL, psycopg2 untuk PostgreSQL, dan SQLAlchemy, yang merupakan ORM (Object-Relational Mapping) yang mendukung berbagai jenis database.

Berikut adalah penjelasan singkat tentang bagaimana aplikasi Python bisa berkomunikasi dengan database menggunakan sqlite3 dan contoh codingannya:

Menggunakan sqlite3
1. Membuat Koneksi ke Database
Pertama, Anda perlu mengimpor modul sqlite3 dan membuat koneksi ke database. Jika database belum ada, SQLite akan membuat file database baru.

import sqlite3

# Membuat koneksi ke database (atau membuat database baru jika belum ada)
conn = sqlite3.connect('example.db')

# Membuat cursor object
cursor = conn.cursor()

2. Membuat Tabel
Selanjutnya, Anda bisa membuat tabel di dalam database.

# Membuat tabel
cursor.execute('''
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY,
    name TEXT,
    age INTEGER
)
''')

# Menyimpan perubahan
conn.commit()

3. Menambahkan Data ke Tabel
Anda dapat menambahkan data ke dalam tabel menggunakan perintah INSERT.

# Menambahkan data
cursor.execute('''
INSERT INTO users (name, age)
VALUES (?, ?)
''', ('Adeeb', 100))

# Menyimpan perubahan
conn.commit()

4. Mengambil Data dari Tabel
Untuk mengambil data dari tabel, Anda bisa menggunakan perintah SELECT.
# Mengambil data
cursor.execute('SELECT * FROM users')

# Mengambil semua baris dari hasil query
rows = cursor.fetchall()

# Menampilkan data
for row in rows:
    print(row)

5. Menutup Koneksi
Setelah selesai berinteraksi dengan database, Anda harus menutup koneksi.
# Menutup koneksi
conn.close()


