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
 * 初始化一个文法
 * @param g 文法
 * @return 文法
 */
Grammar InitGrammar(Grammar g){
    Grammar ng;
    for (auto gn : g){
        bool isInsert = false;
        for (auto &ngn : ng){
            if(ngn.left == gn.left){
                for (const auto &n : gn.right){
                    ngn.right.push_back(n);
                }
                isInsert = true;
            }
        }
        if (!isInsert) ng.push_back(gn);
    }
    return ng;
}


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
    std::set<Symbol> follow;

    //找到所有包含symbol的右部
    for (auto gn : g){
        for (auto r : gn.right){
            auto it = r.end();
            if((it = std::find(r.begin() , r.end() , symbol)) != std::end(r)){
                if(it + 1 != std::end(r)) { //如果它不在最后的位置
                    auto itt = it + 1; //找到他的下一个位置
                    if(IsFinalSymbol(*itt , g)) follow.insert(*itt); //如果下一个符号是终结符，则加入集合
                    else {  //如果不是终结符
                        auto v = GetFirstSet(*itt , g); //求他的first
                        while (itt+1 != std::end(r) && std::find(v.begin() , v.end() , '$') != std::end(v)){
                            //如果他的first有空字符，则添加除空字符之外的其他符号  且继续寻找下一个
                            follow.insert(v.begin() , v.end());
                            ++itt;
                            v = GetFirstSet(*itt , g);
                        }
                        follow.insert(v.begin() , v.end());
                        if(std::find(v.begin() , v.end() , '$') != std::end(v)) //最后一个非终结符仍有$（空符号）
                            if(gn.left != symbol){
                                auto tmpf = GetFollowSet(gn.left , g);
                                follow.insert(tmpf.begin(),tmpf.end());
                            }
                    }
                } else {
                    if(gn.left != symbol){
                        auto tmpf = GetFollowSet(gn.left , g);
                        follow.insert(tmpf.begin(),tmpf.end());
                    }
                }
            }
        }
    }

    //去掉follow集中的空符号
    follow.erase('$');

    return std::vector<Symbol>(follow.begin() , follow.end());
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
    if(first.empty()) {
        std::cout << " } " << std::endl;
        return;
    }
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
    std::cout << "Follow(" << s << ") = { " ;
    if(follow.empty()) {
        std::cout << " } " << std::endl;
        return;
    }
    for (int i = 0; i < follow.size()-1; ++i) {
        std::cout << follow[i] << " , ";
    }
    std::cout << follow[follow.size()-1] << " }" << std::endl;
}

/**
 * 打印文法中所有非终结符的first & follow
 * @param g 文法
 */
void PrintAllFollowAndFirst(Grammar g){
    for (auto gn : g) {
        PrintFirst(gn.left , GetFirstSet(gn.left , g));
        PrintFollow(gn.left , GetFollowSet(gn.left , g));
    }
}