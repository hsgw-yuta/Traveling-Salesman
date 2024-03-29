﻿#include "Seales.h"

/**
* @file    Seales
* @brief   範囲毎に巡回していく
* @author  長谷川　勇太
* @date    2019/06/14
* @param   data   　　: PDATA*    : 座標データ 
* @param   anum       : short*    : 範囲座標数
* @param   flg        : short     : 範囲フラグ
* @return  　　       : void
*/
void Seales(PDATA* data,short* anum, short flg) {

	switch (flg)
	{
	case 0:
		FirstSeales(&data[0], &anum[0]);
		break;
	case 1:
		SecondSeales(&data[0], &anum[0]);
		break;
	case 2:
		ThirdSeales(&data[0], &anum[0]);
		break;
	case 3:
		FourthSeales(&data[0],&anum[0]);
		break;
	default:
		break;
	}
}

/**
* @file    FirstSeales
* @brief   左下範囲のセールス
* @author  長谷川　勇太
* @date    2019/06/14
* @param   data     : PDATA*    : 座標データ
* @param   anum     : short*    : 座標数
* @return  なし     : void
*/
void FirstSeales(PDATA* data, short* anum) {
	
	for (short i = 0; i < anum[0] - 1; i++) {
		// 通過
		data[i].check = true;
		// 総距離√((x+1)-x)²+((y+1)-y)²
		Distance(sqrt(pow((data[i + 1].x - data[i].x), 2.0) + pow((data[i + 1].y - data[i].y), 2.0)),1);
	}
}

/**
* @file    SecondSeales
* @brief   右下範囲のセールス
* @author  長谷川　勇太
* @date    2019/06/14
* @param   data     : PDATA*    : 座標データ
* @param   anum     : short*    : 座標数
* @return  なし     : void
*/
void SecondSeales(PDATA* data, short* anum) {

	// 2の範囲をrank順に回る
	for (short i = anum[0]; i < anum[0] + anum[1] - 1; i++) {
		// 通過
		data[i].check = true;
		// 総距離√((x+1)-x)²+((y+1)-y)²
		Distance(sqrt(pow((data[i + 1].x - data[i].x), 2.0) + pow((data[i + 1].y - data[i].y), 2.0)), 1);

	}
}


/**
* @file    ThirdSeales
* @brief   右上範囲のセールス
* @author  長谷川　勇太
* @date    2019/06/14
* @param   data     : PDATA*    : 座標データ
* @param   anum     : short*    : 座標数
* @return  なし     : void
*/
void ThirdSeales(PDATA* data, short* anum) {

	// 3の範囲をrank順に回る
	for (short i = anum[0] + anum[1]; i < anum[0] + anum[1] + anum[2] - 1; i++) {
		// 通過
		data[i].check = true;
		// 総距離√((x+1)-x)²+((y+1)-y)²
		Distance(sqrt(pow((data[i + 1].x - data[i].x), 2.0) + pow((data[i + 1].y - data[i].y), 2.0)), 1);
	}
}

/**
* @file    FourthSeales
* @brief   左上範囲のセールス
* @author  長谷川　勇太
* @date    2019/06/14
* @param   data     : PDATA*    : 座標データ
* @param   anum     : short*    : 座標数
* @return  なし     : void
*/
void FourthSeales(PDATA* data, short* anum) {

	// 1の範囲をrank順に回る
	for (short i = anum[0] + anum[1] + anum[2]; i < anum[0] + anum[1] + anum[2] + anum[3] - 1; i++) {
		// 通過
		data[i].check = true;
		// 総距離√((x+1)-x)²+((y+1)-y)²
		Distance( sqrt(pow((data[i + 1].x - data[i].x), 2.0) + pow((data[i + 1].y - data[i].y), 2.0)),1);
	}
}
