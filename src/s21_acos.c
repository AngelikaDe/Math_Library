#include "s21_math.h"

long double s21_acos(double x) {
  long double result = 0;
  if (-1 <= x && x <= 1) {
    long double y = x / s21_pow((1 - x * x), 0.5);
    result = s21_PI_2 - s21_atan(y);
  }
  // заменить pow, добавить проверки fabs(x) < 1 и прочую лабуду
  return result;
}
