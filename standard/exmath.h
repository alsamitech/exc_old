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