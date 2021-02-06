#!/bin/bash
contest="abc"
problemname=$1
problem=$2
oj d https://atcoder.jp/contests/${contest}${problemname}/tasks/abc${problemname}_${problem} -d test/abc${problemname}_${problem}
oj test -c ./problem.exe ./test/abc$1_$2/*
