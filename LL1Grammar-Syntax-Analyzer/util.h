/*
 * File   : util
 * Author : KsGin 
 * Date   : 2017/11/13
 */

#ifndef LL1GRAMMER_SYNTAX_ANALYZER_UTIL_H
#define LL1GRAMMER_SYNTAX_ANALYZER_UTIL_H

#include "type.h"

/**
 * 初始化一个产生式
 * @param gstr 产生式字符串
 * @return 文法推导
 */
GNode InitGNode(std::string gstr);

/**
 * 初始化一个文法
 * @param g 文法
 * @return 文法
 */
Grammar InitGrammar(Grammar g);

/**
 * 求first集合
 * @param g 文法
 * @param symbol 符号
 * @return first集合
 */
std::vector<Symbol> GetFirstSet(Symbol symbol , Grammar g);

/**
 * 求follow集合
 * @param g 文法
 * @param symbol 符号
 * @return follow集合
 */
std::vector<Symbol> GetFollowSet(Symbol symbol , Grammar g);

/**
 * 获得所有终结符
 * @param g
 * @return
 */
std::vector<Symbol> GetAllFinalSymbol(Grammar g);

/**
 * 获得所有非终结符
 * @param g
 * @return
 */
std::vector<Symbol> GetAllNotFinalSymbol(Grammar g);

/**
 * 是否是终结符
 * @param symbol 符号
 * @param g 文法
 * @return true | false
 */
bool IsFinalSymbol(Symbol symbol , Grammar g);

/**
 * 寻找非终结符对应的产生式
 * @param symbol 非终结符
 * @param g 文法
 * @return 产生式
 */
GNode FindGNode(Symbol symbol , Grammar g);

/**
 * 打印First集
 * @param s 非终结符号
 * @param vc
 */
void PrintFirst(Symbol s , std::vector<Symbol> first);

/**
 * 打印Follow集
 * @param s 非终结符号
 * @param follow 非终结符号的follow集
 */
void PrintFollow(Symbol s , std::vector<Symbol> follow);

/**
 * 打印文法中所有非终结符的first & follow
 * @param g 文法
 */
void PrintAllFollowAndFirst(Grammar g);

/**
 * 打印文法
 * @param g 文法
 */
void PrintGrammar(Grammar g);

/**
 * 获得预测分析表 LL1表
 * @param g
 * @return
 */
Table GetLL1AnalyseTable(Grammar g);

/**
 * 打印文法的LL1预测分析表
 * @param g
 */
void PrintLL1AnalyseTable(Grammar g);

/**
 * 分析总控程序
 * @param g 文法
 * @param str 待分析串
 */
std::string Analyse(Grammar g , std::string str , Symbol start);

/**
 * 获得栈内内容
 * @param sta 栈
 * @return 字符串
 */
std::string GetStackContent(std::stack<Symbol> sta);


/**
 * 判断文法是否含有左递归
 * @param g 文法
 * @return 是/否
 */
bool IsContainLeftRecursion(Grammar g);

/**
 * 判断文法是否含有左递归的子功能方法
 * @param g 文法
 * @param gn 产生式
 * @param leftSymbol 左值
 * @return 是/否
 */
bool IsFindLeftSymbol(Grammar g, GNode gn , Left leftSymbol , std::set<Symbol>& visitedNotFinalSet);


/**
 * 消除左递归
 * @param g 文法
 */
void FixLeftRecursion(Grammar& g);

/**
 * 消除左递归子功能方法
 * @param g 文法
 * @param gn 产生式
 */
void AppendRight(Grammar g , GNode& gn, std::set<Symbol> &visitedNotFinalSet);

/**
 * 找到有用的非终结符
 * @param g 文法
 * @param usedSymbols 有用的非终结符
 * @param symbol 当前查找到的符号
 */
void GetUsedNotFinalSymbol(Grammar g , std::set<Symbol> &usedSymbols , Symbol symbol);

/**
 * 判断文法是否是LL1
 * @param g 文法
 * @return 是/否
 */
bool IsLL1(Grammar g);
#endif //LL1GRAMMER_SYNTAX_ANALYZER_UTIL_H
