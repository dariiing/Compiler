#include "code.h"
#include <stdlib.h>
#include <stdio.h>

AstNode *buildAST(DATATYPE value, AstNode *left, AstNode *right)
{
    AstNode *node = (AstNode *)malloc(sizeof(AstNode));

    if (!node)
    {
        printf("error building ast\n");
        exit(-1);
    }
    node->value = value;
    node->left = left;
    node->right = right;
    return node;
}

void freeAST(AstNode *root)
{
    if (root != NULL)
    {
        if (root->left != NULL)
        {
            free(root->left);
        }
        if (root->right != NULL)
        {
            free(root->right);
        }
        free(root);
    }
}

AstNode *addNode(int valoare)
{
    info *obj = (info *)malloc(sizeof(info));

    if (!obj)
    {
        printf("error adding number ast\n");
        exit(-1);
    }

    obj->type = NUMBER;
    obj->val = valoare;

    return (AstNode *)obj;
}

int evalAST(AstNode *node)
{
    int resultEval = 0;

    if (node->value == NUMBER)
    {
        resultEval = ((info *)node)->val;
    }
    else if (node->value == ADD)
    {
        resultEval = evalAST(node->left) + evalAST(node->right);
    }
    else if (node->value == SUB)
    {
        resultEval = evalAST(node->left) - evalAST(node->right);
    }
    else if (node->value == MUL)
    {
        resultEval = evalAST(node->left) * evalAST(node->right);
    }
    else if (node->value == DIV)
    {
        int nod = evalAST(node->right);
        if(nod!= 0){
        resultEval = evalAST(node->left) / evalAST(node->right);
        }
        else{
            printf("Eroare: impartire la 0\n");
            exit(-1);
        }
    }
    else if (node->value == POW)
    {
        resultEval = evalAST(node->left) ^ evalAST(node->right);
    }
    else if (node->value == MOD)
    {
        int nod = evalAST(node->right);
        if(nod!= 0){
        resultEval = evalAST(node->left) % evalAST(node->right);
        }
        else{
            printf("Eroare: impartire la 0\n");
            exit(-1);
        }
    }
    else
    {
        printf("Apelati eval doar cu int\n");
        exit(-1);
    }
    return resultEval;
}
