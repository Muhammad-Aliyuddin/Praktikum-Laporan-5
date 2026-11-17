n = int(input())

input()

matriksA = []

for i in range(n):
    no = list(map(int, input().split()))
    matriksA.append(no)

input()

matriksB = []

for i in range(n):
    no = list(map(int, input().split()))
    matriksB.append(no)

result = []

for i in range(n):
    baris = []

    for j in range(n):
        total = 0

        for k in range(n):
            total += matriksA[i][k] * matriksB[k][j]

        baris.append(total)

    result.append(baris)

print("Matriks AXB")

for i in range(n):
    for j in range(n):
        print(result[i][j], end=" ")

    print()