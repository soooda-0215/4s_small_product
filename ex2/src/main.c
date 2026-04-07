/**
 * @file h8sample.c
 * @brief h8モーターを回転するプログラム
 * @author Yuji KATSUTA, Makoto TANABE
 * @date 2022.4.22
 */
#include <stdlib.h>
#include<h8/reg3067.h>
#include<mes2.h>	

#include "led.h"
#include "nled.h"
#include "timer.h"

// 初期化
static void init(void)
{
  // LED
  PBDDR = 0xff; //ポートBを出力用に設定（0〜7）
  PBDR = 0xff;  //全LED消灯
  // NLED
  P4DDR = 0xff; //ポート4を出力用に設定（0〜7）
  // timer
  init_timer0(200, NULL);
  return;
}

/**
 * Understand the following snipet
 */
int main(int argc, char **argv)
{
  int pattern = 0xff; //11111111;
  int number = 0;
  init();
  start_timer0();
  led(pattern); // LEDを点灯

  while (1)
  {
    int count = timer_get_timerv0()->count;
    if(count >= 100) break;
    pattern = ~pattern; // LEDの点灯パターンを反転
    number_led(number++);
  }

  led(0);
  number_led_off();
  stop_timer0();
  return 0;
}

