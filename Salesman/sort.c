#include "sort.h"

/**
* @file     AreaSort
* @brief    ΝΝΜΤπ\[g·ι
* @author   ·Jμ@EΎ
* @date     2019/06/11
* @param    distance    : double    : £ 
* @param    anum        : short*    : ΝΝΐW
* @return   Θ΅        : void      
*/
void AreaSort(PDATA* data) {

	//! κi[
	PDATA temp;
	// \[g
	for (short i = 0; i < CITY; i++) {
		for (short j = CITY - 1; j > i; j--) {
			if (data[j].rank < data[j - 1].rank) {
				memcpy(&temp, &data[j], sizeof(PDATA));
				memcpy(&data[j], &data[j - 1], sizeof(PDATA));
				memcpy(&data[j - 1], &temp, sizeof(PDATA));
			}
		}
	}
}

/**
* @file    RankSort
* @brief   rankΜ\[g
* @author  ·Jμ@EΎ
* @date    2019/06/20
* @param   ddata    : DDATA*    : ΕZ£f[^
* @return  Θ΅     : void
*/
void RankSort(DDATA* ddata) {
	//! κi[
	DDATA temp;
	// \[g
	for (short i = 0; i < MAPNUM; i++) {
		for (short j = MAPNUM - 1; j > i; j--) {
			if (ddata[j].distance < ddata[j - 1].distance) {
				memcpy(&temp, &ddata[j], sizeof(PDATA));
				memcpy(&ddata[j], &ddata[j - 1], sizeof(PDATA));
				memcpy(&ddata[j - 1], &temp, sizeof(PDATA));
			}
		}
	}
	for (short i = 0; i < MAPNUM; i++) {
		ddata[i].rank = i+1;
	}
}

