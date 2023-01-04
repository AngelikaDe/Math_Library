#include "s21_math.h"
long double s21_pow(double x, int y) {
  long double res = 1;
  for (int i = 0; i < y; i++) {
    res = res * x;
  }
  return res;
}