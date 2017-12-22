#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;
using namespace mac;
using namespace nus;
int main(){
    cout << a << endl;
    cout << b << endl;
    using mac::foo;
    foo();
    return 0;
}
