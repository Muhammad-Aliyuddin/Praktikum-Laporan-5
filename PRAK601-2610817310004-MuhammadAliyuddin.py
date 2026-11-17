rows, column = map(int, input().split())

row = list(map(int, input().split()))

matriks = []

for i in range(rows):
    matriks.append(row[i * column:(i + 1) * column])

for i in matriks:
    print(*i)