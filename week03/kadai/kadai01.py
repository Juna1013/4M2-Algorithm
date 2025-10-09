# バブルソート
def bubble_sort(data):
    n = len(data)
    for i in range(n - 1): # 外側ループ：n-1回繰り返す
        for j in range(n - i - 1): # 内側ループ：比較範囲を徐々に狭める
            if data[j] > data[j + 1]: # 隣り合う要素を比較
                data[j], data[j + 1] = data[j + 1], data[j] # 交換
    return data

data = [5, 2, 4, 6, 1, 3]
print(bubble_sort(data))
