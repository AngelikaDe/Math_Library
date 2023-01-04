#include "s21_math.h"
long double s21_sin(double x) {  //вычисляет синус
  long double sum = 0;
  double n = x;
  int i = 1;
  do {
    sum += n;
    n *= -1.0 * n * x * x / ((2 * i) * (2 * i + 1));
    i += 1;
  } while (sum > s21_EPS);
  return sum;
}