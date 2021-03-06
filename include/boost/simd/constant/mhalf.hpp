//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_MHALF_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_MHALF_HPP_INCLUDED

/*!
  @ingroup group-constant
  @defgroup constant-Mhalf Mhalf (function template)

  Generates the constant @c -0.5.

  @headerref{<boost/simd/constant/mhalf.hpp>}

  @par Description

  1.  @code
      template<typename T> T Mhalf();
      @endcode

  2.  @code
      template<typename T> T Mhalf( boost::simd::as_<T> const& target );
      @endcode

  Generates a value of type @c T  that evaluates to -0.5.

  @par Parameters

  | Name                | Description                                                         |
  |--------------------:|:--------------------------------------------------------------------|
  | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

  @par Return Value
  A value of type @c that evaluates to `T(-0.5)`.

  @par Requirements
  - **T** models IEEEValue
**/

#include <boost/simd/constant/scalar/mhalf.hpp>
#include <boost/simd/constant/simd/mhalf.hpp>

#endif
