/*
 * File   : util
 * Author : KsGin 
 * Date   : 2017/11/13
 */

#include "util.h"

/**
 * 产生式初始化
 * @param gstr 产生式输入串
 * @return 产生式节点
 */
GNode InitGNode(std::string gstr){
    GNode gNode;
    gNode.left = gstr[0];
    gNode.right = std::vector<std::string>(0);
    int begin = 3;
    int length = 1;
    for (int i = 4 ; i < gstr.size() ; ++i) {
        if(gstr[i] == '|'){
            gNode.right.push_back(gstr.substr(static_cast<unsigned long>(begin), static_cast<unsigned long>(length)));
            begin = i+1;
            length = 0;
        }else {
            ++length;
        }
    }
    if (length) gNode.right.push_back(gstr.substr(static_cast<unsigned long>(begin), static_cast<unsigned long>(length)));
    return gNode;
};


/**
 * 求first集合
 * @param g 文法
 * @return first集合
 */
std::vector<Symbol> GetFirstSet(Symbol symbol , Grammar g){
    std::set<Symbol> first;
    auto gn = FindGNode(symbol , g);
    for (auto r : gn.right){
        if(IsFinalSymbol(r[0] , g)){
            first.insert(r[0]);
        } else {
            auto fit = GetFirstSet(r[0] , g);
            first.insert(fit.begin() , fit.end());
        }
    }
    return std::vector<Symbol>(first.begin() , first.end());
}

/**
 * 求follow集合
 * @param g 文法
 * @return follow集合
 */
std::vector<Symbol> GetFollowSet(Symbol symbol , Grammar g){
    std::vector<Symbol> follow(0);

    return follow;
}

/**
 * 是否是终结符
 * @param symbol 符号
 * @param g 文法
 * @return true | false
 */
bool IsFinalSymbol(Symbol symbol  , Grammar g){
    for (auto s : g){
        if(s.left == symbol) return false;
    }
    return true;
}

/**
 * 寻找非终结符对应的产生式
 * @param symbol 非终结符
 * @param g 文法
 * @return 产生式
 */
GNode FindGNode(Symbol symbol , Grammar g){
    if(IsFinalSymbol(symbol , g)) return GNode();   //参数为非终结符
    for (auto gn : g){
        if(gn.left == symbol) return gn;
    }
    return GNode(); //参数不存在
}


/**
 * 打印First集
 * @param s 非终结符号
 * @param vc
 */
void PrintFirst(Symbol s , std::vector<Symbol> first){
    std::cout << "First(" << s << ") = { " ;
    for (int i = 0; i < first.size()-1; ++i) {
        std::cout << first[i] << " , ";
    }
    std::cout << first[first.size()-1] << " }" << std::endl;
}

/**
 * 打印Follow集
 * @param s 非终结符号
 * @param follow 非终结符号的follow集
 */
void PrintFollow(Symbol s , std::vector<Symbol> follow){

}