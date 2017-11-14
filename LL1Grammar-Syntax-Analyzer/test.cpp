#include "util.h"

int main() {

    Grammar g = InitGrammar({InitGNode("E->TK"),
                             InitGNode("K->+TK"),
                             InitGNode("K->$"),
                             InitGNode("T->FM"),
                             InitGNode("M->*FM"),
                             InitGNode("M->$"),
                             InitGNode("F->i"),
                             InitGNode("F->(E)")
                            });

    //打印文法
    std::cout << "文法G1:($代表空)" << std::endl;
    PrintGrammar(g);

    //打印follow & first
    std::cout << "Follow 集 & First 集" << std::endl;
    PrintAllFollowAndFirst(g);

    //打印预测分析表
    std::cout << "预测分析表 : " << std::endl;
    PrintLL1AnalyseTable(g);

    //分析过程
    std::cout << "分析过程 : " << std::endl;
    Analyse(g , "i+i*i");
    return 0;
}