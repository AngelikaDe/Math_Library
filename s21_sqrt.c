#include "s21_math.h"
long double s21_sqrt(double x) {
  long double ret = 0.0;
  if (x == 0) {
    ret = 0;
  }
  if (x < 0) {
    ret = s21_NAN;
  }
  if (x > 0) {
    long double x0 = x;
    long double x1 = x0 - (x0 * x0 - x) / (2 * x0);
    while (s21_fabs(x1 - x0) > 1e-16) {
      x0 = x1;
      x1 = x0 - (x0 * x0 - x) / (2 * x0);
    }
    ret = x1;
  }
  return ret;
}