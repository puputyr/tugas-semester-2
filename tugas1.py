for x in range(1, 10):
    z = 0
    a = 1
    hasil = ""

    for y in range (x + 1):
        hasil += str(z) + " "
        k = z + a
        z = a
        a = k

    print (hasil)    

