/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#include <math.h>

float
fdimf (float x, float y)
{
  return  (isgreater(x, y) ? (x - y) : 0.0F);
}
