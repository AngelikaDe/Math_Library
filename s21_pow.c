 #include "s21_math.h"
 
long double s21_pow(double base, double num) {
  long double res = 0;
  if(base >= 0) {
  if (num == 0) {
      res = 1.0;
  } else if (num < 0) {
    res = 1/(s21_exp(-num *s21_log(base)));
  } else {
    res = s21_exp(num *s21_log(base));
  }
  } else if ((base < 0) && (s21_fmod(num, (int)num) == 0)) {
    res = 1;
    for (int i = 0; i < num; i++) {
      res *= base;
    }
  } else {
    res = s21_NAN;
  }
  return res;
}
