void number_led(int n){
	数値LEDに数値nをダイナミック点灯;
}

void number_led_off(void){
	数値LEDを消灯;
}


void led(int n)
{ // bit4は消灯(使用できない)、bit4以外は1で点灯
	LEDのbit4以外をnの2進数表記で点灯;
}

// 初期化
void init(void)
{
	IOポートBを出力用に設定;
	IOポート4を出力用に設定;
}

// 時間稼ぎ
void my_sleep(void)
{
	時間稼ぎ;
}

int main(void)
{
	int 点灯パターン;
	int 数値LEDに表示する数値;
	init();

	while (1)
	{
		LEDを点灯;
		LEDの点灯パターンを反転;
		数値LEDにダイナミック点灯;
		数値LEDに表示する数値をインクリメント;
		時間稼ぎ;
	}
	return 0;
}

