sentence = input()

if len(sentence) > 20:
    print(sentence[:20] + "...")
else:
    print(sentence)