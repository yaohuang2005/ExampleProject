//
// Created by Yao Huang on 2020-08-17.
//
#include "StringUtil.h"
#include <string>
using namespace std;

void string_test() {
    string a{"abcd"};
    string b{"a"};

   // bool c = StringUtil::Contains(a, b);
    string m =StringUtil::string_replace("abc", "a", "1");
    string f = StringUtil::Format("abc %d", 123);
    bool eq = StringUtil::incensitiveEquals("a", "A");
    string conc = StringUtil::concatStringInt("ab", 123);
    string x = " b ";
    string tr = StringUtil::trim(x);

    int at = 123;
    string tos = StringUtil::to_string(at);
    return;
}