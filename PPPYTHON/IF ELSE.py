mampu = "Anda termasuk kategori penduduk mampu"
kurang_mampu = "Anda termasuk kategori penduduk kurang mampu"

umur = int(input("Masukkan umur anda: "))

if umur >= 18:
    status_bekerja = input ("apakah anda memiliki perkerjaan? (Ya/Tidak): ").lower()

    if status_bekerja == "ya":
        pendapatan = int(input("Masukkan pendapatan perbulan Anda: Rp"))
        tanggungan = int(input("Jumplah tangunggan Anda: "))
        biaya_hidup = pendapatan / tanggungan 

        if biaya_hidup < 300000:
            print(kurang_mampu)
        else:
            print(mampu)
    else:
        print(kurang_mampu)

else:
    status_sekolah = input("Apakah Anda masih sekolah? (Ya/Tidak): ").lower()
    if status_sekolah == "Ya":
        print(mampu)
    else: 
        print(kurang_mampu)