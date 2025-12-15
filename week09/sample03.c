// ハッシュ法
#include <stdio.h>

int main(void) {
    // ハッシュテーブルを用意
    int hashTable[10];
    for (int i = 0; i < 10; i++) hashTable[i] = -1;

    // 保存したいデータ
    int data[] = {45, 12, 32};

    // データをハッシュテーブルに入れる
    for (int i = 0; i < 3; i++) {
        int value = data[i];

        // ハッシュ関数
        int address = value % 10;

        // -1ではないなら、空くまで隣へ移動する
        while(hashTable[address] != -1) {
            address = address + 1; // １つ進む

            // 端(10)を超えたら最初(0)に戻る
            if (address >= 10) address = 0;
        }

        // 空いている場所にデータを入れる
        hashTable[address] = value;
    }

    // 探索
    int target = 32; // 探したい値

    int searchAddress = target % 10; // 計算上の住所を探す

    // 最大でもテーブルの大きさだけ探せばよい
    for (int i = 0; i < 10; i++) {
        if (hashTable[searchAddress] == target) {
            printf("値 %d は %d 番地にあります\n", target, searchAddress);
            return 0;
        }

        // -1に当たったら、そのデータは存在しない
        if (hashTable[searchAddress] == -1) break;

        // 次の場所をチェックする
        searchAddress++;
        if (searchAddress >= 10) searchAddress = 0;
    }

    printf("見つかりませんでした\n");
    
    return 0;
}
