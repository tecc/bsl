#include <bsl++/string.h>

extern "C" {
#include <bsl/string.h>
}

using namespace std;
namespace Bsl {
    String* String::Split(const String& separator) {
        return (String*) BslSplit(this->c_str(), separator.c_str());
    }
}