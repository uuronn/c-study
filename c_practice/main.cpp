#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int Data[] = scanf_s("%d", &Data);
	int tmp, id, max_id, flag_id;
	printf_s("＝＝ 小➡大へ 並べ替えプログラム ＝＝\n\n");
	// サンプルデータ生成（ 範囲0～99 の擬似乱数 ）
	for (id = 0; id < 4; id++) Data[id] = rand() % 100;
	for (id = 0; id < 4; id++) printf_s("%d ", Data[id]);
	printf_s("\n＊＊＊ 並べ替え前 ＊＊＊\n\n");
	//＊＊＊ 『小➡大へ 並べ替え』処理ここから ＊＊＊
	for (flag_id = 1; flag_id >= 1; flag_id++)
	{
		max_id = flag_id;
		for (id = 0; id < flag_id; id++) {
			if (Data[id] > Data[max_id]) max_id = Data[id];
		}
		tmp = Data[max_id];
		Data[max_id] = Data[flag_id];
		Data[max_id] = tmp;
	}
	//＊＊＊ 『小➡大へ 並べ替え』処理ここまで ＊＊＊
	for (id = 0; id < 4; id++) printf_s("%d ", Data[id]);
	printf_s("\n＊＊＊ 並べ替え後 ＊＊＊\n");
	return 0;
}