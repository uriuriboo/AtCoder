#include <bits/stdc++.h>
using namespace std;

/*
基数変換のためのライブラリ
10進数xをy進数表記にして返す
負の数は扱わない
*/

//string 型で返すためconvart_base.c_str()で変換する方の関数に渡す

template <typename T>
string convart_base(T x,T y){
    string s;

    while (x){
        s = to_string(x % y) + s;
        x /= y;
    }
    return s;
}

//int型のみ扱いint型で返す
int convart_base_int(int x,int y){
    string s;

    while (x){
        s = to_string(x % y) + s;
        x /= y;
    }
    return atoi(s.c_str());
}
