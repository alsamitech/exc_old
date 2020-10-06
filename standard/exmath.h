#ifndef EXMATH_H
#define EXMATH_H

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

int ipx;
void ipw(int baseyu, int powyu) {
  int resl = 1;
  for (int i = 0; i < powyu; i++) {
    resl = resl * baseyu;
  }
  ipx = resl;
}

/*template <class FNUM_SMB, class SNUM_SMB>
FNUM_SMB smaller(FNUM_SMB FIRSTCMP_00, SNUM_SMB SECMP_00) {return(FIRSTCMP_00 < SECMP_00? FIRSTCMP_00:SECMP_00);}
FNUM_SMB larger(FNUM_SMB FIRSTCMP_01, SNUM_SMB SECMP_01) {return(FIRSTCMP_01 > SECMP_01? FIRSTCMP_01:SECMP_01);}*/
#endif