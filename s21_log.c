#include "s21_math.h"

long double s21_log(double x) {
    double result = 0;
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
    if (is_inf(x)) {
        result = s21_INFINITY;
    }
    if (x > 0 && x != 1) {
        double k = 4 / (x * 2*2*2*2*2*2*2*2*2*2*2*2*2*2);
        result = s21_PI / (2 * s21_agm(1, k)) - 14 * 0.69314718056;
    }
    // добавить проверку на x < 0 и прочую лабуду, заменить 1e-16
    return result;
}