#ifndef EXMATH_H
#define EXMATH_H

/*
 *	(c) AlsamiTechnologies, 2020
 *
 *	Extended C Libraries (exC)
 *	
 *	This contains algorithms and formulas implemented in C
 *
 *	Contributors:
 *		Sami Alameddine
 *
 * */


int power(int baseNum, int powNum) {
  int result = 1;
  for (int i = 0; i < powNum; i++) {
    result = result * baseNum;
  }
  return result; 
}
double powd(double baseDec, double powDec) {
  double resd = 1;
  for(int di = 0; di < powDec; di++) {
    resd = resd*baseDec;
  }
  return resd;
}


float powf(float basex, float powx) {
  double resf = 1;
  for (int fi = 0; fi < powx; fi++) {
    resf = resf*basex;
  }
  return resf;
}

void ipw(int IPW_BASE,int IPW_POW, int* RETN){

	int IPW_RES;

	for(int IPW_I=0;IPW_I<IPW_POW;IPW_I++) {
		IPW_RES = IPW_RES * IPW_BASE;
	}

	*RETN = IPW_RES;
}

/*
 *	DONE WITH THE EASY SHIT, NOW LETS ACUTALLY MAKE ALGIRITHMS
 *
 * */

void ASSN_PROC_VAL(int num1, int num2, int num1_ex, int num2_ex, int gex, int *res) {
	int RESULTF;
	
	num1_ex = num1_ex*gex;
	num2_ex = num2_ex*gex;
	int YINRES;
	ipw(num1,num1_ex,&YINRES);
	int YINIDK;
	ipw(num2,num2_ex,&YINIDK);
	RESULTF = YINRES*YINIDK;

	*res = RESULTF;
}


/*template <class FNUM_SMB, class SNUM_SMB>
FNUM_SMB smaller(FNUM_SMB FIRSTCMP_00, SNUM_SMB SECMP_00) {return(FIRSTCMP_00 < SECMP_00? FIRSTCMP_00:SECMP_00);}
FNUM_SMB larger(FNUM_SMB FIRSTCMP_01, SNUM_SMB SECMP_01) {return(FIRSTCMP_01 > SECMP_01? FIRSTCMP_01:SECMP_01);}*/
#endif
