# シェルソート
def shell_sort(data):
    n = len(data)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            j = i - gap
            while j >= 0 and data[j] > data[j + gap]:
                # 要素を交換
                data[j], data[j + gap] = data[j + gap], data[j]
                j -= gap
        gap //= 2
    return data

# テストデータ
data = [5, 2, 4, 6, 1, 3]
print(shell_sort(data))
