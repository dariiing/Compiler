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
        resultEval = evalAST(node->left) / evalAST(node->right);
    }
    else if (node->value == POW)
    {
        resultEval = evalAST(node->left) ^ evalAST(node->right);
    }
    else if (node->value == MOD)
    {
        resultEval = evalAST(node->left) % evalAST(node->right);
    }
    else
    {
        printf("error if-else evalAST\n");
        exit(-1);
    }
    /*
    switch (node->value)
    {
    case NUMBER:
    {
        resp = ((info *)node)->val;
        break;
    }
    case ADD:
    {
        resp = evalAST(node->left) + evalAST(node->right);
        break;
    }
    case POW:
    {
        resp = evalAST(node->left) ^ evalAST(node->right);
        break;
    }
    case DIV:
    {
        resp = evalAST(node->left) / evalAST(node->right);
        break;
    }
    case MUL:
    {
        resp = evalAST(node->left) * evalAST(node->right);
        break;
    }
    case MOD:
    {
        resp = evalAST(node->left) % evalAST(node->right);
        break;
    }
    case SUB:
    {
        resp = evalAST(node->left) - evalAST(node->right);
        break;
    }
    default:
    {
        printf("cv e gresit pa\n");
        exit(-1);
        break;
    }
    }
    */
    return resultEval;
}