#!/bin/sh

for f in $( find include/boost/simd | grep constant | grep -v constant_ | rev | cut -d/ -f1 | rev | sed 's/.hpp//g' | sort | uniq ); do
    echo $f:
    grep -Rn "$f.hpp" include
done
