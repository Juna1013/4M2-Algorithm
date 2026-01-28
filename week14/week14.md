# 後期14週目

## 文字列探索のアルゴリズム

文字列探索とは、テキスト（長い文字列）とパターン（探したい短い文字列）が与えられたときに、パターンがテキスト中のどこに出現するかを探す問題である。

### 力まかせ法

テキストの先頭から1文字ずつずらしながらパターンと順番に文字を比較する。不一致が起きたら、1文字だけずらしてやり直す。

最悪計算量は$O(NM)$になる（N:テキスト長、M：パターン長）。

特徴として、以下のような点が挙げられる。

- メリット
  - 実装が非常に簡単
  - 小規模なデータなら十分実用的
- デメリット
  - 大きな文字列では遅い
  - 同じ比較を何度も繰り返す

実装例は以下の通りである。

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "ABCDABCDABEE";
    char pattern[] = "ABCD";

    int i, j;
    int text_len = strlen(text);
    int pattern_len = strlen(pattern);
    int found = 0;

    /* 力まかせ法による探索 */
    for (i = 0; i <= text_len - pattern_len; i++) {
        j = 0;

        while (j < pattern_len && text[i + j] == pattern[j]) {
            j++;
        }

        if (j == pattern_len) {
            printf("パターンは %d 番目から見つかりました。\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("パターンは見つかりませんでした。\n");
    }

    return 0;
}
```

### KMP法

### ボイヤームーア法

## データベースの基礎

### リレーショナルデータベース（RDB）
