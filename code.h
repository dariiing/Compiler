typedef enum
{
        ADD = 1,
        SUB,
        DIV,
        MUL,
        MOD,
        POW,
        NUMBER
} DATATYPE;

typedef struct AstNode
{
        DATATYPE value;
        struct AstNode *left;
        struct AstNode *right;

} AstNode;

typedef struct ExprInfo
{
        AstNode *ast;
        DATATYPE type;
        char* idk;
} ExprInfo;

typedef struct info
{
        DATATYPE type;
        int val;
} info;
