Exception Handling adalah mekanisme dalam pemrograman untuk menangani kesalahan runtime, sehingga program dapat menangani situasi yang tidak terduga tanpa crash. Dalam Python, exception handling dilakukan menggunakan blok try, except, else, dan finally.

#### Komponen-komponen Exception Handling:
1. try: Blok kode yang mungkin menimbulkan pengecualian ditempatkan di dalam blok try.
2. except: Jika ada pengecualian yang terjadi di dalam blok try, maka blok except yang sesuai akan menangani pengecualian tersebut.
3. else: Blok kode ini dieksekusi jika tidak ada pengecualian yang terjadi.
4. finally: Blok kode ini akan selalu dieksekusi, baik terjadi pengecualian maupun tidak.

Contoh Exception Handling
def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        return "You can't divide by zero!"
    except TypeError:
        return "Inputs must be numbers!"
    else:
        return result
    finally:
        print("Execution of divide function completed.")

# Contoh pemanggilan fungsi dengan berbagai input
print(divide(10, 2))    # Harusnya berhasil
print(divide(10, 0))    # Akan menimbulkan ZeroDivisionError
print(divide(10, 'a'))  # Akan menimbulkan TypeError

Penjelasan:

try: Blok ini berisi kode yang mungkin menimbulkan pengecualian (a / b).
except ZeroDivisionError: Blok ini menangani pengecualian ketika terjadi pembagian dengan nol.
except TypeError: Blok ini menangani pengecualian ketika input bukan angka.
else: Blok ini dieksekusi jika tidak ada pengecualian.
finally: Blok ini akan selalu dieksekusi, baik ada pengecualian maupun tidak, dan mencetak pesan bahwa eksekusi fungsi telah selesai.