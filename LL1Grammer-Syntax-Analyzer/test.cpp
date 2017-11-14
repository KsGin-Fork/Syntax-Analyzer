#include "util.h"
int main() {

    std::cout << "文法G1:($代表空)" << std::endl;
    Grammar g = InitGrammar({ InitGNode("E->TD") ,
                InitGNode("D->+TD|$"),
                InitGNode("T->FH"),
                InitGNode("H->*FH|$"),
                InitGNode("F->(E)|i"),
                });

    PrintGrammar(g);

    PrintAllFollowAndFirst(g);

    return 0;
}