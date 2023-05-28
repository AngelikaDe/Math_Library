#include "s21_math.h"

long double s21_fabs(double x) {
  if (is_nan(x)) {
    return s21_NAN;
  }
  if (is_inf(x)) {
    return s21_INFINITY;
  }
  if (x < 0) {
    return x * (-1);
  } else {
    return x;
  }
}