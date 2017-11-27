#include "util.h"

int main() {

//    Grammar g = InitGrammar({InitGNode("S->ABBA"),
//                             InitGNode("A->a|$"),
//                             InitGNode("B->b|$")
//                            });

//    Grammar g = InitGrammar({InitGNode("S->aSe|B"),
//                             InitGNode("B->bBe|C"),
//                             InitGNode("C->cCe|d")
//                            });

//    Grammar g = InitGrammar({InitGNode("E->E+T|T"),
//                             InitGNode("T->T*F|F"),
//                             InitGNode("F->(E)|i")
//                            });


    Grammar g = InitGrammar({InitGNode("S->Qc|c"),
                             InitGNode("Q->Rb|b"),
                             InitGNode("R->Sa|a")
                            });


    //打印文法
    std::cout << "文法G1:($代表空)" << std::endl;
    PrintGrammar(g);

    auto isHaveLeftRec = IsContainLeftRecursion(g);
    if (isHaveLeftRec) {
        std::cout << "此文法含有左递归" << std::endl;
        //消除左递归
        FixLeftRecursion(g);
        //打印文法
        std::cout << "修改后文法G2:($代表空)" << std::endl;
        PrintGrammar(g);
    } else {
        std::cout << "此文法不含有左递归" << std::endl;
    }

    auto re = IsLL1(g);
    if(re){
        std::cout << "本文法是LL1文法" << std::endl;
    } else {
        std::cout << "本文法不是LL1文法" << std::endl;
        exit(0);
    }

    //打印follow & first
    std::cout << "Follow 集 & First 集" << std::endl;
    PrintAllFollowAndFirst(g);

    //打印预测分析表
    std::cout << "预测分析表 : " << std::endl;
    PrintLL1AnalyseTable(g);

    //分析过程
    std::cout << "分析过程 : " << std::endl;
    auto result = Analyse(g, "abc" , 'S');
    std::cout << result << std::endl;
    return 0;
}