
void led(int n)
{ // bit4は消灯(使用できない)、bit4以外は1で点灯
	LEDのbit4以外をnの2進数表記で点灯;
}

// 初期化
void init(void)
{
	IOポートBを出力用に設定;
}

// 時間稼ぎ
void my_sleep(void)
{
	時間稼ぎ;
}

int main(void)
{
	int 点灯パターン;
	init();

	while (1)
	{
		LEDを点灯;
		LEDの点灯パターンを反転;
		時間稼ぎ;
	}
	return 0;
}

