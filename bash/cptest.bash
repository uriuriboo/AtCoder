#!/bin/bash
contest="abc"
problemname=$1
problem=$2
if [ ! -e test/${contest}${problemname}_${problem} ];then
    oj d https://atcoder.jp/contests/${contest}${problemname}/tasks/${contest}${problemname}_${problem} -d test/${contest}${problemname}_${problem}
fi
oj test  -c ./problem.exe ./test/${contest}$1_$2/* 