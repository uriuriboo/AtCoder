#!/bin/bash
contest="abc"
problemname=$1
problem=$2
oj test -c ./problem.exe ./test/abc$1_$2/*
