sentence = input("Kalimat : ").lower()

vokal = 0
konsonan = 0

for i in sentence:
    if i == " ":
        continue
    elif i in "aiueo":
        vokal += 1
    elif i.isalpha():
        konsonan += 1

print("Jumlah Vokal :", vokal)
print("Jumlah Konsonan :", konsonan)