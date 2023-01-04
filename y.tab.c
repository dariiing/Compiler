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

extern FILE* yyin;
extern char* yytext;


#line 79 "y.tab.c"

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
#line 9 "limbaj.y"

        char *value;

#line 184 "y.tab.c"

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
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_progr = 42,                     /* progr  */
  YYSYMBOL_headers = 43,                   /* headers  */
  YYSYMBOL_outside_global = 44,            /* outside_global  */
  YYSYMBOL_outside_functii = 45,           /* outside_functii  */
  YYSYMBOL_global = 46,                    /* global  */
  YYSYMBOL_variabila = 47,                 /* variabila  */
  YYSYMBOL_functii = 48,                   /* functii  */
  YYSYMBOL_functie = 49,                   /* functie  */
  YYSYMBOL_ret = 50,                       /* ret  */
  YYSYMBOL_parametri = 51,                 /* parametri  */
  YYSYMBOL_parametru = 52,                 /* parametru  */
  YYSYMBOL_instructiuni = 53,              /* instructiuni  */
  YYSYMBOL_const_ = 54,                    /* const_  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_eval_type = 56,                 /* eval_type  */
  YYSYMBOL_for_stmt = 57,                  /* for_stmt  */
  YYSYMBOL_for_expr = 58,                  /* for_expr  */
  YYSYMBOL_operator = 59,                  /* operator  */
  YYSYMBOL_expr = 60,                      /* expr  */
  YYSYMBOL_comparatii = 61,                /* comparatii  */
  YYSYMBOL_conditii = 62,                  /* conditii  */
  YYSYMBOL_apel_fct = 63,                  /* apel_fct  */
  YYSYMBOL_clase = 64,                     /* clase  */
  YYSYMBOL_instr_clasa = 65,               /* instr_clasa  */
  YYSYMBOL_instructiuni_clasa = 66,        /* instructiuni_clasa  */
  YYSYMBOL_stmt_clasa = 67,                /* stmt_clasa  */
  YYSYMBOL_apel_clase = 68,                /* apel_clase  */
  YYSYMBOL_main = 69                       /* main  */
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
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

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
      32,    33,    29,    25,    39,    26,    40,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
       0,    33,    33,    36,    37,    40,    41,    44,    45,    51,
      52,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    71,    72,    75,    76,    77,    78,    79,
      80,    81,    82,    85,    86,    87,    90,    91,    94,    95,
      96,    99,   100,   103,   105,   106,   107,   108,   109,   110,
     111,   115,   116,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   135,   136,
     139,   140,   141,   142,   145,   146,   149,   150,   153,   154,
     155,   156,   157,   161,   164,   165,   166,   170,   171,   172,
     173,   174,   175,   176,   182,   183,   187,   188,   189,   190,
     191,   192,   195,   196,   199,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   212,   213,   214,   215,   216,   217,
     219,   220,   221,   222
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
  "'%'", "'('", "')'", "';'", "'['", "']'", "'{'", "'}'", "','", "'.'",
  "$accept", "progr", "headers", "outside_global", "outside_functii",
  "global", "variabila", "functii", "functie", "ret", "parametri",
  "parametru", "instructiuni", "const_", "stmt", "eval_type", "for_stmt",
  "for_expr", "operator", "expr", "comparatii", "conditii", "apel_fct",
  "clase", "instr_clasa", "instructiuni_clasa", "stmt_clasa", "apel_clase",
  "main", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-23)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -160,    24,    39,  -160,    50,    38,  -160,   126,    51,
     122,   115,    14,   149,     9,   141,  -160,   173,   397,   163,
     161,   181,   191,   195,   220,     7,  -160,  -160,   401,  -160,
    -160,  -160,  -160,   194,    92,   200,   227,   207,   223,  -160,
    -160,  -160,  -160,  -160,  -160,   384,  -160,  -160,    88,   242,
      92,   224,    92,  -160,    92,   235,   249,   237,    48,    48,
      48,    48,    48,   405,   241,    98,    32,    92,   244,    92,
    -160,   233,   249,   257,   -14,  -160,   245,  -160,  -160,  -160,
    -160,  -160,   251,   258,   107,   260,  -160,   259,   384,  -160,
      85,   409,  -160,     7,  -160,    55,   264,   106,   248,   262,
     249,   349,  -160,  -160,  -160,  -160,    98,   266,   139,   267,
     274,   276,   295,  -160,   278,   292,    81,  -160,   201,   294,
     280,   298,   299,   300,   308,    36,   305,   154,  -160,  -160,
     312,   365,   110,  -160,   310,   384,  -160,  -160,  -160,  -160,
       5,   198,   297,   413,    97,  -160,   214,   341,   329,    48,
     381,    48,   208,   249,   249,   417,   315,    98,   337,    17,
    -160,  -160,    64,  -160,    37,   246,  -160,    98,   413,  -160,
     230,  -160,  -160,  -160,   324,  -160,   413,  -160,   421,    20,
     355,   112,   330,   269,   331,   359,   353,   340,   113,   114,
     344,   345,   151,   346,  -160,   121,    73,   425,  -160,   347,
    -160,   362,  -160,    71,   128,   354,   413,  -160,   352,   360,
     361,   363,   377,   370,   429,  -160,    48,    48,    48,   368,
     385,   375,   178,   411,    48,   418,   420,  -160,  -160,  -160,
    -160,   422,    48,    98,  -160,   423,   424,   426,    76,  -160,
    -160,   427,   428,  -160,   430,  -160,  -160,  -160,  -160,   432,
     433,   435,  -160,  -160,  -160,   381,   431,   381,  -160,  -160,
     188,   436,  -160,  -160,  -160,   384,  -160,   160,  -160,  -160,
    -160,    48,    98,  -160,  -160,   434,  -160,  -160,  -160,  -160,
     285,    48,   301,  -160,  -160,   440,   437,   439,   162,  -160,
     446,   441,  -160,   100,   442,  -160,  -160,   443,   444,   445,
      48,  -160,   447,  -160,   381,  -160,  -160,   381,   317,   333,
    -160,  -160
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    11,     0,     8,     0,     9,    17,     0,     0,
       0,     0,     0,     0,     0,     7,    24,    10,     0,    14,
      15,    16,    13,     0,     0,     0,     0,     0,     0,     2,
      23,    77,    20,    21,    76,    19,    18,    12,     0,     0,
      96,     0,    99,   102,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    98,     0,    97,
     103,     0,    40,     0,     0,    36,     0,    80,    81,    78,
      79,    82,     0,     0,     0,     0,   112,    77,    87,    90,
       0,     0,   104,   100,    95,   101,     0,     0,    38,     0,
      40,     0,   110,   111,   109,   108,    93,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    41,
       0,     0,     0,   113,    77,    88,    89,   106,   107,   105,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    40,    40,     0,     0,    93,     0,     0,
     120,    42,     0,    67,     0,     0,    91,    93,     0,    30,
       0,    39,    34,    35,     0,    33,     0,    25,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,    52,     0,
     122,     0,   121,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    59,    57,
      56,     0,     0,    93,   115,     0,     0,     0,     0,   123,
      92,     0,     0,    28,     0,    49,    50,    48,    47,     0,
       0,     0,    83,    84,    85,     0,     0,     0,    73,    72,
       0,     0,    68,    69,    61,     0,   116,     0,    54,    55,
      53,     0,    93,   118,    32,     0,    27,    45,    46,    44,
       0,     0,     0,    71,    70,     0,     0,     0,     0,    31,
      62,     0,    64,     0,     0,   114,   119,     0,     0,     0,
       0,    75,     0,   117,     0,    65,    74,     0,     0,     0,
      63,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,  -160,  -160,   452,    -6,    -9,  -159,
     -66,   364,  -113,  -160,  -125,  -160,  -160,  -160,   -28,   -27,
      42,  -146,  -102,  -160,   438,    45,   -45,  -117,  -160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    10,    50,    26,   174,
      74,    75,   127,   128,   129,   130,   187,   294,    88,    89,
     181,   182,    90,    14,    51,    52,    53,   131,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    46,   161,   146,   132,   184,    97,    70,    25,   205,
     162,    91,    22,    21,    22,     1,    40,   209,   165,    99,
      18,   161,    70,   197,     4,   100,   214,    23,   170,    23,
      77,    78,    79,    80,    81,    84,    85,   183,    91,    92,
     161,    40,   155,   155,     5,   161,    69,   242,   203,    19,
      70,   198,   156,   156,   215,   195,     5,    12,   161,     6,
      40,    93,     7,   111,    56,   204,    92,    41,   157,   157,
      11,     6,    44,   -22,    48,   112,   158,   201,   261,   232,
     135,   136,   271,   199,    40,   -22,   118,   188,   189,   119,
     199,   120,   121,   122,    63,    67,   143,    22,   123,   124,
     144,   126,   200,   155,    64,   233,   300,   234,   272,   239,
     273,    48,    49,   156,    95,   175,   301,    87,   107,   145,
      65,   180,    44,   180,   108,   217,   218,   192,   193,   157,
      13,   267,    58,    59,    17,   291,    60,    61,    62,   114,
     175,   104,   280,   166,   282,   100,   225,   226,   175,   108,
     212,   213,   100,   100,   231,   161,    16,   161,   134,   118,
     108,   240,   119,    44,   120,   121,   122,   108,    20,   237,
     288,   123,   124,   125,   126,    27,    58,    59,   175,    28,
      60,    61,    62,   161,   161,   229,   251,    33,   252,   180,
     180,   308,   160,   286,   309,   297,   180,   258,    34,   108,
      35,   108,   259,   118,   265,   266,   119,   283,   120,   121,
     122,    36,   284,   168,    37,   123,   124,   144,   126,   118,
     147,   148,   119,    38,   120,   121,   122,   185,   186,   176,
      47,   123,   124,   144,   126,   118,   169,    54,   119,    56,
     120,   121,   122,   265,   287,   206,    55,   123,   124,   144,
     126,   118,   177,   180,   119,    57,   120,   121,   122,   253,
     254,    66,    68,   123,   124,   125,   126,    72,   207,    73,
      76,    96,   265,   306,   118,    86,    98,   119,    94,   120,
     121,   122,   101,   115,   202,   102,   123,   124,   144,   126,
     118,   106,   103,   119,   105,   120,   121,   122,   113,   116,
     133,   137,   123,   124,   144,   126,   118,   220,   138,   119,
     139,   120,   121,   122,   140,   141,   142,   150,   123,   124,
     144,   126,   118,   290,   159,   119,   149,   120,   121,   122,
     151,   152,   153,   171,   123,   124,   144,   126,   118,   292,
     154,   119,   167,   120,   121,   122,   163,   178,   179,   194,
     123,   124,   144,   126,   118,   310,   196,   119,   208,   120,
     121,   122,   216,   219,   221,   222,   123,   124,   125,   126,
     118,   311,   223,   119,   224,   120,   121,   122,   227,   228,
     230,   238,   123,   124,   164,   126,   118,   201,   241,   119,
     243,   120,   121,   122,   244,   245,   256,   246,   123,   124,
     144,   126,    58,    59,   248,   255,    60,    61,    62,    58,
      59,   247,   257,    60,    61,    62,    29,   260,    30,    31,
      41,    32,    42,    43,    41,    44,    82,    83,    41,    44,
     109,   110,    41,    44,   172,   173,    41,    44,   190,   191,
      41,    44,   210,   211,    41,    44,   235,   236,    41,    44,
     249,   250,   262,    44,   263,   298,   264,   268,   269,   293,
     270,    15,   275,   281,   117,   274,   277,   278,   276,   279,
     285,   295,   289,   296,   299,   302,     0,   303,     0,   305,
       0,   304,     0,     0,   307,     0,     0,     0,     0,     0,
       0,     0,    71
};

static const yytype_int16 yycheck[] =
{
      28,    28,   127,   116,   106,   151,    72,    52,    14,   168,
     127,     6,     5,     4,     5,    23,    25,   176,   131,    33,
       6,   146,    67,     6,     0,    39,     6,    20,   141,    20,
      58,    59,    60,    61,    62,    63,    63,   150,     6,    34,
     165,    50,     6,     6,     5,   170,    52,   206,   165,    35,
      95,    34,    16,    16,    34,   157,     5,    19,   183,    20,
      69,    67,    23,    91,    32,   167,    34,    19,    32,    32,
      20,    20,    24,    34,    19,    20,    40,    40,   224,     6,
     108,   108,     6,    19,    93,    34,     5,   153,   154,     8,
      19,    10,    11,    12,     6,    50,    15,     5,    17,    18,
      19,    20,    38,     6,    16,    32,     6,    34,    32,    38,
      34,    19,    20,    16,    69,   143,    16,    19,    33,    38,
      32,   149,    24,   151,    39,    13,    14,   155,   155,    32,
       4,   233,    25,    26,    19,   281,    29,    30,    31,    33,
     168,    34,   255,    33,   257,    39,    33,    33,   176,    39,
     178,   178,    39,    39,    33,   280,    34,   282,    19,     5,
      39,    33,     8,    24,    10,    11,    12,    39,    19,   197,
     272,    17,    18,    19,    20,    34,    25,    26,   206,     6,
      29,    30,    31,   308,   309,    34,   214,    24,   216,   217,
     218,   304,    38,    33,   307,    33,   224,    19,    37,    39,
      19,    39,    24,     5,   232,   232,     8,    19,    10,    11,
      12,    20,    24,    15,    19,    17,    18,    19,    20,     5,
      19,    20,     8,     3,    10,    11,    12,    19,    20,    15,
      36,    17,    18,    19,    20,     5,    38,    37,     8,    32,
      10,    11,    12,   271,   271,    15,    19,    17,    18,    19,
      20,     5,    38,   281,     8,    32,    10,    11,    12,   217,
     218,    19,    38,    17,    18,    19,    20,    32,    38,    20,
      33,    38,   300,   300,     5,    34,    19,     8,    34,    10,
      11,    12,    37,    35,    38,    34,    17,    18,    19,    20,
       5,    32,    34,     8,    34,    10,    11,    12,    34,    37,
      34,    34,    17,    18,    19,    20,     5,    38,    34,     8,
      34,    10,    11,    12,    19,    37,    24,    37,    17,    18,
      19,    20,     5,    38,    19,     8,    32,    10,    11,    12,
      32,    32,    32,    36,    17,    18,    19,    20,     5,    38,
      32,     8,    32,    10,    11,    12,    34,     6,    19,    34,
      17,    18,    19,    20,     5,    38,    19,     8,    34,    10,
      11,    12,     7,    33,    33,     6,    17,    18,    19,    20,
       5,    38,    19,     8,    34,    10,    11,    12,    34,    34,
      34,    19,    17,    18,    19,    20,     5,    40,    34,     8,
      38,    10,    11,    12,    34,    34,    11,    34,    17,    18,
      19,    20,    25,    26,    34,    37,    29,    30,    31,    25,
      26,    34,    37,    29,    30,    31,    19,     6,    21,    22,
      19,    24,    21,    22,    19,    24,    21,    22,    19,    24,
      21,    22,    19,    24,    21,    22,    19,    24,    21,    22,
      19,    24,    21,    22,    19,    24,    21,    22,    19,    24,
      21,    22,    34,    24,    34,     9,    34,    34,    34,    19,
      34,     9,    34,    32,   100,    38,    34,    34,    38,    34,
      34,    34,    38,    34,    33,    33,    -1,    34,    -1,    34,
      -1,    37,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    20,    23,    44,    46,
      47,    20,    19,     4,    64,    47,    34,    19,     6,    35,
      19,     4,     5,    20,    45,    48,    49,    34,     6,    19,
      21,    22,    24,    24,    37,    19,    20,    19,     3,    69,
      49,    19,    21,    22,    24,    59,    60,    36,    19,    20,
      48,    65,    66,    67,    37,    19,    32,    32,    25,    26,
      29,    30,    31,     6,    16,    32,    19,    66,    38,    48,
      67,    65,    32,    20,    51,    52,    33,    59,    59,    59,
      59,    59,    21,    22,    59,    60,    34,    19,    59,    60,
      63,     6,    34,    48,    34,    66,    38,    51,    19,    33,
      39,    37,    34,    34,    34,    34,    32,    33,    39,    21,
      22,    59,    20,    34,    33,    35,    37,    52,     5,     8,
      10,    11,    12,    17,    18,    19,    20,    53,    54,    55,
      56,    68,    63,    34,    19,    59,    60,    34,    34,    34,
      19,    37,    24,    15,    19,    38,    53,    19,    20,    32,
      37,    32,    32,    32,    32,     6,    16,    32,    40,    19,
      38,    55,    68,    34,    19,    53,    33,    32,    15,    38,
      53,    36,    21,    22,    50,    59,    15,    38,     6,    19,
      59,    61,    62,    53,    62,    19,    20,    57,    51,    51,
      21,    22,    59,    60,    34,    63,    19,     6,    34,    19,
      38,    40,    38,    68,    63,    50,    15,    38,    34,    50,
      21,    22,    59,    60,     6,    34,     7,    13,    14,    33,
      38,    33,     6,    19,    34,    33,    33,    34,    34,    34,
      34,    33,     6,    32,    34,    21,    22,    59,    19,    38,
      33,    34,    50,    38,    34,    34,    34,    34,    34,    21,
      22,    59,    59,    61,    61,    37,    11,    37,    19,    24,
       6,    62,    34,    34,    34,    59,    60,    63,    34,    34,
      34,     6,    32,    34,    38,    34,    38,    34,    34,    34,
      53,    32,    53,    19,    24,    34,    33,    60,    63,    38,
      38,    62,    38,    19,    58,    34,    34,    33,     9,    33,
       6,    16,    33,    34,    37,    34,    60,    37,    53,    53,
      38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    61,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     2,     5,     4,     4,     4,     4,     3,     5,     5,
       5,     5,     0,     2,     1,     8,     7,    11,    10,     9,
       8,    12,    11,     1,     1,     1,     1,     3,     2,     5,
       0,     1,     2,     4,     6,     6,     6,     5,     5,     5,
       5,     1,     3,     5,     5,     5,     4,     4,     4,     4,
       3,     5,     7,    11,     7,     9,    11,     2,     5,     5,
       4,     4,     3,     3,     3,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       1,     4,     6,     0,     7,     6,     1,     2,     2,     1,
       3,     3,     1,     2,     3,     5,     5,     5,     4,     4,
       4,     4,     3,     5,     7,     4,     5,     8,     5,     7,
       6,     7,     7,     8
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
#line 33 "limbaj.y"
                                                            {printf("program corect sintactic\n");}
#line 1460 "y.tab.c"
    break;

  case 11: /* variabila: TIP ID  */
#line 55 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1466 "y.tab.c"
    break;

  case 12: /* variabila: TIP ID '[' NR ']'  */
#line 56 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1472 "y.tab.c"
    break;

  case 13: /* variabila: TIP ID ASSIGN NR  */
#line 57 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1478 "y.tab.c"
    break;

  case 14: /* variabila: TIP ID ASSIGN ID  */
#line 58 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1484 "y.tab.c"
    break;

  case 15: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 59 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1490 "y.tab.c"
    break;

  case 16: /* variabila: TIP ID ASSIGN STRING  */
#line 60 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1496 "y.tab.c"
    break;

  case 17: /* variabila: CONST TIP ID  */
#line 61 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1502 "y.tab.c"
    break;

  case 18: /* variabila: CONST TIP ID ASSIGN expr  */
#line 62 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1508 "y.tab.c"
    break;

  case 19: /* variabila: CONST TIP ID ASSIGN operator  */
#line 63 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1514 "y.tab.c"
    break;

  case 20: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 64 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1520 "y.tab.c"
    break;

  case 21: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 65 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1526 "y.tab.c"
    break;

  case 25: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 75 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), "");}
#line 1532 "y.tab.c"
    break;

  case 26: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 76 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), "");}
#line 1538 "y.tab.c"
    break;

  case 27: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 77 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1544 "y.tab.c"
    break;

  case 28: /* functie: TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 78 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1550 "y.tab.c"
    break;

  case 29: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 79 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));}
#line 1556 "y.tab.c"
    break;

  case 30: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 80 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));}
#line 1562 "y.tab.c"
    break;

  case 31: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 81 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1568 "y.tab.c"
    break;

  case 32: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 82 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1574 "y.tab.c"
    break;

  case 38: /* parametru: TIP ID  */
#line 94 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1580 "y.tab.c"
    break;

  case 39: /* parametru: TIP ID '[' NR ']'  */
#line 95 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1586 "y.tab.c"
    break;

  case 40: /* parametru: %empty  */
#line 96 "limbaj.y"
                                {par_fct("", "");}
#line 1592 "y.tab.c"
    break;

  case 43: /* const_: CONST TIP ID ';'  */
#line 103 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1598 "y.tab.c"
    break;

  case 44: /* const_: CONST TIP ID ASSIGN operator ';'  */
#line 105 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1604 "y.tab.c"
    break;

  case 45: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 106 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1610 "y.tab.c"
    break;

  case 46: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 107 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1616 "y.tab.c"
    break;

  case 52: /* stmt: TIP ID ';'  */
#line 116 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1622 "y.tab.c"
    break;

  case 53: /* stmt: TIP ID ASSIGN operator ';'  */
#line 118 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1628 "y.tab.c"
    break;

  case 54: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 119 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1634 "y.tab.c"
    break;

  case 55: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 120 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1640 "y.tab.c"
    break;

  case 56: /* stmt: ID ASSIGN expr ';'  */
#line 121 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1646 "y.tab.c"
    break;

  case 57: /* stmt: ID ASSIGN operator ';'  */
#line 122 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1652 "y.tab.c"
    break;

  case 58: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 123 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1658 "y.tab.c"
    break;

  case 59: /* stmt: ID ASSIGN STRING ';'  */
#line 124 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1664 "y.tab.c"
    break;

  case 60: /* stmt: ID DIGIT ';'  */
#line 125 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1670 "y.tab.c"
    break;

  case 61: /* stmt: ID '(' apel_fct ')' ';'  */
#line 126 "limbaj.y"
                                                 {search_function((yyvsp[-4].value));}
#line 1676 "y.tab.c"
    break;

  case 70: /* for_stmt: TIP ID ASSIGN NR  */
#line 139 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1682 "y.tab.c"
    break;

  case 71: /* for_stmt: TIP ID ASSIGN ID  */
#line 140 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1688 "y.tab.c"
    break;

  case 76: /* operator: NR  */
#line 149 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1694 "y.tab.c"
    break;

  case 77: /* operator: ID  */
#line 150 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1700 "y.tab.c"
    break;

  case 78: /* expr: operator '*' operator  */
#line 153 "limbaj.y"
                             {char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = a;}
#line 1706 "y.tab.c"
    break;

  case 79: /* expr: operator '/' operator  */
#line 154 "limbaj.y"
                             {char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = b;}
#line 1712 "y.tab.c"
    break;

  case 80: /* expr: operator '+' operator  */
#line 155 "limbaj.y"
                             {char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = c;}
#line 1718 "y.tab.c"
    break;

  case 81: /* expr: operator '-' operator  */
#line 156 "limbaj.y"
                             {char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = d;}
#line 1724 "y.tab.c"
    break;

  case 82: /* expr: operator '%' operator  */
#line 157 "limbaj.y"
                             {char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1730 "y.tab.c"
    break;

  case 104: /* stmt_clasa: TIP ID ';'  */
#line 199 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1736 "y.tab.c"
    break;

  case 105: /* stmt_clasa: TIP ID ASSIGN operator ';'  */
#line 201 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1742 "y.tab.c"
    break;

  case 106: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 202 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1748 "y.tab.c"
    break;

  case 107: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 203 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1754 "y.tab.c"
    break;

  case 108: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 204 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1760 "y.tab.c"
    break;

  case 109: /* stmt_clasa: ID ASSIGN operator ';'  */
#line 205 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1766 "y.tab.c"
    break;

  case 110: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 206 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1772 "y.tab.c"
    break;

  case 111: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 207 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1778 "y.tab.c"
    break;

  case 112: /* stmt_clasa: ID DIGIT ';'  */
#line 208 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1784 "y.tab.c"
    break;

  case 113: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 209 "limbaj.y"
                                                       {search_function((yyvsp[-4].value));}
#line 1790 "y.tab.c"
    break;


#line 1794 "y.tab.c"

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

#line 225 "limbaj.y"



int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        print_table(errors);
}

