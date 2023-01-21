#include "s21_math.h"
// от 0 до 1 и большие числа
long double s21_log(double x) {
  long double result = 0.0;
  if (x < 0) {
    result = s21_NAN;
  }
  if (x == 0) {
    result = -s21_INFINITY;
  }

  if (x == 1) {
    result = 0;
  }
  if (is_nan(x)) {
    result = s21_NAN;
  }
  if (is_inf(x) && x > 0) {
    result = s21_INFINITY;
  }
  if (is_inf(x) && x < 0) {
    result = s21_NAN;
  }
  if (is_fin(x) && x > 0 && x != 1) {
    double k = 4 / (x * s21_PN);
    result = s21_PI / (2 * s21_agm(1, k)) - 32 * s21_LN2;
  }
  // добавить проверку на x < 0 и прочую лабуду, заменить 1e-16
  return result;
}