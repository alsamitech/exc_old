#include <stdio.h>
#include "std/exmath.h"

int main() {
	int YinNum1 = 3;
	int YinNum2 = 7;
	int YinNum1Exp= -8;
	int YinNum2Exp= 3;
	int Yin= -2;
	int YinRes = 0;

  int bufn;

	ASSN_PROC_VAL(YinNum1,YinNum2,YinNum1Exp,YinNum2Exp,Yin, &YinRes);
  ipw(YinNum1,YinNum2,&bufn);
	printf("Yin: %d\nYin> %d\n", YinRes,bufn);
}
