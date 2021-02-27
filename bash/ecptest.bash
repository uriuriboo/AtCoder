#!/bin/bash
contest="abc"
problemname=$1
problem=$2
if [ ! -e test/abc${problemname}_${problem} ];then
    oj d https://atcoder.jp/contests/${contest}${problemname}/tasks/${contest}${problemname}_${problem} -d test/abc${problemname}_${problem}
fi
oj t -e 1e-6  -c ./problem.exe ./test/${contest}$1_$2/* 