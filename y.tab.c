/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include "functii.h"
#include "code.h"

AstNode* buildAST(DATATYPE, AstNode *, AstNode *);
int evalAST(AstNode *);
void freeAST(AstNode*);
AstNode* addNode(int);

extern FILE* yyin;
extern char* yytext;


#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAIN = 258,                    /* MAIN  */
    CLASS = 259,                   /* CLASS  */
    CONST = 260,                   /* CONST  */
    ASSIGN = 261,                  /* ASSIGN  */
    OPR = 262,                     /* OPR  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    DO = 265,                      /* DO  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    RETURN = 270,                  /* RETURN  */
    DIGIT = 271,                   /* DIGIT  */
    EVAL = 272,                    /* EVAL  */
    TYPEOF = 273,                  /* TYPEOF  */
    ID = 274,                      /* ID  */
    TIP = 275,                     /* TIP  */
    VARBOOL = 276,                 /* VARBOOL  */
    STRING = 277,                  /* STRING  */
    INCLUDE = 278,                 /* INCLUDE  */
    NR = 279                       /* NR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define CLASS 259
#define CONST 260
#define ASSIGN 261
#define OPR 262
#define IF 263
#define ELSE 264
#define DO 265
#define WHILE 266
#define FOR 267
#define AND 268
#define OR 269
#define RETURN 270
#define DIGIT 271
#define EVAL 272
#define TYPEOF 273
#define ID 274
#define TIP 275
#define VARBOOL 276
#define STRING 277
#define INCLUDE 278
#define NR 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "limbaj.y"

        char *value;
        ExprInfo ptr;

#line 191 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_CLASS = 4,                      /* CLASS  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_ASSIGN = 6,                     /* ASSIGN  */
  YYSYMBOL_OPR = 7,                        /* OPR  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_DIGIT = 16,                     /* DIGIT  */
  YYSYMBOL_EVAL = 17,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 18,                    /* TYPEOF  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_TIP = 20,                       /* TIP  */
  YYSYMBOL_VARBOOL = 21,                   /* VARBOOL  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_INCLUDE = 23,                   /* INCLUDE  */
  YYSYMBOL_NR = 24,                        /* NR  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_28_ = 28,                       /* '^'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* '.'  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_progr = 42,                     /* progr  */
  YYSYMBOL_headers = 43,                   /* headers  */
  YYSYMBOL_outside_global = 44,            /* outside_global  */
  YYSYMBOL_outside_functii = 45,           /* outside_functii  */
  YYSYMBOL_global = 46,                    /* global  */
  YYSYMBOL_clase = 47,                     /* clase  */
  YYSYMBOL_instr_clasa = 48,               /* instr_clasa  */
  YYSYMBOL_instructiuni_clasa = 49,        /* instructiuni_clasa  */
  YYSYMBOL_stmt_clasa = 50,                /* stmt_clasa  */
  YYSYMBOL_apel_clase = 51,                /* apel_clase  */
  YYSYMBOL_apel_fct = 52,                  /* apel_fct  */
  YYSYMBOL_main = 53,                      /* main  */
  YYSYMBOL_instr_main = 54,                /* instr_main  */
  YYSYMBOL_variabila = 55,                 /* variabila  */
  YYSYMBOL_functii = 56,                   /* functii  */
  YYSYMBOL_functie = 57,                   /* functie  */
  YYSYMBOL_parametri = 58,                 /* parametri  */
  YYSYMBOL_parametru = 59,                 /* parametru  */
  YYSYMBOL_instructiuni = 60,              /* instructiuni  */
  YYSYMBOL_const_ = 61,                    /* const_  */
  YYSYMBOL_stmt = 62,                      /* stmt  */
  YYSYMBOL_eval_type = 63,                 /* eval_type  */
  YYSYMBOL_for_stmt = 64,                  /* for_stmt  */
  YYSYMBOL_for_expr = 65,                  /* for_expr  */
  YYSYMBOL_expr = 66,                      /* expr  */
  YYSYMBOL_conditii = 67                   /* conditii  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,    31,     2,     2,
      32,    33,    29,    25,    34,    26,    38,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    43,    44,    47,    48,    51,    52,    58,
      59,    64,    65,    69,    70,    71,    72,    73,    74,    77,
      78,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      92,    93,    94,    96,    97,    98,   102,   105,   106,   107,
     108,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   127,   128,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   150,   153,   154,   155,   158,   159,   162,   163,   164,
     165,   166,   167,   168,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   182,   183,   184,   185,   186,   187,   190,
     191,   194,   195,   196,   197,   200,   201,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   218,   219,   220,
     221,   222,   223,   224,   225,   226
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "CLASS",
  "CONST", "ASSIGN", "OPR", "IF", "ELSE", "DO", "WHILE", "FOR", "AND",
  "OR", "RETURN", "DIGIT", "EVAL", "TYPEOF", "ID", "TIP", "VARBOOL",
  "STRING", "INCLUDE", "NR", "'+'", "'-'", "'!'", "'^'", "'*'", "'/'",
  "'%'", "'('", "')'", "','", "';'", "'{'", "'}'", "'.'", "'['", "']'",
  "$accept", "progr", "headers", "outside_global", "outside_functii",
  "global", "clase", "instr_clasa", "instructiuni_clasa", "stmt_clasa",
  "apel_clase", "apel_fct", "main", "instr_main", "variabila", "functii",
  "functie", "parametri", "parametru", "instructiuni", "const_", "stmt",
  "eval_type", "for_stmt", "for_expr", "expr", "conditii", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-146)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,  -146,    57,    25,  -146,    44,    54,  -146,    84,    39,
      42,    90,     4,    99,    93,    94,  -146,   149,   156,   145,
     135,   155,   164,   174,   196,    50,  -146,  -146,   181,  -146,
    -146,  -146,  -146,   161,   112,   168,   189,   179,   184,  -146,
    -146,   188,  -146,  -146,  -146,    96,   510,  -146,    73,   202,
     186,   112,  -146,   112,   112,   200,   231,   213,    96,   483,
      96,    96,    96,    96,    96,    96,   226,   218,    96,    14,
     222,  -146,   112,   112,   230,   231,   240,   -19,  -146,   234,
      66,   510,  -146,   208,   208,  -146,  -146,  -146,  -146,   233,
     248,   108,  -146,   119,   250,  -146,  -146,   142,    50,   249,
     131,   236,   254,   231,   342,  -146,    96,  -146,  -146,  -146,
     256,   258,   262,   411,   279,  -146,   263,   276,    75,  -146,
     171,   275,   278,   280,   286,   288,   295,     2,   309,  -146,
     223,  -146,  -146,   299,   510,  -146,  -146,  -146,  -146,    16,
     139,   290,   287,     3,  -146,   177,  -146,   329,   317,   402,
     358,   402,   187,    96,    96,   324,   302,   325,    17,  -146,
    -146,  -146,  -146,   360,  -146,   207,  -146,   314,   316,   419,
     364,  -146,  -146,   376,    19,  -146,   406,   323,    58,   244,
      97,   349,   345,   330,   492,   501,   332,   336,   427,  -146,
      15,   380,  -146,   337,   338,   435,   392,  -146,   343,   350,
     352,   339,   355,   443,   356,   359,   451,   396,  -146,   370,
     483,   109,   402,   402,   402,   357,   394,   371,    37,   400,
     402,  -146,  -146,  -146,  -146,  -146,    96,    96,  -146,   374,
     375,   459,   382,   385,   395,   398,   408,   467,  -146,  -146,
    -146,   414,   422,   430,  -146,  -146,  -146,   440,   448,   475,
    -146,   402,   402,   402,   216,  -146,  -146,   358,   397,   358,
    -146,  -146,   122,    89,   510,   232,  -146,  -146,  -146,  -146,
    -146,  -146,   454,   462,   470,  -146,  -146,  -146,  -146,  -146,
    -146,    68,   482,   486,   268,   402,   284,  -146,  -146,   412,
     489,  -146,  -146,  -146,  -146,  -146,  -146,   426,   153,  -146,
      10,   495,  -146,   497,   502,    96,  -146,   506,   358,  -146,
     510,   358,   305,   321,  -146,  -146
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    41,     0,     8,     0,     9,    47,     0,     0,
       0,     0,     0,     0,     0,     7,    53,    10,     0,    44,
      45,    46,    43,     0,     0,     0,     0,     0,     0,     2,
      52,   115,    49,    50,   114,     0,    48,    42,     0,     0,
       0,    16,    19,    13,     0,     0,    74,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,    20,    14,    15,     0,    74,     0,     0,    70,     0,
       0,    34,   113,   109,   110,   112,   107,   108,   111,     0,
       0,     0,    28,     0,     0,    21,    12,    18,    17,     0,
       0,    72,     0,    74,     0,   116,     0,    26,    27,    25,
       0,     0,     0,     0,     0,    11,     0,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,    84,    39,     0,    33,    29,    23,    24,    22,     0,
       0,     0,     0,     0,    55,     0,    75,     0,     0,    35,
       0,    35,     0,     0,     0,     0,     0,     0,     0,    36,
      38,    37,    98,     0,    63,     0,    73,     0,     0,     0,
       0,    54,    76,     0,     0,   124,    35,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,    85,     0,     0,     0,     0,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,   124,
      34,     0,    35,    35,    35,     0,     0,     0,     0,     0,
      35,    99,   100,    90,    91,    89,     0,    35,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      59,     0,     0,     0,    82,    83,    81,     0,     0,     0,
     125,    35,    35,    35,   118,   120,   122,     0,     0,     0,
     104,   103,     0,     0,    32,     0,    87,    88,    86,    68,
      69,    67,     0,     0,     0,    57,    58,    56,    79,    80,
      78,   118,   120,   122,     0,    35,     0,   102,   101,     0,
       0,    65,    66,    64,   119,   121,   123,    93,     0,    95,
       0,     0,    30,     0,     0,     0,   106,     0,     0,    96,
     105,     0,     0,     0,    94,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,  -146,  -146,  -146,  -146,   490,   -48,   -44,
     413,   -55,  -146,  -146,   536,   -10,   -14,   471,   444,  -138,
    -146,  -103,  -146,  -146,  -146,   -28,  -145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    14,    50,    51,    52,
     129,   177,    39,   130,    10,    53,    26,    77,    78,   145,
     131,   146,   133,   183,   301,    81,   178
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   132,   165,    80,    25,    73,   180,    71,   155,   155,
      18,    40,   179,    93,   102,   103,   305,    59,   156,   156,
      94,   226,    94,   191,    97,   207,   306,   161,     1,    71,
       5,   211,    83,    84,    85,    86,    87,    88,    91,    40,
     157,    72,   172,    19,     5,     6,    56,   227,     7,    95,
     228,    95,   192,    71,   208,    22,   260,     4,    40,     6,
     -51,   261,   172,    98,    11,   212,   113,   254,   255,   256,
      23,   213,   214,    12,   -51,   263,   172,    16,   134,    66,
     120,   213,   214,   121,    40,   122,   123,   124,    13,    67,
     142,   215,   125,   126,   143,   128,   212,    21,    22,   105,
     106,   294,   213,   214,   212,    68,   281,   282,   283,    17,
     213,   214,   144,    23,   169,    41,   251,    22,    20,   284,
      44,   286,   252,   253,   289,   184,   185,   188,    45,    27,
     217,    48,    49,    60,    61,   195,    62,    63,    64,    65,
     298,   287,   203,   109,   120,   206,   288,   121,   210,   122,
     123,   124,   110,   106,   163,    28,   125,   126,   143,   128,
     212,    48,   114,   231,   116,   103,   213,   214,   237,    33,
     312,    34,   265,   313,    35,    29,   164,    30,    31,   249,
      32,   172,   120,   172,    36,   121,   304,   122,   123,   124,
     147,   148,   170,    37,   125,   126,   143,   128,   264,    38,
      41,    47,    42,    43,    54,    44,   181,   182,    55,   172,
     172,    56,   120,    45,   171,   121,    57,   122,   123,   124,
      58,    69,   196,    70,   125,   126,   143,   128,   120,   213,
     214,   121,    75,   122,   123,   124,    62,    63,    64,    65,
     125,   126,   127,   128,   197,    41,    79,    89,    90,   120,
      44,    76,   121,    92,   122,   123,   124,    96,    45,   101,
     159,   125,   126,   143,   128,   290,   106,    99,   107,    41,
     104,   111,   112,   120,    44,   117,   121,   310,   122,   123,
     124,   216,    45,   108,   115,   125,   126,   143,   128,   120,
     118,   135,   121,   136,   122,   123,   124,   137,   139,   140,
     141,   125,   126,   143,   128,   297,    41,   149,   167,   168,
     120,    44,   151,   121,   150,   122,   123,   124,   152,    45,
     153,   299,   125,   126,   143,   128,   120,   154,   158,   121,
     166,   122,   123,   124,   162,   173,   174,   189,   125,   126,
     143,   128,   314,    41,   190,   186,   187,   120,    44,   198,
     121,   199,   122,   123,   124,   218,    45,   106,   315,   125,
     126,   127,   128,   120,   219,   220,   121,   223,   122,   123,
     124,   224,   232,   233,   241,   125,   126,   143,   128,    41,
     238,   193,   194,    41,    44,   201,   202,   239,    44,   240,
     242,   244,    45,   257,   245,    41,    45,   204,   205,    41,
      44,   229,   230,   250,    44,   258,   262,   259,    45,   266,
     267,    41,    45,   235,   236,    41,    44,   247,   248,   269,
      44,    41,   270,   175,    45,    41,    44,   209,    45,   285,
      44,   300,   271,   272,   176,   303,    60,    61,   176,    62,
      63,    64,    65,   273,    60,    61,   138,    62,    63,    64,
      65,   275,    60,    61,   200,    62,    63,    64,    65,   276,
      60,    61,   225,    62,    63,    64,    65,   277,    60,    61,
     234,    62,    63,    64,    65,   278,    60,    61,   243,    62,
      63,    64,    65,   279,    60,    61,   246,    62,    63,    64,
      65,   291,    60,    61,   268,    62,    63,    64,    65,   292,
      60,    61,   274,    62,    63,    64,    65,   293,    60,    61,
     280,    62,    63,    64,    65,   295,    82,    60,    61,   296,
      62,    63,    64,    65,   302,   221,    60,    61,   307,    62,
      63,    64,    65,   308,   222,    60,    61,   309,    62,    63,
      64,    65,   311,   160,    74,    15,   100,   119
};

static const yytype_int16 yycheck[] =
{
      28,   104,   140,    58,    14,    53,   151,    51,     6,     6,
       6,    25,   150,    68,    33,    34,     6,    45,    16,    16,
       6,     6,     6,     6,    72,     6,    16,   130,    23,    73,
       5,   176,    60,    61,    62,    63,    64,    65,    66,    53,
      38,    51,   145,    39,     5,    20,    32,    32,    23,    35,
      35,    35,    35,    97,    35,     5,    19,     0,    72,    20,
      35,    24,   165,    73,    20,     7,    94,   212,   213,   214,
      20,    13,    14,    19,    35,   220,   179,    35,   106,     6,
       5,    13,    14,     8,    98,    10,    11,    12,     4,    16,
      15,    33,    17,    18,    19,    20,     7,     4,     5,    33,
      34,    33,    13,    14,     7,    32,   251,   252,   253,    19,
      13,    14,    37,    20,   142,    19,     7,     5,    19,   257,
      24,   259,    13,    14,    35,   153,   154,   155,    32,    35,
      33,    19,    20,    25,    26,   163,    28,    29,    30,    31,
     285,    19,   170,    35,     5,   173,    24,     8,   176,    10,
      11,    12,    33,    34,    15,     6,    17,    18,    19,    20,
       7,    19,    20,   191,    33,    34,    13,    14,   196,    24,
     308,    36,   227,   311,    19,    19,    37,    21,    22,   207,
      24,   284,     5,   286,    20,     8,    33,    10,    11,    12,
      19,    20,    15,    19,    17,    18,    19,    20,   226,     3,
      19,    40,    21,    22,    36,    24,    19,    20,    19,   312,
     313,    32,     5,    32,    37,     8,    32,    10,    11,    12,
      32,    19,    15,    37,    17,    18,    19,    20,     5,    13,
      14,     8,    32,    10,    11,    12,    28,    29,    30,    31,
      17,    18,    19,    20,    37,    19,    33,    21,    22,     5,
      24,    20,     8,    35,    10,    11,    12,    35,    32,    19,
      37,    17,    18,    19,    20,    33,    34,    37,    35,    19,
      36,    21,    22,     5,    24,    39,     8,   305,    10,    11,
      12,    37,    32,    35,    35,    17,    18,    19,    20,     5,
      36,    35,     8,    35,    10,    11,    12,    35,    19,    36,
      24,    17,    18,    19,    20,    37,    19,    32,    21,    22,
       5,    24,    32,     8,    36,    10,    11,    12,    32,    32,
      32,    37,    17,    18,    19,    20,     5,    32,    19,     8,
      40,    10,    11,    12,    35,     6,    19,    35,    17,    18,
      19,    20,    37,    19,    19,    21,    22,     5,    24,    35,
       8,    35,    10,    11,    12,     6,    32,    34,    37,    17,
      18,    19,    20,     5,    19,    35,     8,    35,    10,    11,
      12,    35,    35,    35,    35,    17,    18,    19,    20,    19,
      37,    21,    22,    19,    24,    21,    22,    37,    24,    37,
      35,    35,    32,    36,    35,    19,    32,    21,    22,    19,
      24,    21,    22,    33,    24,    11,     6,    36,    32,    35,
      35,    19,    32,    21,    22,    19,    24,    21,    22,    37,
      24,    19,    37,    21,    32,    19,    24,    21,    32,    32,
      24,    19,    37,    35,    32,     9,    25,    26,    32,    28,
      29,    30,    31,    35,    25,    26,    35,    28,    29,    30,
      31,    37,    25,    26,    35,    28,    29,    30,    31,    37,
      25,    26,    35,    28,    29,    30,    31,    37,    25,    26,
      35,    28,    29,    30,    31,    35,    25,    26,    35,    28,
      29,    30,    31,    35,    25,    26,    35,    28,    29,    30,
      31,    37,    25,    26,    35,    28,    29,    30,    31,    37,
      25,    26,    35,    28,    29,    30,    31,    37,    25,    26,
      35,    28,    29,    30,    31,    33,    33,    25,    26,    33,
      28,    29,    30,    31,    35,    33,    25,    26,    33,    28,
      29,    30,    31,    36,    33,    25,    26,    35,    28,    29,
      30,    31,    36,   130,    54,     9,    75,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    20,    23,    44,    46,
      55,    20,    19,     4,    47,    55,    35,    19,     6,    39,
      19,     4,     5,    20,    45,    56,    57,    35,     6,    19,
      21,    22,    24,    24,    36,    19,    20,    19,     3,    53,
      57,    19,    21,    22,    24,    32,    66,    40,    19,    20,
      48,    49,    50,    56,    36,    19,    32,    32,    32,    66,
      25,    26,    28,    29,    30,    31,     6,    16,    32,    19,
      37,    50,    56,    49,    48,    32,    20,    58,    59,    33,
      52,    66,    33,    66,    66,    66,    66,    66,    66,    21,
      22,    66,    35,    52,     6,    35,    35,    49,    56,    37,
      58,    19,    33,    34,    36,    33,    34,    35,    35,    35,
      33,    21,    22,    66,    20,    35,    33,    39,    36,    59,
       5,     8,    10,    11,    12,    17,    18,    19,    20,    51,
      54,    61,    62,    63,    66,    35,    35,    35,    35,    19,
      36,    24,    15,    19,    37,    60,    62,    19,    20,    32,
      36,    32,    32,    32,    32,     6,    16,    38,    19,    37,
      51,    62,    35,    15,    37,    60,    40,    21,    22,    66,
      15,    37,    62,     6,    19,    21,    32,    52,    67,    60,
      67,    19,    20,    64,    66,    66,    21,    22,    66,    35,
      19,     6,    35,    21,    22,    66,    15,    37,    35,    35,
      35,    21,    22,    66,    21,    22,    66,     6,    35,    21,
      66,    67,     7,    13,    14,    33,    37,    33,     6,    19,
      35,    33,    33,    35,    35,    35,     6,    32,    35,    21,
      22,    66,    35,    35,    35,    21,    22,    66,    37,    37,
      37,    35,    35,    35,    35,    35,    35,    21,    22,    66,
      33,     7,    13,    14,    67,    67,    67,    36,    11,    36,
      19,    24,     6,    67,    66,    52,    35,    35,    35,    37,
      37,    37,    35,    35,    35,    37,    37,    37,    35,    35,
      35,    67,    67,    67,    60,    32,    60,    19,    24,    35,
      33,    37,    37,    37,    33,    33,    33,    37,    67,    37,
      19,    65,    35,     9,    33,     6,    16,    33,    36,    35,
      66,    36,    60,    60,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     7,     6,     1,     2,     2,     1,     3,     3,     1,
       2,     3,     5,     5,     5,     4,     4,     4,     3,     5,
       7,     4,     5,     3,     1,     0,     6,     2,     2,     1,
       1,     2,     5,     4,     4,     4,     4,     3,     5,     5,
       5,     0,     2,     1,     8,     7,    11,    11,    11,    10,
      10,    10,     9,     8,    12,    12,    12,    11,    11,    11,
       1,     3,     2,     5,     0,     1,     2,     4,     6,     6,
       6,     5,     5,     5,     1,     3,     5,     5,     5,     4,
       4,     4,     3,     7,    11,     7,     9,    11,     2,     4,
       4,     4,     4,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     4,     1,     3,     5,
       3,     5,     3,     5,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* progr: headers outside_global clase outside_functii main  */
#line 40 "limbaj.y"
                                                            {printf("program corect sintactic\n");}
#line 1474 "y.tab.c"
    break;

  case 21: /* stmt_clasa: TIP ID ';'  */
#line 81 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1480 "y.tab.c"
    break;

  case 22: /* stmt_clasa: TIP ID ASSIGN expr ';'  */
#line 82 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].ptr).idk); verif_type_var((yyvsp[-3].value),(yyvsp[-1].ptr).idk);}
#line 1486 "y.tab.c"
    break;

  case 23: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 83 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1492 "y.tab.c"
    break;

  case 24: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 84 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1498 "y.tab.c"
    break;

  case 25: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 85 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].ptr).idk);}
#line 1504 "y.tab.c"
    break;

  case 26: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 86 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1510 "y.tab.c"
    break;

  case 27: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 87 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1516 "y.tab.c"
    break;

  case 28: /* stmt_clasa: ID DIGIT ';'  */
#line 88 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1522 "y.tab.c"
    break;

  case 29: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 89 "limbaj.y"
                                                      {search_function((yyvsp[-4].value));}
#line 1528 "y.tab.c"
    break;

  case 41: /* variabila: TIP ID  */
#line 112 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1534 "y.tab.c"
    break;

  case 42: /* variabila: TIP ID '[' NR ']'  */
#line 113 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1540 "y.tab.c"
    break;

  case 43: /* variabila: TIP ID ASSIGN NR  */
#line 114 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1546 "y.tab.c"
    break;

  case 44: /* variabila: TIP ID ASSIGN ID  */
#line 115 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1552 "y.tab.c"
    break;

  case 45: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 116 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1558 "y.tab.c"
    break;

  case 46: /* variabila: TIP ID ASSIGN STRING  */
#line 117 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1564 "y.tab.c"
    break;

  case 47: /* variabila: CONST TIP ID  */
#line 118 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1570 "y.tab.c"
    break;

  case 48: /* variabila: CONST TIP ID ASSIGN expr  */
#line 119 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].ptr).idk); verif_type_var((yyvsp[-2].value),(yyvsp[0].ptr).idk);}
#line 1576 "y.tab.c"
    break;

  case 49: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 120 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1582 "y.tab.c"
    break;

  case 50: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 121 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1588 "y.tab.c"
    break;

  case 54: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 131 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), ""); }
#line 1594 "y.tab.c"
    break;

  case 55: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 132 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), ""); }
#line 1600 "y.tab.c"
    break;

  case 56: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'  */
#line 133 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].ptr).idk); }
#line 1606 "y.tab.c"
    break;

  case 57: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'  */
#line 134 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1612 "y.tab.c"
    break;

  case 58: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}'  */
#line 135 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1618 "y.tab.c"
    break;

  case 59: /* functie: TIP ID '(' parametri ')' '{' RETURN expr ';' '}'  */
#line 136 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].ptr).idk); }
#line 1624 "y.tab.c"
    break;

  case 60: /* functie: TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'  */
#line 137 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value)); }
#line 1630 "y.tab.c"
    break;

  case 61: /* functie: TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'  */
#line 138 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value)); }
#line 1636 "y.tab.c"
    break;

  case 62: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 139 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));  }
#line 1642 "y.tab.c"
    break;

  case 63: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 140 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));  }
#line 1648 "y.tab.c"
    break;

  case 64: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'  */
#line 141 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].ptr).idk); }
#line 1654 "y.tab.c"
    break;

  case 65: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'  */
#line 142 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1660 "y.tab.c"
    break;

  case 66: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}'  */
#line 143 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1666 "y.tab.c"
    break;

  case 67: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN expr ';' '}'  */
#line 144 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].ptr).idk);  }
#line 1672 "y.tab.c"
    break;

  case 68: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'  */
#line 145 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value));  }
#line 1678 "y.tab.c"
    break;

  case 69: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'  */
#line 146 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value));  }
#line 1684 "y.tab.c"
    break;

  case 72: /* parametru: TIP ID  */
#line 153 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1690 "y.tab.c"
    break;

  case 73: /* parametru: TIP ID '[' NR ']'  */
#line 154 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1696 "y.tab.c"
    break;

  case 74: /* parametru: %empty  */
#line 155 "limbaj.y"
                                {par_fct("", "");}
#line 1702 "y.tab.c"
    break;

  case 77: /* const_: CONST TIP ID ';'  */
#line 162 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1708 "y.tab.c"
    break;

  case 78: /* const_: CONST TIP ID ASSIGN expr ';'  */
#line 163 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].ptr).idk);}
#line 1714 "y.tab.c"
    break;

  case 79: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 164 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1720 "y.tab.c"
    break;

  case 80: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 165 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1726 "y.tab.c"
    break;

  case 85: /* stmt: TIP ID ';'  */
#line 173 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1732 "y.tab.c"
    break;

  case 86: /* stmt: TIP ID ASSIGN expr ';'  */
#line 174 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].ptr).idk); verif_type_var((yyvsp[-3].value),(yyvsp[-1].ptr).idk);}
#line 1738 "y.tab.c"
    break;

  case 87: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 175 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1744 "y.tab.c"
    break;

  case 88: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 176 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1750 "y.tab.c"
    break;

  case 89: /* stmt: ID ASSIGN expr ';'  */
#line 177 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].ptr).idk);}
#line 1756 "y.tab.c"
    break;

  case 90: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 178 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1762 "y.tab.c"
    break;

  case 91: /* stmt: ID ASSIGN STRING ';'  */
#line 179 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1768 "y.tab.c"
    break;

  case 92: /* stmt: ID DIGIT ';'  */
#line 180 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1774 "y.tab.c"
    break;

  case 99: /* eval_type: EVAL '(' expr ')'  */
#line 190 "limbaj.y"
                              {printf("output eval: %d\n", evalAST((yyvsp[-1].ptr).ast)); freeAST((yyvsp[-1].ptr).ast);}
#line 1780 "y.tab.c"
    break;

  case 101: /* for_stmt: TIP ID ASSIGN NR  */
#line 194 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1786 "y.tab.c"
    break;

  case 102: /* for_stmt: TIP ID ASSIGN ID  */
#line 195 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1792 "y.tab.c"
    break;

  case 107: /* expr: expr '*' expr  */
#line 205 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(MUL, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = a;}
#line 1798 "y.tab.c"
    break;

  case 108: /* expr: expr '/' expr  */
#line 206 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(DIV, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = b;}
#line 1804 "y.tab.c"
    break;

  case 109: /* expr: expr '+' expr  */
#line 207 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(ADD, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = c;}
#line 1810 "y.tab.c"
    break;

  case 110: /* expr: expr '-' expr  */
#line 208 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(SUB, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = d;}
#line 1816 "y.tab.c"
    break;

  case 111: /* expr: expr '%' expr  */
#line 209 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(MOD, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = e;}
#line 1822 "y.tab.c"
    break;

  case 112: /* expr: expr '^' expr  */
#line 210 "limbaj.y"
                     {(yyval.ptr).ast = buildAST(POW, (yyvsp[-2].ptr).ast, (yyvsp[0].ptr).ast); char* f = (char *)malloc(10); sprintf(f, "%s^%s", (yyvsp[-2].ptr).idk, (yyvsp[0].ptr).idk); (yyval.ptr).idk = f;}
#line 1828 "y.tab.c"
    break;

  case 113: /* expr: '(' expr ')'  */
#line 211 "limbaj.y"
                     {(yyval.ptr) = (yyvsp[-1].ptr); char* f = (char *)malloc(10); sprintf(f, "%s", (yyvsp[-1].ptr).idk); (yyval.ptr).idk = f;}
#line 1834 "y.tab.c"
    break;

  case 114: /* expr: NR  */
#line 212 "limbaj.y"
                     {(yyval.ptr).ast = addNode(atoi((yyvsp[0].value))); (yyval.ptr).idk = (yyvsp[0].value);}
#line 1840 "y.tab.c"
    break;

  case 115: /* expr: ID  */
#line 213 "limbaj.y"
                     {int ct = sVar((yyvsp[0].value)); if(ct > -1 && strstr(table[ct].type, "int") != NULL) {(yyval.ptr).ast = addNode(atoi(table[ct].value));} (yyval.ptr).idk = (yyvsp[0].value);}
#line 1846 "y.tab.c"
    break;

  case 116: /* expr: ID '(' apel_fct ')'  */
#line 214 "limbaj.y"
                          {(yyval.ptr).ast = addNode(atoi((yyvsp[-3].value))); (yyval.ptr).idk = (yyvsp[-3].value);}
#line 1852 "y.tab.c"
    break;


#line 1856 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 229 "limbaj.y"



int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        print_table(errors);
}
