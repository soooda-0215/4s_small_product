/**
 * @file h8sample.c
 * @brief h8モーターを回転するプログラム
 * @author Yuji KATSUTA, Makoto TANABE
 * @date 2022.4.22
 */
#include<stdlib.h>
#include<h8/reg3067.h>
#include<mes2.h>	
#include "led.h"

// 時間稼ぎ
void my_sleep(void){
  int i;
  for(i = 0; i < 10000; i++){
    // do nothing
  }
}


// 初期化
static void init(void)
{
  // LED
  PBDDR = 0xff; //ポートBを出力用に設定（0〜7）
  PBDR = 0xff;  //全LED消灯
  return;
}

int main(int argc, char **argv)
{
  int pattern = 0xff; //11111111;
  init();

  while (1)
  {
      led(pattern); // LEDを点灯
      pattern = ~pattern; // LEDの点灯パターンを反転
      my_sleep(); // 時間稼ぎ
  }
  // ここには来ない
  return 0;
}
