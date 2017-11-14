/*
 * File   : type
 * Author : KsGin 
 * Date   : 2017/11/13
 */

#ifndef LL1GRAMMER_SYNTAX_ANALYZER_TYPE_H
#define LL1GRAMMER_SYNTAX_ANALYZER_TYPE_H


/**
 * 头文件导入
 */
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <stack>

/**
 * 产生式定义  Left= right1 | right2 | right3 | ...
 */

typedef char Left;
typedef std::string Right;

typedef struct GNode {
public:
    Left left = ' '; //文法左部
    std::vector<Right> right; //文法右部
} GNode;

/**
 * 文法定义
 */

typedef std::vector<GNode> Grammar;

/**
 * 表定义
 */
typedef std::vector<std::vector<Right>> Table;

/**
 * 符号定义
 */
typedef char Symbol;
#endif //LL1GRAMMER_SYNTAX_ANALYZER_TYPE_H
