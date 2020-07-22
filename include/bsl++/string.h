#pragma once
#include <string>

using namespace std;

namespace Bsl {
    class String : public string {
        String(char* str) : string(str) {}
        String(string str) : string(str) {}

        String* Split(const String& separator);
    };
}