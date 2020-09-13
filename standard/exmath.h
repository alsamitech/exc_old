int power(int baseNum, int powNum) {
  int result = 1;
  for (int i = 0; i < powNum; i++;) {
    result = result * baseNum;
  }
  return result; 
}
double powd(double baseDec, double powDec) {
  double resd = 1;
  for(int di = 0; di < poweDec; di++) {
    result = result*baseDec;
  }
  return resd;
}