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

#endif //LL1GRAMMER_SYNTAX_ANALYZER_UTIL_H
