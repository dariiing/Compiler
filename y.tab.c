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

#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int count_lines;

int count = 0; //pt table[]
int q;
char type[10];
char id[10];

struct data{
        char* value;
        char* data_type;
        char* type;
        int line_number;
} table[40];

int search(char *);
void insert_id();
void add_in_table(char);
void insert_type();

#line 97 "y.tab.c"

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
    INCLUDE = 258,                 /* INCLUDE  */
    MAIN = 259,                    /* MAIN  */
    CLASS = 260,                   /* CLASS  */
    CONST = 261,                   /* CONST  */
    ID = 262,                      /* ID  */
    NR = 263,                      /* NR  */
    ASSIGN = 264,                  /* ASSIGN  */
    OPR = 265,                     /* OPR  */
    VARBOOL = 266,                 /* VARBOOL  */
    STRING = 267,                  /* STRING  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    AND = 273,                     /* AND  */
    OR = 274,                      /* OR  */
    RETURN = 275,                  /* RETURN  */
    DIGIT = 276,                   /* DIGIT  */
    TINT = 277,                    /* TINT  */
    TFLOAT = 278,                  /* TFLOAT  */
    TCHAR = 279,                   /* TCHAR  */
    TSTRING = 280,                 /* TSTRING  */
    TBOOL = 281,                   /* TBOOL  */
    TVOID = 282,                   /* TVOID  */
    EVAL = 283,                    /* EVAL  */
    TYPEOF = 284                   /* TYPEOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INCLUDE 258
#define MAIN 259
#define CLASS 260
#define CONST 261
#define ID 262
#define NR 263
#define ASSIGN 264
#define OPR 265
#define VARBOOL 266
#define STRING 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define FOR 272
#define AND 273
#define OR 274
#define RETURN 275
#define DIGIT 276
#define TINT 277
#define TFLOAT 278
#define TCHAR 279
#define TSTRING 280
#define TBOOL 281
#define TVOID 282
#define EVAL 283
#define TYPEOF 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_INCLUDE = 3,                    /* INCLUDE  */
  YYSYMBOL_MAIN = 4,                       /* MAIN  */
  YYSYMBOL_CLASS = 5,                      /* CLASS  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_NR = 8,                         /* NR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_OPR = 10,                       /* OPR  */
  YYSYMBOL_VARBOOL = 11,                   /* VARBOOL  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_DIGIT = 21,                     /* DIGIT  */
  YYSYMBOL_TINT = 22,                      /* TINT  */
  YYSYMBOL_TFLOAT = 23,                    /* TFLOAT  */
  YYSYMBOL_TCHAR = 24,                     /* TCHAR  */
  YYSYMBOL_TSTRING = 25,                   /* TSTRING  */
  YYSYMBOL_TBOOL = 26,                     /* TBOOL  */
  YYSYMBOL_TVOID = 27,                     /* TVOID  */
  YYSYMBOL_EVAL = 28,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 29,                    /* TYPEOF  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '!'  */
  YYSYMBOL_33_ = 33,                       /* '^'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '%'  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_progr = 46,                     /* progr  */
  YYSYMBOL_headers = 47,                   /* headers  */
  YYSYMBOL_outside_global = 48,            /* outside_global  */
  YYSYMBOL_outside_functii = 49,           /* outside_functii  */
  YYSYMBOL_global = 50,                    /* global  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_datatype = 53,                  /* datatype  */
  YYSYMBOL_id_table = 54,                  /* id_table  */
  YYSYMBOL_variabila = 55,                 /* variabila  */
  YYSYMBOL_functii = 56,                   /* functii  */
  YYSYMBOL_functie = 57,                   /* functie  */
  YYSYMBOL_eval_type = 58,                 /* eval_type  */
  YYSYMBOL_ret = 59,                       /* ret  */
  YYSYMBOL_parametri = 60,                 /* parametri  */
  YYSYMBOL_parametru = 61,                 /* parametru  */
  YYSYMBOL_instructiuni = 62,              /* instructiuni  */
  YYSYMBOL_const_ = 63,                    /* const_  */
  YYSYMBOL_stmt = 64,                      /* stmt  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_68_6 = 68,                      /* $@6  */
  YYSYMBOL_69_7 = 69,                      /* $@7  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_71_9 = 71,                      /* $@9  */
  YYSYMBOL_72_10 = 72,                     /* $@10  */
  YYSYMBOL_for_stmt = 73,                  /* for_stmt  */
  YYSYMBOL_for_expr = 74,                  /* for_expr  */
  YYSYMBOL_operator = 75,                  /* operator  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_comparatii = 77,                /* comparatii  */
  YYSYMBOL_conditii = 78,                  /* conditii  */
  YYSYMBOL_apel_fct = 79,                  /* apel_fct  */
  YYSYMBOL_clase = 80,                     /* clase  */
  YYSYMBOL_instr_clasa = 81,               /* instr_clasa  */
  YYSYMBOL_main = 82                       /* main  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
       2,     2,     2,    32,     2,     2,     2,    36,     2,     2,
      37,    38,    34,    30,    44,    31,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    58,    59,    65,
      66,    67,    67,    68,    68,    69,    72,    73,    74,    75,
      76,    77,    80,    83,    84,    85,    86,    87,    92,    93,
      94,    95,    98,    99,   100,   101,   104,   105,   108,   109,
     110,   113,   114,   117,   118,   119,   122,   123,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   147,   148,   149,   150,   151,
     152,   153,   156,   157,   158,   159,   162,   163,   166,   167,
     170,   171,   172,   173,   174,   177,   180,   181,   182,   185,
     186,   192,   193,   197,   198,   199,   200,   206
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
  "\"end of file\"", "error", "\"invalid token\"", "INCLUDE", "MAIN",
  "CLASS", "CONST", "ID", "NR", "ASSIGN", "OPR", "VARBOOL", "STRING", "IF",
  "ELSE", "DO", "WHILE", "FOR", "AND", "OR", "RETURN", "DIGIT", "TINT",
  "TFLOAT", "TCHAR", "TSTRING", "TBOOL", "TVOID", "EVAL", "TYPEOF", "'+'",
  "'-'", "'!'", "'^'", "'*'", "'/'", "'%'", "'('", "')'", "';'", "'['",
  "']'", "'{'", "'}'", "','", "$accept", "progr", "headers",
  "outside_global", "outside_functii", "global", "$@1", "$@2", "datatype",
  "id_table", "variabila", "functii", "functie", "eval_type", "ret",
  "parametri", "parametru", "instructiuni", "const_", "stmt", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "for_stmt", "for_expr",
  "operator", "expr", "comparatii", "conditii", "apel_fct", "clase",
  "instr_clasa", "main", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,  -105,    43,   375,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,    11,    16,    60,    46,    50,    53,  -105,
     175,   175,   175,    82,   132,  -105,    55,  -105,    -1,  -105,
      56,    50,   -25,  -105,   -17,    34,    86,   175,   102,    50,
     163,  -105,   175,  -105,    24,   103,  -105,    72,    75,   175,
      76,   400,    85,  -105,    87,  -105,    94,   175,  -105,    96,
    -105,  -105,  -105,  -105,  -105,    92,   131,  -105,  -105,  -105,
     189,    -9,   105,    98,   106,   107,    50,   139,   422,   400,
    -105,  -105,   108,   400,   112,   175,  -105,  -105,  -105,   111,
      50,   144,   122,    10,    10,   444,    10,   451,     0,   114,
     189,   444,   163,  -105,   124,   121,   133,    12,  -105,     1,
     172,  -105,  -105,    37,   156,    15,   135,   189,    50,   259,
     140,   168,   184,   154,   479,   155,  -105,  -105,    52,   166,
    -105,   167,   444,   165,   485,  -105,   170,   178,    69,   179,
     182,    10,    10,    10,    10,   181,    50,   215,   216,   192,
      38,   222,    10,  -105,  -105,    52,  -105,  -105,   202,   206,
      10,    10,    10,    10,    10,   207,  -105,  -105,   281,   213,
     208,   209,   449,   210,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,   444,     2,   214,   444,  -105,  -105,    54,
     219,   228,   229,   230,   231,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,   487,  -105,   237,  -105,  -105,  -105,
    -105,   303,    10,   325,  -105,  -105,   248,  -105,  -105,  -105,
    -105,  -105,  -105,   232,  -105,   487,  -105,   263,   235,  -105,
       5,   240,   236,   250,   249,   251,    10,  -105,   253,  -105,
     256,   444,  -105,    52,  -105,   444,  -105,   347,   369,  -105,
    -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     6,     1,     3,    13,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     5,     0,     0,    15,
       0,    45,    45,     0,     8,    11,     0,    22,    23,     9,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       7,    31,     0,    10,     0,     0,    14,    43,     0,    45,
       0,     0,     0,    29,     0,     2,     0,     0,    28,     0,
      89,    88,    26,    27,    25,     0,     0,    36,    42,    37,
       0,    22,     0,     0,     0,     0,     0,     0,   103,   106,
      57,    46,     0,     0,     0,    45,    30,    12,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,   105,   104,    47,     0,     0,     0,     0,    44,     0,
       0,    75,    99,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    73,    69,     0,
     102,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,    64,    66,    62,    60,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    68,   101,     0,     0,
       0,     0,     0,     0,    55,    56,    54,    53,    76,   100,
      95,    96,    97,     0,     0,     0,     0,    85,    84,     0,
       0,     0,     0,     0,     0,    72,    74,    92,    93,    90,
      91,    94,    70,   107,     0,    33,     0,    51,    52,    50,
      49,     0,     0,     0,    83,    82,     0,    65,    67,    63,
      61,    39,    40,     0,    38,     0,    32,    77,     0,    79,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    35,
       0,     0,    80,     0,    86,     0,    34,     0,     0,    78,
      81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   125,   -16,
       9,   -21,     7,  -105,    67,   -18,   244,   -73,  -105,   -77,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     -44,  -104,   -65,   -89,  -105,  -105,   217,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    15,    38,    16,    42,    20,   118,    77,
      18,    78,    41,    19,   223,    32,    33,    79,    80,    81,
     125,   194,   193,   191,   192,   165,   158,   159,   123,   231,
     114,   129,   115,   116,   113,    24,    82,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      64,    28,   103,    40,    34,   101,   139,   120,    44,   124,
     134,   134,    92,    48,   236,    47,     1,    60,    61,    49,
     156,    50,   119,    56,   103,    26,   237,    49,    93,    30,
     173,    60,    61,   143,   144,    62,    63,    85,    85,    45,
     135,   135,   103,     4,    53,   187,   188,    58,    21,   112,
     133,    59,    25,    22,    91,   128,    49,    27,   102,   168,
      98,   214,   215,   190,    86,    23,   138,   107,     7,     8,
       9,    10,    11,    12,   109,   140,    51,    53,   181,   182,
     155,   141,   160,   161,    91,    58,   162,   163,   164,    35,
     172,   103,    29,    52,    43,    46,   206,   179,   180,   160,
     161,    91,   147,   162,   163,   164,    54,    86,   176,    58,
     211,    65,    66,   213,    67,    69,   197,   198,   199,   200,
     201,    60,    61,   228,    84,   126,   127,    83,    17,   103,
     184,    85,   244,    88,   103,    87,   103,    36,    37,    89,
      95,    17,    94,    96,    97,    17,    31,    31,    99,    39,
     106,   104,   108,   110,     7,     8,     9,    10,    11,    12,
     224,   111,    39,   130,   131,    39,   142,    17,   247,    57,
     103,   103,   248,   145,    31,   132,    76,   150,   149,    60,
      61,   224,    39,   136,   137,     7,     8,     9,    10,    11,
      12,   151,   243,   152,   157,    90,    27,     7,     8,     9,
      10,    11,    12,    76,    76,   166,   167,   169,    76,   174,
      31,     7,     8,     9,    10,    11,    12,   175,   177,   117,
      71,   178,   122,   183,   124,    90,    72,    39,    73,    74,
      75,   189,   185,   204,   186,     7,     8,     9,    10,    11,
      12,   195,   146,   117,    71,   196,   202,   207,   208,   210,
      72,   212,    73,    74,    75,   230,   205,   225,   216,     7,
       8,     9,    10,    11,    12,   117,    71,   217,   218,   219,
     220,   232,    72,   235,    73,    74,    75,   234,   238,   239,
     226,     7,     8,     9,    10,    11,    12,   117,    71,   240,
     242,   241,   233,    68,    72,   245,    73,    74,    75,   246,
     105,     0,   148,     7,     8,     9,    10,    11,    12,   117,
      71,     0,     0,     0,     0,     0,    72,     0,    73,    74,
      75,     0,     0,     0,   203,     7,     8,     9,    10,    11,
      12,   117,    71,     0,     0,     0,     0,     0,    72,     0,
      73,    74,    75,     0,     0,     0,   227,     7,     8,     9,
      10,    11,    12,   117,    71,     0,     0,     0,     0,     0,
      72,     0,    73,    74,    75,     0,     0,     0,   229,     7,
       8,     9,    10,    11,    12,   117,    71,     0,     5,     0,
       0,     6,    72,     0,    73,    74,    75,     0,     0,     0,
     249,     7,     8,     9,    10,    11,    12,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    70,    71,     0,     0,
       0,     0,   250,    72,     0,    73,    74,    75,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,   100,    71,
       0,     0,     0,     0,     0,    72,     0,    73,    74,    75,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
     117,    71,     0,     0,     0,     0,     0,    72,   121,    73,
      74,    75,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,     0,     7,     8,     9,    10,    11,    12,   160,
     161,     0,     0,   162,   163,   164,    60,    61,   209,     0,
     153,   154,    60,    61,    60,    61,   170,   171,   221,   222
};

static const yytype_int16 yycheck[] =
{
      44,    17,    79,    24,    22,    78,   110,    96,     9,     9,
       9,     9,    21,    38,     9,    31,     3,     7,     8,    44,
     124,    38,    95,    39,   101,    16,    21,    44,    37,    20,
     134,     7,     8,    18,    19,    11,    12,    37,    37,    40,
      39,    39,   119,     0,    37,     7,     8,    40,    37,    93,
      38,    42,     6,    37,    70,    99,    44,     7,    79,   132,
      76,     7,     8,   152,    57,     5,   110,    85,    22,    23,
      24,    25,    26,    27,    90,    38,    42,    70,   143,   144,
     124,    44,    30,    31,   100,    78,    34,    35,    36,     7,
     134,   168,    39,     7,    39,    39,   169,   141,   142,    30,
      31,   117,   118,    34,    35,    36,     4,   100,    39,   102,
     183,     8,    40,   186,    39,    39,   160,   161,   162,   163,
     164,     7,     8,   212,    37,    11,    12,    42,     3,   206,
     146,    37,   236,    41,   211,    39,   213,     5,     6,     8,
      42,    16,    37,    37,    37,    20,    21,    22,     9,    24,
      38,    43,    41,     9,    22,    23,    24,    25,    26,    27,
     204,    39,    37,    39,    43,    40,    10,    42,   241,     6,
     247,   248,   245,    38,    49,    42,    51,     9,    38,     7,
       8,   225,    57,    11,    12,    22,    23,    24,    25,    26,
      27,     7,   236,    39,    39,    70,     7,    22,    23,    24,
      25,    26,    27,    78,    79,    39,    39,    42,    83,    39,
      85,    22,    23,    24,    25,    26,    27,    39,    39,     6,
       7,    39,    97,    42,     9,   100,    13,   102,    15,    16,
      17,     9,    16,    20,    42,    22,    23,    24,    25,    26,
      27,    39,   117,     6,     7,    39,    39,    39,    39,    39,
      13,    37,    15,    16,    17,     7,    43,    20,    39,    22,
      23,    24,    25,    26,    27,     6,     7,    39,    39,    39,
      39,    39,    13,    38,    15,    16,    17,    14,    38,    43,
      43,    22,    23,    24,    25,    26,    27,     6,     7,    39,
      39,    42,   225,    49,    13,    42,    15,    16,    17,    43,
      83,    -1,    43,    22,    23,    24,    25,    26,    27,     6,
       7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    43,    22,    23,    24,    25,    26,
      27,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    43,    22,    23,    24,
      25,    26,    27,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    43,    22,
      23,    24,    25,    26,    27,     6,     7,    -1,     3,    -1,
      -1,     6,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      43,    22,    23,    24,    25,    26,    27,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,     6,     7,    -1,    -1,
      -1,    -1,    43,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,     7,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    22,    23,    24,    25,    26,    27,    30,
      31,    -1,    -1,    34,    35,    36,     7,     8,    39,    -1,
      11,    12,     7,     8,     7,     8,    11,    12,    11,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    46,    47,     0,     3,     6,    22,    23,    24,
      25,    26,    27,    28,    29,    48,    50,    53,    55,    58,
      52,    37,    37,     5,    80,     6,    55,     7,    54,    39,
      55,    53,    60,    61,    60,     7,     5,     6,    49,    53,
      56,    57,    51,    39,     9,    40,    39,    54,    38,    44,
      38,    42,     7,    57,     4,    82,    54,     6,    57,    55,
       7,     8,    11,    12,    75,     8,    40,    39,    61,    39,
       6,     7,    13,    15,    16,    17,    53,    54,    56,    62,
      63,    64,    81,    42,    37,    37,    57,    39,    41,     8,
      53,    54,    21,    37,    37,    42,    37,    37,    54,     9,
       6,    62,    56,    64,    43,    81,    38,    60,    41,    54,
       9,    39,    75,    79,    75,    77,    78,     6,    53,    62,
      78,     7,    53,    73,     9,    65,    11,    12,    75,    76,
      39,    43,    42,    38,     9,    39,    11,    12,    75,    76,
      38,    44,    10,    18,    19,    38,    53,    54,    43,    38,
       9,     7,    39,    11,    12,    75,    76,    39,    71,    72,
      30,    31,    34,    35,    36,    70,    39,    39,    62,    42,
      11,    12,    75,    76,    39,    39,    39,    39,    39,    75,
      75,    77,    77,    42,    54,    16,    42,     7,     8,     9,
      78,    68,    69,    67,    66,    39,    39,    75,    75,    75,
      75,    75,    39,    43,    20,    43,    62,    39,    39,    39,
      39,    62,    37,    62,     7,     8,    39,    39,    39,    39,
      39,    11,    12,    59,    75,    20,    43,    43,    78,    43,
       7,    74,    39,    59,    14,    38,     9,    21,    38,    43,
      39,    42,    39,    75,    76,    42,    43,    62,    62,    43,
      43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    50,    52,    50,    50,    53,    53,    53,    53,
      53,    53,    54,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    65,    64,
      66,    64,    67,    64,    68,    64,    69,    64,    64,    70,
      64,    71,    64,    72,    64,    64,    64,    64,    64,    64,
      64,    64,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    77,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    81,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     0,     5,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     4,     4,     4,     2,     2,
       3,     1,     8,     7,    11,    10,     5,     5,     1,     1,
       1,     1,     3,     2,     5,     0,     1,     2,     4,     6,
       6,     6,     6,     5,     5,     5,     5,     1,     0,     4,
       0,     6,     0,     6,     0,     6,     0,     6,     4,     0,
       5,     0,     5,     0,     5,     3,     5,     7,    11,     7,
       9,    11,     4,     4,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     7,     6,     1,     2,     2,     1,     6
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
#line 47 "limbaj.y"
                                                            {printf("program corect sintactic\n");}
#line 1472 "y.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 67 "limbaj.y"
                           {strcpy(type,"const");}
#line 1478 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 68 "limbaj.y"
                    {strcpy(type,"const ");}
#line 1484 "y.tab.c"
    break;

  case 16: /* datatype: TINT  */
#line 72 "limbaj.y"
                    { insert_type(); }
#line 1490 "y.tab.c"
    break;

  case 17: /* datatype: TFLOAT  */
#line 73 "limbaj.y"
                    { insert_type(); }
#line 1496 "y.tab.c"
    break;

  case 18: /* datatype: TCHAR  */
#line 74 "limbaj.y"
                    { insert_type(); }
#line 1502 "y.tab.c"
    break;

  case 19: /* datatype: TSTRING  */
#line 75 "limbaj.y"
                    { insert_type(); }
#line 1508 "y.tab.c"
    break;

  case 20: /* datatype: TBOOL  */
#line 76 "limbaj.y"
                    { insert_type(); }
#line 1514 "y.tab.c"
    break;

  case 21: /* datatype: TVOID  */
#line 77 "limbaj.y"
                    { insert_type(); }
#line 1520 "y.tab.c"
    break;

  case 22: /* id_table: ID  */
#line 80 "limbaj.y"
             { insert_id(); }
#line 1526 "y.tab.c"
    break;

  case 23: /* variabila: datatype id_table  */
#line 83 "limbaj.y"
                                                 { add_in_table('V'); }
#line 1532 "y.tab.c"
    break;

  case 24: /* variabila: datatype id_table '[' NR ']'  */
#line 84 "limbaj.y"
                                                 { add_in_table('V'); }
#line 1538 "y.tab.c"
    break;

  case 25: /* variabila: datatype id_table ASSIGN operator  */
#line 85 "limbaj.y"
                                                 { add_in_table('V'); }
#line 1544 "y.tab.c"
    break;

  case 26: /* variabila: datatype id_table ASSIGN VARBOOL  */
#line 86 "limbaj.y"
                                                 { add_in_table('V'); }
#line 1550 "y.tab.c"
    break;

  case 27: /* variabila: datatype id_table ASSIGN STRING  */
#line 87 "limbaj.y"
                                                 { add_in_table('V'); }
#line 1556 "y.tab.c"
    break;

  case 48: /* const_: CONST datatype id_table ';'  */
#line 126 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1562 "y.tab.c"
    break;

  case 49: /* const_: CONST datatype id_table ASSIGN expr ';'  */
#line 127 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1568 "y.tab.c"
    break;

  case 50: /* const_: CONST datatype id_table ASSIGN operator ';'  */
#line 128 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1574 "y.tab.c"
    break;

  case 51: /* const_: CONST datatype id_table ASSIGN VARBOOL ';'  */
#line 129 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1580 "y.tab.c"
    break;

  case 52: /* const_: CONST datatype id_table ASSIGN STRING ';'  */
#line 130 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1586 "y.tab.c"
    break;

  case 53: /* const_: CONST id_table ASSIGN expr ';'  */
#line 131 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1592 "y.tab.c"
    break;

  case 54: /* const_: CONST id_table ASSIGN operator ';'  */
#line 132 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1598 "y.tab.c"
    break;

  case 55: /* const_: CONST id_table ASSIGN VARBOOL ';'  */
#line 133 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1604 "y.tab.c"
    break;

  case 56: /* const_: CONST id_table ASSIGN STRING ';'  */
#line 134 "limbaj.y"
                                                      { add_in_table('V'); }
#line 1610 "y.tab.c"
    break;

  case 58: /* $@3: %empty  */
#line 138 "limbaj.y"
                                             { add_in_table('V'); }
#line 1616 "y.tab.c"
    break;

  case 60: /* $@4: %empty  */
#line 139 "limbaj.y"
                                             { add_in_table('V'); }
#line 1622 "y.tab.c"
    break;

  case 62: /* $@5: %empty  */
#line 140 "limbaj.y"
                                             { add_in_table('V'); }
#line 1628 "y.tab.c"
    break;

  case 64: /* $@6: %empty  */
#line 141 "limbaj.y"
                                             { add_in_table('V'); }
#line 1634 "y.tab.c"
    break;

  case 66: /* $@7: %empty  */
#line 142 "limbaj.y"
                                             { add_in_table('V'); }
#line 1640 "y.tab.c"
    break;

  case 69: /* $@8: %empty  */
#line 144 "limbaj.y"
                                             { add_in_table('V'); }
#line 1646 "y.tab.c"
    break;

  case 71: /* $@9: %empty  */
#line 145 "limbaj.y"
                                             { add_in_table('V'); }
#line 1652 "y.tab.c"
    break;

  case 73: /* $@10: %empty  */
#line 146 "limbaj.y"
                                             { add_in_table('V'); }
#line 1658 "y.tab.c"
    break;


#line 1662 "y.tab.c"

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

#line 209 "limbaj.y"

int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        printf("\n\n");
        printf("                        SYMBOL TABLE                        \n");
        printf("------------------------------------------------------------\n");
        printf("VARIABLE        TYPE                     VALUE       LINE NO\n");
        int i;
        for(i=0; i<count; i++) {
		printf("%s\t\t%s\t\t%s\t\t%d\t\t\n", table[i].type, table[i].data_type, table[i].value, table[i].line_number);
	}

} 

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(table[i].value, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void insert_type() {
        if(strcmp(type,"const")==0){
                strcat(type, " ");
                strcat(type, yytext);
        }
        else{
	        strcpy(type, yytext);
                strcat(type, "      ");
        }
}

void insert_id() {
	strcpy(id, yytext);
}

void add_in_table(char c) {
  q=search(yytext);
  int i;
  if(!q) {
    	if(c == 'V') {
                /* char* temp;             daca scriu chestia asta nu imi mai verifica urmatoarele variabile globale
                strcpy(temp,yytext);
                if(strcmp(yytext,";")>=0){
                        strcpy(temp,"no value");
                }  */
		table[count].value=strdup(yytext);
		table[count].data_type=strdup(type);
		table[count].line_number=yylineno;
                table[count].type=strdup(id);
		count++;
		}
	}
}
