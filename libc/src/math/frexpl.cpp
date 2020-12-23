//===-- Implementation of frexpl function ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/__support/common.h"
#include "utils/FPUtil/ManipulationFunctions.h"

namespace __llvm_libc {

LLVM_LIBC_FUNCTION(long double, frexpl, (long double x, int *exp)) {
  return fputil::frexp(x, *exp);
}

} // namespace __llvm_libc
