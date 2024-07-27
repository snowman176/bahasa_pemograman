import sqlite3

# Membuat koneksi ke database
conn = sqlite3.connect('example.db')

# Membuat cursor object
cursor = conn.cursor()

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

# Menambahkan data
cursor.execute('''
INSERT INTO users (name, age)
VALUES (?, ?)
''', ('Nova', 90))

cursor.execute('''
INSERT INTO users (name, age)
VALUES (?, ?)
''', ('Adeeb', 100))

# Menyimpan perubahan
conn.commit()

# Mengambil data
cursor.execute('SELECT * FROM users')

# Mengambil semua baris dari hasil query
rows = cursor.fetchall()

# Menampilkan data
for row in rows:
    print(row)

# Menutup koneksi
conn.close()
