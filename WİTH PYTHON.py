import itertools
import threading
import queue

# Küçük harfler ve sayılar
CHARS = "abcdefghijklmnopqrstuvwxyz0123456789"

# Şifreleri oluşturan fonksiyon
def generate_passwords(min_length, max_length, start_char, end_char, result_queue):
    for length in range(min_length, max_length + 1):  # Aralıktaki her uzunluk için
        for combination in itertools.product(CHARS, repeat=length):
            # Kombinasyonun ilk karakterine göre filtrele
            if combination[0] >= start_char and combination[0] < end_char:
                password = ''.join(combination)
                result_queue.put(password)  # Şifreyi kuyruğa ekle

def main():
    min_length = int(input("Minimum şifre uzunluğunu girin (1-12): "))
    max_length = int(input("Maksimum şifre uzunluğunu girin (1-12): "))

    if min_length < 1 or max_length > 12 or min_length > max_length:
        print("Geçersiz uzunluk! Lütfen 1 ile 12 arasında ve min <= max olacak şekilde değerler girin.")
        return

    # Thread'ler için kuyruk (queue) oluştur
    result_queue = queue.Queue()

    # Thread'leri başlat
    threads = []
    num_threads = 36  # Küçük harfler (26) + sayılar (10) = 36 karakter
    chunk_size = len(CHARS) // num_threads

    for i in range(num_threads):
        start_char = CHARS[i * chunk_size]
        end_char = CHARS[(i + 1) * chunk_size] if i < num_threads - 1 else CHARS[-1]
        thread = threading.Thread(
            target=generate_passwords,
            args=(min_length, max_length, start_char, end_char, result_queue)
        )
        threads.append(thread)
        thread.start()

    # Thread'lerin bitmesini bekle
    for thread in threads:
        thread.join()

    # Sonuçları dosyaya yaz
    with open("passwords.txt", "w") as file:
        while not result_queue.empty():
            file.write(result_queue.get() + "\n")

    print(f"{min_length} ile {max_length} uzunluklarındaki tüm şifreler 'passwords.txt' dosyasına kaydedildi.")

if __name__ == "__main__":
    main()
