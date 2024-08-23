nama_lengkap = input ("Masukkan Nama Lengkap Anda : ")

jumlah_huruf = len(nama_lengkap.replace(" "," "))

huruf_vokal = "aiueoAUIEO"
jumlah_vokal = len([char for char in nama_lengkap if char in huruf_vokal])

jumplah_konsonan = jumlah_huruf - jumlah_vokal

print("Jumlah huruf dari nama lengkap Anda adalah: ", jumlah_huruf)
print("Jumlah huruf vokal dari nama lengkap Anda adalah: ", jumlah_vokal)
print("jumlah huruf konsosnan dari nama lengkap Anda adalah: ", jumplah_konsonan)