#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "data.h"

#ifndef CHANGE
#define CHANGE
extern void Change(PDATA*,short*, short);       
extern int CNum(int min, int max);              // 指定範囲の乱数を生成
void Swap(PDATA* pdata, int* cnum);             //  座標入れ替え
#endif  