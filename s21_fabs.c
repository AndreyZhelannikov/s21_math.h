#include "s21_math.h"

long double s21_fabs(double x) {
    if (is_nan(x)) return S21_NAN;
    if (!is_finite(x)) { return x; }

    return x < 0 ? -x : x;
}

