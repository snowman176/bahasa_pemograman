Function adalah blok kode terorganisir dan dapat digunakan kembali yang digunakan untuk melakukan suatu tindakan. Fungsi dapat menerima masukan, melakukan beberapa operasi, dan mengembalikan output.
## Contoh ##
def greet(name):
    return f"Hello, {name}!"

print(greet("Adeeb"))

Penjelasan:
def greet(name): mendefinisikan sebuah fungsi bernama greet yang menerima satu parameter name.
return f"Hello, {name}!" mengembalikan string yang berisi sapaan.
print(greet("Adeeb")) memanggil fungsi greet dengan argumen "Adeeb" dan mencetak hasilnya.

Recursion di Python
Recursion adalah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah. Fungsi rekursif harus memiliki kondisi dasar untuk menghentikan rekursi, untuk mencegah loop tak berujung.
## Contoh Fungsi Rekursif (Faktorial) ##
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

print(factorial(10))

Penjelasan:
def factorial(n): mendefinisikan sebuah fungsi bernama factorial yang menerima satu parameter n.
if n == 0: adalah kondisi dasar. Jika n adalah 0, fungsi mengembalikan 1.
else: return n * factorial(n-1) memanggil fungsi factorial dengan argumen n-1 dan mengalikan hasilnya dengan n.
