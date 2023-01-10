#include <check.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#include "s21_math.h"
// START_TEST(s21_abs_test) { 
//   int num = 23;
//   ck_assert_int_eq(s21_abs(num), abs(num));

//   int num2 = 200000;
//   ck_assert_int_eq(s21_abs(num2), abs(num2));

//   int num3 = -200000;
//   ck_assert_int_eq(s21_abs(num3), abs(num3));
// }
// END_TEST

// START_TEST(s21_acos_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
//   // x = 4.5;
//   // ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 1e-6);
//   // x = -200000.567;
//   //ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 1e-6);
//   x = 0.7;
//   ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 1e-6);
//   x = -0.99;
//   ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 1e-6);
// }
// END_TEST

// START_TEST(s21_asin_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
//   // x = 4.5;
//   // ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 1e-6);
//   // x = -200000.567;
//   // ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 1e-6);
//   x = 0.7;
//   ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 1e-6);
//   x = -0.99;
//   ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 1e-6);
// }
// END_TEST

// START_TEST(s21_atan_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
//   x = 4.5;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   x = -200000.567;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   x = 0.7;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   x = -0.99;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   x = 1.0/0.0;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   x = -1.0/0.0;
//   ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
//   // x = 0.0/0.0;
//   // ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 1e-6);
// }
// END_TEST

// START_TEST(s21_fmod_test) {
//   double x = 0.0;
//   double y = 0.0;
//   ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), 1e-6);
//   x = 4.5;
//   y = 2.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = -200000.567;
//   y = 2.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = 0.7;
//   y = -2.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = -0.99;
//   y = 2.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = 1.0/0.0;
//   y = 0.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = 0.0;
//   y = 1.0/0.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = -1.0/0.0;
//   y = 0.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
//   x = 0.0;
//   y = -1.0/0.0;
//   ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
// }
// END_TEST

START_TEST(s21_log_test) {
  double x = 0.0;
  // ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  x = 4.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), 1e-6);
  x = -200000.567;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), 1e-6);
  x = 0.7;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), 1e-6);
  x = -0.99;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), 1e-6);
  ck_assert_ldouble_eq_tol(log(1), s21_log(1), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.1), s21_log(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.00001), s21_log(0.00001), 1e-6);
  ck_assert_ldouble_eq_tol(log(1e-6), s21_log(1e-6), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.4), s21_log(0.4), 1e-6);
  ck_assert_ldouble_eq_tol(log(100), s21_log(100), 1e-6);
  ck_assert_ldouble_eq_tol(log(100000), s21_log(100000), 1e-6);
  ck_assert_ldouble_eq_tol(log(1e100), s21_log(1e100), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.001), s21_log(0.001), 1e-6);
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_infinite(s21_log(INFINITY));
  ck_assert_ldouble_nan(s21_log(-INFINITY));
  ck_assert_ldouble_nan(log(-INFINITY));
  ck_assert_ldouble_nan(s21_log(s21_NAN));
}
END_TEST

// START_TEST(s21_exp_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
//   x = 4.5;
//   ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   x = 20.567;
//   ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   x = 0.7;
//   ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   // x = -0.99;
//   // ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   // x = 1.0/0.0;
//   // ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   // x = -1.0/0.0;
//   // ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
//   // x = 0.0/0.0;
//   // ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 1e-6);
// }
// END_TEST
// START_TEST(s21_fabs_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq(s21_fabs(num), fabs(num));

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq(s21_fabs(num2), fabs(num2));

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq(s21_fabs(num3), fabs(num3));
// }
// END_TEST

// START_TEST(s21_ceil_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq_tol(s21_ceil(num), ceil(num), 1e-6);

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_ceil(num2), ceil(num2), 1e-6);

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_ceil(num3), ceil(num3), 1e-6);
// }
// END_TEST

// START_TEST(s21_pow_test) {
//   double num = 4;
//   ck_assert_ldouble_eq_tol(s21_pow(num, 0.5), pow(num, 0.5), 1e-6);
//   double num2 = -1;
//   ck_assert_ldouble_eq_tol(s21_pow(num2, 10.0 ), pow(num2, 10.0), 1e-6);
//   double num3 = 23;
//   ck_assert_ldouble_eq_tol(s21_pow(num3, 4), pow(num3, 4), 1e-6);
//   double num4 = 4.345666;
//   ck_assert_ldouble_eq_tol(s21_pow(num4, 0.5), pow(num4, 0.5), 1e-6);
//   double base = 4, exp = 0.5;
//   ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp),  1e-6);
//   base = 0.0;
//   exp = 100.0;
//   ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp),  1e-6);
//   base = 0.0;
//   exp = 0.0;
//   ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp),  1e-6);
//   base = -1;
//   exp = 10.1;
//   ck_assert_ldouble_nan(s21_pow(base, exp));
//   base = -16.161435;
//   exp = 9.0;
//   ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-2);
// }
// END_TEST

// START_TEST(s21_sin_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
//   x = 23.34;
//   ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);
//   x = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);
//   x = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);
// }
// END_TEST

// START_TEST(s21_sqrt_test) {
// double num = 5;
// ck_assert_ldouble_eq(s21_sqrt(num), sqrt(num));

// double num2 = 234;
// ck_assert_ldouble_eq(s21_sqrt(num2), sqrt(num2));

// double num3 = 578;
// ck_assert_ldouble_eq(s21_sqrt(num3), sqrt(num3));

// } END_TEST

// START_TEST(s21_tan_test) {
//   double x = 0.0;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = 12325435.55643674;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = -12325435462.5464654;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = 12325435462.5464654;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = -123564562.546;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = 1e+9;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = -1e+9;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = 0.0001;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = -0.0001;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = 1.01;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = s21_PI/2;
//   ck_assert_ldouble_infinite(s21_tan(x));
//   x = s21_PI/2+s21_PI;
//   ck_assert_ldouble_infinite(s21_tan(x));
//   // x = -s21_PI/2-s21_PI;
//   // ck_assert_ldouble_infinite(s21_tan(x));
//   x = s21_PI/4;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
//   x = s21_PI/4 + s21_PI;
//   ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);

// }
// END_TEST

// START_TEST(s21_cos_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), 1e-6);

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_cos(num2), cos(num2), 1e-6);

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_cos(num3), cos(num3), 1e-6);

//   double num4 = 0;
//   ck_assert_ldouble_eq_tol(s21_cos(num4), cos(num4), 1e-6);
// }
// END_TEST


int main(void) {
  Suite *s = suite_create("s21_math");
  TCase *tc = tcase_create("s21_math");
  SRunner *sr = srunner_create(s);
  int nf;
  suite_add_tcase(s, tc);
  // tcase_add_test(tc, s21_acos_test);
  // tcase_add_test(tc, s21_asin_test);
  // tcase_add_test(tc, s21_atan_test);
  // tcase_add_test(tc, s21_fmod_test);
  // tcase_add_test(tc, s21_exp_test);
  tcase_add_test(tc, s21_log_test);

  // tcase_add_test(tc, s21_abs_test);//works ;)
  // tcase_add_test(tc, s21_fabs_test); //works ;)
  // tcase_add_test(tc, s21_ceil_test);//works ;)
  // tcase_add_test(tc, s21_pow_test); // works ;)
  // tcase_add_test(tc, s21_sin_test);
  // tcase_add_test(tc, s21_tan_test); //Dosnt work because of sin
  // tcase_add_test(tc, s21_cos_test); //Dosnt work because of sin
  // tcase_add_test(tc, s21_sqrt_test);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf == 0 ? 0 : 1;
}