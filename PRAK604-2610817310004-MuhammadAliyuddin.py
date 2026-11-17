code = input()
message = input()

star = 0
fence = 0
result = ""

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(code)):
        if code[i] == " " and message[i] == " ":
            result += " "
        elif code[i] == message[i]:
            result += "*"
            star += 1
        else:
            result += "#"
            fence += 1

    print(result)
    print("*=" + str(star))
    print("#=" + str(fence))

    if star >= fence:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")