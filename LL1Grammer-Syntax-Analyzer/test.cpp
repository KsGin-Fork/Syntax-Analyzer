#include <iostream>
#include "util.h"
int main() {

    Grammar g { InitGNode("E->S|aS|bS|c") ,
                InitGNode("S->,wa|s")
                };


    auto ve = GetFirstSet('E' , g);
    auto vs = GetFirstSet('S' , g);

    PrintFirst('E' , ve);
    PrintFirst('S' , vs);

    return 0;
}