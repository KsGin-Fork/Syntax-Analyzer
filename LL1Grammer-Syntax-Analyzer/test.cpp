#include <iostream>
#include "util.h"
int main() {


    /**
     *
     */
    Grammar g = InitGrammar({ InitGNode("E->TK") ,
                InitGNode("K->+TK"),
                InitGNode("K->$"),
                InitGNode("T->FM"),
                InitGNode("M->*FM"),
                InitGNode("M->$"),
                InitGNode("F->i"),
                InitGNode("F->(E)")
                });


    PrintAllFollowAndFirst(g);

    return 0;
}