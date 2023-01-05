#include "s21_math.h"
long double s21_pow(double base, double exp) {  //не правильно
  long double res = 1;
  for (int i = 0; i < exp; i++) {
    res = res * base;
  }
  return res;
}