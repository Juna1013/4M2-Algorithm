# 最急降下法
import numpy as np

# 対象の関数
def func(x):
    return x**6 - 4*x**4 + 3*x + 4

# 導関数
def derivative(x):
    return 6*x**5 - 16*x**3 + 3

# パラメータ設定
x = -2.0 # 初期値
lr = 0.0001 # 学習率
epochs = 1000 # 繰り返し回数

# 実行
print(f"開始: x = {x: .4f}, f(x) = {func(x): .4f}")

for i in range(epochs):
    # 勾配を計算
    grad = derivative(x)

    # パラメータを更新
    x = x - lr * grad

    # 経過を表示
    print(f"エポック数 {i+1}: x = {x: .4f}, f(x) = {func(x): .4f}, grad = {grad: .4f}")

print(f"最終結果: x = {x: .4f}")
