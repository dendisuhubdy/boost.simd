//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#include <boost/simd/function/scalar/aligned_store.hpp>
#include <boost/simd/logical.hpp>

#include <scalar_test.hpp>

namespace bs = boost::simd;

STF_CASE_TPL( "Check aligned_store behavior with simple pointer with or without offset", STF_NUMERIC_TYPES )
{
  T src(42), res(0);

  bs::aligned_store(src, &res);
  STF_EQUAL(res, src );

  T src1[4] = {T(1), T(2), T(3), T(4)};
  T res1[4] = {T(0), T(0), T(0), T(0)};
  for(int i=0; i < 4 ; ++i)
  {
    bs::aligned_store(src1[i], &res1[0], i);
    STF_EQUAL(res1[i], src1[i] );
  }
}
