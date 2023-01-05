#include <check.h>
#include <stdio.h>

#include "s21_math.h"
START_TEST(s21_abs_test) {
  int num = 23;
  ck_assert_int_eq(s21_abs(num), abs(num));

  int num2 = 200000;
  ck_assert_int_eq(s21_abs(num2), abs(num2));

  int num3 = -200000;
  ck_assert_int_eq(s21_abs(num3), abs(num3));
}
END_TEST

START_TEST(s21_fabs_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_fabs(num), fabs(num));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_fabs(num2), fabs(num2));

  double num3 = -200000.456784;
  ck_assert_ldouble_eq(s21_fabs(num3), fabs(num3));
}
END_TEST

START_TEST(s21_ceil_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_ceil(num), ceil(num));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_ceil(num2), ceil(num2));

  double num3 = -200000.456784;
  ck_assert_ldouble_eq(s21_ceil(num3), ceil(num3));
}
END_TEST

START_TEST(s21_pow_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_pow(num, 30), pow(num, 30));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_pow(num2, 45), pow(num2, 45));

  double num3 = -2000;
  ck_assert_ldouble_eq(s21_pow(num2, 4), pow(num2, 4));
}
END_TEST

START_TEST(s21_sin_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_sin(num), sin(num));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_sin(num2), sin(num2));

  double num3 = -200000.456784;
  ck_assert_ldouble_eq(s21_sin(num3), sin(num3));

  double num4 = 0;
  ck_assert_ldouble_eq(s21_sin(num4), sin(num4));
}
END_TEST
START_TEST(s21_tan_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_tan(num), tan(num));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_tan(num2), tan(num2));

  double num3 = -200000.456784;
  ck_assert_ldouble_eq(s21_tan(num3), tan(num3));

  double num4 = 0;
  ck_assert_ldouble_eq(s21_tan(num4), tan(num4));
}
END_TEST

START_TEST(s21_cos_test) {
  double num = 23.34;
  ck_assert_ldouble_eq(s21_cos(num), cos(num));

  double num2 = 200000.567;
  ck_assert_ldouble_eq(s21_cos(num2), cos(num2));

  double num3 = -200000.456784;
  ck_assert_ldouble_eq(s21_cos(num3), cos(num3));

  double num4 = 0;
  ck_assert_ldouble_eq(s21_cos(num4), cos(num4));
}
END_TEST

int main(void) {
  Suite *s = suite_create("s21_string");
  TCase *tc = tcase_create("s21_string");
  SRunner *sr = srunner_create(s);
  int nf;
  suite_add_tcase(s, tc);

  tcase_add_test(tc, s21_abs_test);
  tcase_add_test(tc, s21_fabs_test);
  tcase_add_test(tc, s21_ceil_test);
  tcase_add_test(tc, s21_pow_test);
  tcase_add_test(tc, s21_sin_test);
  tcase_add_test(tc, s21_tan_test);
  tcase_add_test(tc, s21_cos_test);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf == 0 ? 0 : 1;
}
