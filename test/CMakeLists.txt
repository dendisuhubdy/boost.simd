##===================================================================================================
##                              Copyright 2016 NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                            http://www.boost.org/LICENSE_1_0.txt
##===================================================================================================

NS_include(make_unit)

set(CMAKE_BUILD_TYPE "Debug")
make_unit(""
    api/includes.cpp
    api/memory/is_aligned.cpp
    api/memory/preferred_alignment.cpp
    api/pack/assignment.cpp
    api/pack/concepts.cpp
    api/pack/ctor/array.cpp
    api/pack/ctor/default.cpp
    api/pack/ctor/iterator.cpp
    api/pack/ctor/list.cpp
    api/pack/ctor/pointer.cpp
    api/pack/ctor/splat.cpp
    api/pack/hierarchy.cpp
    api/pack/proxy/comparison.cpp
    api/pack/proxy/not.cpp
    architecture/has_native_storage.cpp
    architecture/is_iterator.cpp
    architecture/limits.cpp
    architecture/tags.cpp
    function/scalar/aligned_store.cpp
    function/scalar/basic.cpp
    function/scalar/dec.regular.cpp
    function/scalar/extract.cpp
    function/scalar/inc.regular.cpp
    function/scalar/load.cpp
    function/scalar/splat.cpp
    function/simd/aligned_load/misaligned.arithmetic.cpp
    function/simd/aligned_load/pointer.arithmetic.cpp
    function/simd/aligned_store.cpp
    function/simd/dec.regular.cpp
    function/simd/extract/dynamic.arithmetic.cpp
    function/simd/extract/static.arithmetic.cpp
    function/simd/inc.regular.cpp
    function/simd/insert/dynamic.arithmetic.cpp
    function/simd/insert/static.arithmetic.cpp
    function/simd/load/pointer.arithmetic.cpp
    function/simd/make/arithmetic.cpp
    function/simd/splat/arithmetic.cpp
    function/simd/store/pointer.arithmetic.cpp
)
