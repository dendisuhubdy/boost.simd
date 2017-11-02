#!/bin/sh
git co $( git st | grep $1.hpp | cut -d: -f2 | tr -d '\n' )
