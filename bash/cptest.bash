#!/bin/bash
contest="abc"
problemname=$1
problem=$2
if [ ! -e test/abc${problemname}_${problem} ];then
    oj d https://atcoder.jp/contests/${contest}${problemname}/tasks/abc${problemname}_${problem} -d test/abc${problemname}_${problem}
fi
oj test -c ./problem.exe ./test/abc$1_$2/*
