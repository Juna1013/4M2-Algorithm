# ニュートン法
import numpy as np

# 1. 対象の関数
def func(x):
    return x**3 - x - 2

# 2. 1階導関数
def d_func(x):
    return 3*x**2 - 1

# 3. 2階導関数
def dd_func(x):
    return 6*x

# パラメータ設定（学習率の設定が不要）
x = -2.0 # 初期値
epochs = 10 # エポック数（繰り返し回数）

print(f"開始: x = {x: .4f}, f(x) = {func(x): .4f}")

# 実行
for i in range(epochs):
    # 1階・2階微分の値を計算
    d = d_func(x)
    dd = dd_func(x)

    # 0除算を避ける
    if abs(dd) < 1e-6:
        print("2階微分が0に近づいたため中断します")
        break

    # パラメータの更新
    x = x - d / dd

    print(f"エポック数 {i+1}: x = {x: .6f}, f(x) = {func(x): .6f}")

print(f"最終結果: x = {x: .6f}")
