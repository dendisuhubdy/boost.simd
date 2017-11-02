##===================================================================================================
##                              Copyright 2016 NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                            http://www.boost.org/LICENSE_1_0.txt
##===================================================================================================

if (DEFINED IS_TRAVIS_CI)
  set(TRAVIS_UNIT_TEST "travis1.function.simd")
endif()


if (DEFINED IS_TRAVIS_CI)
  set(TRAVIS_UNIT_TEST "travis2.function.simd")
endif()

set ( SOURCES
      autofold.cpp
      autosplat.cpp
      dec.regular.cpp
)


if (DEFINED IS_TRAVIS_CI)
  set(TRAVIS_UNIT_TEST "travis3.function.simd")
endif()

set ( SOURCES
      inc.regular.cpp
    )


unset(TRAVIS_UNIT_TEST)
