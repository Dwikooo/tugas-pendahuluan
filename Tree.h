#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;


typedef int infotype;
typedef struct ElemenTree *adrNode;

struct ElemenTree{
    infotype info;
    adrNode LeftChild;
    adrNode RightChild;
};

struct root{
    adrNode first;
};

adrNode newNode_1301210252(infotype X);
adrNode findNode_1301210252(adrNode root, infotype X);
void insertNode_1301210252(adrNode &root, adrNode P);
void printPreOrder_1301210252(adrNode root);
void printDescendant_1301210252(adrNode root, infotype X);
int sumNode(adrNode root);
int countLeaves_1301210252(adrNode root);
int heightTree_1301210252(adrNode root);

#endif // TREE_H_INCLUDED
