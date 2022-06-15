#!/bin/bash
problemname=$1
problem=$2
if [ ! -e test/${contest}${problemname}_${problem} ];then
    oj d https://codeforces.com/contest/${problemname}/problem/${problem} -d test/${problemname}${problem}
fi
oj test  -c ./problem.exe ./test/$1$2/* 