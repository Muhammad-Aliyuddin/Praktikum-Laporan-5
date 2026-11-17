firstname = input("Nama Depan : ")
lastname = input("Nama Belakang : ")

fullname = firstname + " " + lastname

long = len((firstname + lastname).replace(" ", ""))

print("Nama Lengkap :", fullname)
print("Panjang Nama (tanpa spasi) :", long)