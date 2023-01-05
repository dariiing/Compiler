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
  YYSYMBOL_main = 52,                      /* main  */
  YYSYMBOL_variabila = 53,                 /* variabila  */
  YYSYMBOL_functii = 54,                   /* functii  */
  YYSYMBOL_functie = 55,                   /* functie  */
  YYSYMBOL_ret = 56,                       /* ret  */
  YYSYMBOL_parametri = 57,                 /* parametri  */
  YYSYMBOL_parametru = 58,                 /* parametru  */
  YYSYMBOL_instructiuni = 59,              /* instructiuni  */
  YYSYMBOL_const_ = 60,                    /* const_  */
  YYSYMBOL_stmt = 61,                      /* stmt  */
  YYSYMBOL_eval_type = 62,                 /* eval_type  */
  YYSYMBOL_for_stmt = 63,                  /* for_stmt  */
  YYSYMBOL_for_expr = 64,                  /* for_expr  */
  YYSYMBOL_expr = 65,                      /* expr  */
  YYSYMBOL_conditii = 66,                  /* conditii  */
  YYSYMBOL_apel_fct = 67                   /* apel_fct  */
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
#define YYLAST   581

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  337

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
       0,    33,    33,    36,    37,    40,    41,    44,    45,    51,
      52,    57,    58,    62,    63,    64,    65,    66,    67,    70,
      71,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      85,    86,    87,    88,    89,    90,    93,    94,    95,    96,
      97,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   116,   117,   120,   121,   122,   123,   124,   125,
     126,   127,   130,   131,   132,   133,   136,   137,   140,   141,
     142,   145,   146,   149,   150,   151,   152,   153,   154,   155,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   177,   178,   181,   182,
     183,   184,   187,   188,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   221,   222,   223,
     224
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
  "apel_clase", "main", "variabila", "functii", "functie", "ret",
  "parametri", "parametru", "instructiuni", "const_", "stmt", "eval_type",
  "for_stmt", "for_expr", "expr", "conditii", "apel_fct", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-177)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,  -177,    61,    64,  -177,    45,    48,  -177,   103,    81,
      86,   109,     7,   120,   105,   107,  -177,   150,   180,   153,
     135,   165,   167,   173,   200,   148,  -177,  -177,   302,  -177,
    -177,  -177,  -177,   169,   121,   175,   186,   184,   204,  -177,
    -177,  -177,  -177,  -177,  -177,   174,   515,  -177,   130,   188,
     202,   121,  -177,   121,   121,   227,   226,   238,   522,   174,
     174,   174,   174,   174,   174,   339,   249,   213,    70,   251,
    -177,   121,   121,   252,   226,   273,    -7,  -177,   260,   174,
     174,   174,   174,   174,   174,   247,   247,  -177,  -177,  -177,
    -177,   287,   292,   459,  -177,   276,   515,   214,   376,  -177,
    -177,    84,   148,   294,   235,   296,   297,   226,   394,   526,
     532,   312,   326,   331,   333,  -177,  -177,  -177,   213,   335,
     213,   337,   347,   467,   377,  -177,   365,   379,   112,  -177,
     286,   375,   380,   385,   387,   391,   392,    12,   390,   410,
      63,  -177,  -177,   397,  -177,  -177,  -177,  -177,  -177,  -177,
     279,  -177,  -177,  -177,  -177,  -177,    24,   171,   386,   231,
     132,  -177,   207,   419,   414,   266,   426,   266,   295,   226,
     226,   428,   400,   213,   420,    60,    56,   246,  -177,   -14,
    -177,  -177,  -177,   231,  -177,   223,  -177,  -177,  -177,  -177,
    -177,   405,   231,  -177,   432,   100,  -177,   454,   515,   145,
     262,   147,   435,   423,   413,   309,   316,   422,   424,   475,
    -177,   318,    83,   444,  -177,   436,  -177,   283,   433,  -177,
     427,   231,  -177,   421,   439,   442,   446,   483,   448,  -177,
     449,   522,     8,   266,   266,   266,   425,   468,   447,     0,
     485,   266,   464,   472,  -177,  -177,  -177,   480,   174,   213,
    -177,   488,   496,   491,   102,  -177,   299,   502,   514,  -177,
     521,  -177,  -177,  -177,   529,   531,   499,  -177,   266,   266,
     266,   366,  -177,  -177,   426,   535,   426,  -177,  -177,   151,
     137,  -177,  -177,  -177,   515,   353,  -177,  -177,  -177,   174,
     213,  -177,  -177,  -177,   533,  -177,  -177,  -177,  -177,   181,
     536,   538,   320,   266,   336,  -177,  -177,   549,   537,   507,
     355,  -177,  -177,  -177,  -177,   564,   216,  -177,   157,   541,
    -177,  -177,   540,   542,   544,   174,  -177,   545,  -177,   426,
    -177,   515,   426,   357,   373,  -177,  -177
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    41,     0,     8,     0,     9,    47,     0,     0,
       0,     0,     0,     0,     0,     7,    53,    10,     0,    44,
      45,    46,    43,     0,     0,     0,     0,     0,     0,     2,
      52,   117,    49,    50,   116,     0,    48,    42,     0,     0,
       0,    16,    19,    13,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
      20,    14,    15,     0,    70,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,   108,   110,   114,   104,   106,
     112,     0,     0,     0,    28,   117,   128,     0,     0,    21,
      12,    18,    17,     0,     0,    68,     0,    70,     0,   108,
     110,   114,   104,   106,   112,    26,    27,    25,   130,     0,
     130,     0,     0,     0,     0,    11,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    71,     0,   109,   111,   115,   105,   107,   113,
       0,    29,   127,    23,    24,    22,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    70,
      70,     0,     0,   130,     0,     0,     0,     0,    36,     0,
      72,    95,   129,     0,    59,     0,    69,    62,    64,    65,
      63,     0,     0,    54,     0,     0,   125,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,    81,     0,    37,     0,     0,    38,
       0,     0,    58,     0,     0,     0,     0,     0,     0,    73,
     125,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    85,     0,     0,   130,
      31,     0,     0,     0,     0,    39,     0,     0,     0,    57,
       0,    78,    79,    77,     0,     0,     0,   126,     0,     0,
       0,   119,   121,   123,     0,     0,     0,   101,   100,     0,
       0,    96,    97,    89,    32,     0,    83,    84,    82,     0,
     130,    34,    40,    61,     0,    56,    75,    76,    74,   119,
     121,   123,     0,     0,     0,    99,    98,     0,     0,     0,
       0,    60,   120,   122,   124,    90,     0,    92,     0,     0,
      30,    35,     0,     0,     0,     0,   103,     0,    33,     0,
      93,   102,     0,     0,     0,    91,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,  -177,  -177,  -177,  -177,   523,    40,   -43,
    -128,  -177,   567,    -8,   -11,  -176,   -73,   473,  -119,  -177,
    -137,  -177,  -177,  -177,   -28,  -156,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    14,    50,    51,    52,
     139,    39,    10,    53,    26,   191,    76,    77,   140,   141,
     142,   143,   204,   319,   198,   199,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   104,   150,   180,   152,   218,    25,   220,    70,   162,
       1,   201,   179,    18,    40,   268,   224,    58,   171,   277,
     177,   269,   270,   219,   278,   180,   106,   107,   172,    70,
      98,    85,    86,    87,    88,    89,    90,    93,   185,    96,
     180,   232,    40,    71,   173,   258,    19,   200,   180,   217,
     174,   109,   110,   111,   112,   113,   114,   211,    70,    99,
      40,     4,   171,   180,   102,    11,   213,    12,   130,     5,
     123,   131,   172,   132,   133,   134,    98,   271,   272,   273,
     135,   136,   137,   138,     6,   280,     5,     7,   173,   248,
      96,    40,    96,    72,   215,   214,   205,   206,   256,   -51,
     178,     6,    56,    48,   124,    99,   228,    13,   289,    21,
      22,   101,   299,   300,   301,   249,   -51,   130,   250,   180,
     131,    16,   132,   133,   134,    23,    22,   159,    17,   135,
     136,   160,   138,   285,   290,   229,    65,   291,   171,    20,
      48,    49,    27,   209,   233,    96,    66,   316,   172,   161,
     234,   235,   233,    22,   233,   302,    28,   304,   234,   235,
     234,   235,    67,   325,   173,   180,   227,   180,    23,   231,
     305,    34,   307,   326,   310,   306,   130,    33,   236,   131,
     238,   132,   133,   134,    35,   253,   183,    36,   135,   136,
     160,   138,    37,    41,   234,   235,   180,   180,    44,    29,
     266,    30,    31,    38,    32,    55,    45,    68,   184,    47,
     333,    54,   130,   334,   312,   131,    56,   132,   133,   134,
     284,    96,   192,   233,   135,   136,   160,   138,   130,   234,
     235,   131,    95,   132,   133,   134,    57,    44,   221,    69,
     135,   136,   160,   138,   193,    45,    75,   119,   120,   324,
     187,   130,   188,   189,   131,   190,   132,   133,   134,    74,
     222,   309,    96,   135,   136,   137,   138,   130,   126,   107,
     131,    78,   132,   133,   134,    61,    62,    63,    64,   135,
     136,   160,   138,   216,    94,    41,   100,   196,   130,   103,
      44,   131,   105,   132,   133,   134,   108,   331,   197,   237,
     135,   136,   176,   138,   130,   163,   164,   131,   118,   132,
     133,   134,   182,   120,   202,   203,   135,   136,   160,   138,
     255,    41,   115,    42,    43,   130,    44,   116,   131,   125,
     132,   133,   134,   128,    45,   127,   292,   135,   136,   160,
     138,   130,   242,   107,   131,   146,   132,   133,   134,   243,
     107,   247,   120,   135,   136,   160,   138,   315,    41,   147,
      91,    92,   130,    44,   148,   131,   149,   132,   133,   134,
     151,    45,   153,   317,   135,   136,   160,   138,   130,   234,
     235,   131,   154,   132,   133,   134,   308,   120,   322,   120,
     135,   136,   160,   138,   335,    41,   156,   121,   122,   130,
      44,   157,   131,   158,   132,   133,   134,   165,    45,   175,
     336,   135,   136,   137,   138,   130,   166,   167,   131,   168,
     132,   133,   134,   169,   170,   194,   186,   135,   136,   176,
     138,   130,   181,   195,   131,   210,   132,   133,   134,   212,
     223,   239,   240,   135,   136,   160,   138,    41,   241,   207,
     208,    41,    44,   225,   226,   254,    44,   244,   259,   245,
      45,   274,   257,    41,    45,   251,   252,    41,    44,   264,
     265,   215,    44,    41,   260,   230,    45,   261,    44,   275,
      45,   262,   267,   276,    59,    60,   197,    61,    62,    63,
      64,   279,    59,    60,   117,    61,    62,    63,    64,   281,
      59,    60,   155,    61,    62,    63,    64,   282,    59,    60,
     246,    61,    62,    63,    64,   283,    59,    60,   263,    61,
      62,    63,    64,   286,    59,    60,   288,    61,    62,    63,
      64,   287,    59,    60,   298,    61,    62,    63,    64,   293,
      59,    60,   321,    61,    62,    63,    64,    79,    80,   294,
      81,    82,    83,    84,    61,    62,    63,    64,   295,   144,
      61,    62,    63,    64,   296,   145,   297,   303,   318,   313,
     311,   314,   320,   323,   327,   328,    15,    73,   329,   330,
     129,   332
};

static const yytype_int16 yycheck[] =
{
      28,    74,   118,   140,   120,    19,    14,   183,    51,   128,
      23,   167,   140,     6,    25,     7,   192,    45,     6,    19,
     139,    13,    14,    37,    24,   162,    33,    34,    16,    72,
       6,    59,    60,    61,    62,    63,    64,    65,   157,    67,
     177,   197,    53,    51,    32,   221,    39,   166,   185,   177,
      38,    79,    80,    81,    82,    83,    84,   173,   101,    35,
      71,     0,     6,   200,    72,    20,     6,    19,     5,     5,
      98,     8,    16,    10,    11,    12,     6,   233,   234,   235,
      17,    18,    19,    20,    20,   241,     5,    23,    32,     6,
     118,   102,   120,    53,    38,    35,   169,   170,   217,    35,
      37,    20,    32,    19,    20,    35,     6,     4,     6,     4,
       5,    71,   268,   269,   270,    32,    35,     5,    35,   256,
       8,    35,    10,    11,    12,    20,     5,    15,    19,    17,
      18,    19,    20,   249,    32,    35,     6,    35,     6,    19,
      19,    20,    35,   171,     7,   173,    16,   303,    16,    37,
      13,    14,     7,     5,     7,   274,     6,   276,    13,    14,
      13,    14,    32,     6,    32,   302,   194,   304,    20,   197,
      19,    36,    35,    16,   290,    24,     5,    24,    33,     8,
      33,    10,    11,    12,    19,   213,    15,    20,    17,    18,
      19,    20,    19,    19,    13,    14,   333,   334,    24,    19,
     228,    21,    22,     3,    24,    19,    32,    19,    37,    40,
     329,    36,     5,   332,    33,     8,    32,    10,    11,    12,
     248,   249,    15,     7,    17,    18,    19,    20,     5,    13,
      14,     8,    19,    10,    11,    12,    32,    24,    15,    37,
      17,    18,    19,    20,    37,    32,    20,    33,    34,    33,
      19,     5,    21,    22,     8,    24,    10,    11,    12,    32,
      37,   289,   290,    17,    18,    19,    20,     5,    33,    34,
       8,    33,    10,    11,    12,    28,    29,    30,    31,    17,
      18,    19,    20,    37,    35,    19,    35,    21,     5,    37,
      24,     8,    19,    10,    11,    12,    36,   325,    32,    37,
      17,    18,    19,    20,     5,    19,    20,     8,    32,    10,
      11,    12,    33,    34,    19,    20,    17,    18,    19,    20,
      37,    19,    35,    21,    22,     5,    24,    35,     8,    35,
      10,    11,    12,    36,    32,    39,    37,    17,    18,    19,
      20,     5,    33,    34,     8,    33,    10,    11,    12,    33,
      34,    33,    34,    17,    18,    19,    20,    37,    19,    33,
      21,    22,     5,    24,    33,     8,    33,    10,    11,    12,
      35,    32,    35,    37,    17,    18,    19,    20,     5,    13,
      14,     8,    35,    10,    11,    12,    33,    34,    33,    34,
      17,    18,    19,    20,    37,    19,    19,    21,    22,     5,
      24,    36,     8,    24,    10,    11,    12,    32,    32,    19,
      37,    17,    18,    19,    20,     5,    36,    32,     8,    32,
      10,    11,    12,    32,    32,     6,    40,    17,    18,    19,
      20,     5,    35,    19,     8,    35,    10,    11,    12,    19,
      35,     6,    19,    17,    18,    19,    20,    19,    35,    21,
      22,    19,    24,    21,    22,    19,    24,    35,    37,    35,
      32,    36,    35,    19,    32,    21,    22,    19,    24,    21,
      22,    38,    24,    19,    35,    21,    32,    35,    24,    11,
      32,    35,    33,    36,    25,    26,    32,    28,    29,    30,
      31,     6,    25,    26,    35,    28,    29,    30,    31,    35,
      25,    26,    35,    28,    29,    30,    31,    35,    25,    26,
      35,    28,    29,    30,    31,    35,    25,    26,    35,    28,
      29,    30,    31,    35,    25,    26,    35,    28,    29,    30,
      31,    35,    25,    26,    35,    28,    29,    30,    31,    37,
      25,    26,    35,    28,    29,    30,    31,    25,    26,    35,
      28,    29,    30,    31,    28,    29,    30,    31,    37,    33,
      28,    29,    30,    31,    35,    33,    35,    32,    19,    33,
      37,    33,    35,     9,    33,    35,     9,    54,    36,    35,
     107,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    20,    23,    44,    46,
      53,    20,    19,     4,    47,    53,    35,    19,     6,    39,
      19,     4,     5,    20,    45,    54,    55,    35,     6,    19,
      21,    22,    24,    24,    36,    19,    20,    19,     3,    52,
      55,    19,    21,    22,    24,    32,    65,    40,    19,    20,
      48,    49,    50,    54,    36,    19,    32,    32,    65,    25,
      26,    28,    29,    30,    31,     6,    16,    32,    19,    37,
      50,    54,    49,    48,    32,    20,    57,    58,    33,    25,
      26,    28,    29,    30,    31,    65,    65,    65,    65,    65,
      65,    21,    22,    65,    35,    19,    65,    67,     6,    35,
      35,    49,    54,    37,    57,    19,    33,    34,    36,    65,
      65,    65,    65,    65,    65,    35,    35,    35,    32,    33,
      34,    21,    22,    65,    20,    35,    33,    39,    36,    58,
       5,     8,    10,    11,    12,    17,    18,    19,    20,    51,
      59,    60,    61,    62,    33,    33,    33,    33,    33,    33,
      67,    35,    67,    35,    35,    35,    19,    36,    24,    15,
      19,    37,    59,    19,    20,    32,    36,    32,    32,    32,
      32,     6,    16,    32,    38,    19,    19,    59,    37,    51,
      61,    35,    33,    15,    37,    59,    40,    19,    21,    22,
      24,    56,    15,    37,     6,    19,    21,    32,    65,    66,
      59,    66,    19,    20,    63,    57,    57,    21,    22,    65,
      35,    67,    19,     6,    35,    38,    37,    51,    19,    37,
      56,    15,    37,    35,    56,    21,    22,    65,     6,    35,
      21,    65,    66,     7,    13,    14,    33,    37,    33,     6,
      19,    35,    33,    33,    35,    35,    35,    33,     6,    32,
      35,    21,    22,    65,    19,    37,    59,    35,    56,    37,
      35,    35,    35,    35,    21,    22,    65,    33,     7,    13,
      14,    66,    66,    66,    36,    11,    36,    19,    24,     6,
      66,    35,    35,    35,    65,    67,    35,    35,    35,     6,
      32,    35,    37,    37,    35,    37,    35,    35,    35,    66,
      66,    66,    59,    32,    59,    19,    24,    35,    33,    65,
      67,    37,    33,    33,    33,    37,    66,    37,    19,    64,
      35,    35,    33,     9,    33,     6,    16,    33,    35,    36,
      35,    65,    36,    59,    59,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     7,     6,     1,     2,     2,     1,     3,     3,     1,
       2,     3,     5,     5,     5,     4,     4,     4,     3,     5,
       7,     4,     5,     8,     5,     7,     6,     7,     7,     8,
       9,     2,     5,     4,     4,     4,     4,     3,     5,     5,
       5,     0,     2,     1,     8,     7,    11,    10,     9,     8,
      12,    11,     1,     1,     1,     1,     1,     3,     2,     5,
       0,     1,     2,     4,     6,     6,     6,     5,     5,     5,
       1,     3,     5,     5,     5,     4,     4,     4,     3,     5,
       7,    11,     7,     9,    11,     2,     5,     5,     4,     4,
       3,     3,     3,     2,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5,     1,     1,     1,     3,
       5,     3,     5,     3,     5,     1,     3,     3,     1,     4,
       0
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
#line 1484 "y.tab.c"
    break;

  case 21: /* stmt_clasa: TIP ID ';'  */
#line 74 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1490 "y.tab.c"
    break;

  case 22: /* stmt_clasa: TIP ID ASSIGN expr ';'  */
#line 75 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1496 "y.tab.c"
    break;

  case 23: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 76 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1502 "y.tab.c"
    break;

  case 24: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 77 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1508 "y.tab.c"
    break;

  case 25: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 78 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1514 "y.tab.c"
    break;

  case 26: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 79 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1520 "y.tab.c"
    break;

  case 27: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 80 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1526 "y.tab.c"
    break;

  case 28: /* stmt_clasa: ID DIGIT ';'  */
#line 81 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1532 "y.tab.c"
    break;

  case 29: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 82 "limbaj.y"
                                                      {search_function((yyvsp[-4].value));}
#line 1538 "y.tab.c"
    break;

  case 41: /* variabila: TIP ID  */
#line 101 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1544 "y.tab.c"
    break;

  case 42: /* variabila: TIP ID '[' NR ']'  */
#line 102 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1550 "y.tab.c"
    break;

  case 43: /* variabila: TIP ID ASSIGN NR  */
#line 103 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1556 "y.tab.c"
    break;

  case 44: /* variabila: TIP ID ASSIGN ID  */
#line 104 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1562 "y.tab.c"
    break;

  case 45: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 105 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1568 "y.tab.c"
    break;

  case 46: /* variabila: TIP ID ASSIGN STRING  */
#line 106 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1574 "y.tab.c"
    break;

  case 47: /* variabila: CONST TIP ID  */
#line 107 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1580 "y.tab.c"
    break;

  case 48: /* variabila: CONST TIP ID ASSIGN expr  */
#line 108 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1586 "y.tab.c"
    break;

  case 49: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 109 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1592 "y.tab.c"
    break;

  case 50: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 110 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1598 "y.tab.c"
    break;

  case 54: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 120 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), "");}
#line 1604 "y.tab.c"
    break;

  case 55: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 121 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), "");}
#line 1610 "y.tab.c"
    break;

  case 56: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 122 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1616 "y.tab.c"
    break;

  case 57: /* functie: TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 123 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1622 "y.tab.c"
    break;

  case 58: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 124 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));}
#line 1628 "y.tab.c"
    break;

  case 59: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 125 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));}
#line 1634 "y.tab.c"
    break;

  case 60: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 126 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1640 "y.tab.c"
    break;

  case 61: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 127 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1646 "y.tab.c"
    break;

  case 68: /* parametru: TIP ID  */
#line 140 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1652 "y.tab.c"
    break;

  case 69: /* parametru: TIP ID '[' NR ']'  */
#line 141 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1658 "y.tab.c"
    break;

  case 70: /* parametru: %empty  */
#line 142 "limbaj.y"
                                {par_fct("", "");}
#line 1664 "y.tab.c"
    break;

  case 73: /* const_: CONST TIP ID ';'  */
#line 149 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1670 "y.tab.c"
    break;

  case 74: /* const_: CONST TIP ID ASSIGN expr ';'  */
#line 150 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1676 "y.tab.c"
    break;

  case 75: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 151 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1682 "y.tab.c"
    break;

  case 76: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 152 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1688 "y.tab.c"
    break;

  case 81: /* stmt: TIP ID ';'  */
#line 160 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1694 "y.tab.c"
    break;

  case 82: /* stmt: TIP ID ASSIGN expr ';'  */
#line 161 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1700 "y.tab.c"
    break;

  case 83: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 162 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1706 "y.tab.c"
    break;

  case 84: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 163 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1712 "y.tab.c"
    break;

  case 85: /* stmt: ID ASSIGN expr ';'  */
#line 164 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1718 "y.tab.c"
    break;

  case 86: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 165 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1724 "y.tab.c"
    break;

  case 87: /* stmt: ID ASSIGN STRING ';'  */
#line 166 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1730 "y.tab.c"
    break;

  case 88: /* stmt: ID DIGIT ';'  */
#line 167 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1736 "y.tab.c"
    break;

  case 89: /* stmt: ID '(' apel_fct ')' ';'  */
#line 168 "limbaj.y"
                                                 {search_function((yyvsp[-4].value));}
#line 1742 "y.tab.c"
    break;

  case 98: /* for_stmt: TIP ID ASSIGN NR  */
#line 181 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1748 "y.tab.c"
    break;

  case 99: /* for_stmt: TIP ID ASSIGN ID  */
#line 182 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1754 "y.tab.c"
    break;

  case 104: /* expr: expr '*' expr  */
#line 192 "limbaj.y"
                             { (yyval.value) = createNode("*", (yyvsp[-2].value), (yyvsp[0].value)); /*char* a = (char *)malloc(10); sprintf(a, "%s*%s", $1, $3); $$ = a;*/}
#line 1760 "y.tab.c"
    break;

  case 105: /* expr: '(' expr '*' expr ')'  */
#line 193 "limbaj.y"
                             { (yyval.value) = createNode("*", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* a = (char *)malloc(10); sprintf(a, "%s*%s", $2, $4); $$ = a;*/}
#line 1766 "y.tab.c"
    break;

  case 106: /* expr: expr '/' expr  */
#line 194 "limbaj.y"
                             { (yyval.value) = createNode("/", (yyvsp[-2].value), (yyvsp[0].value)); /*char* b = (char *)malloc(10); sprintf(b, "%s/%s", $1, $3); $$ = b;*/}
#line 1772 "y.tab.c"
    break;

  case 107: /* expr: '(' expr '/' expr ')'  */
#line 195 "limbaj.y"
                             { (yyval.value) = createNode("/", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* b = (char *)malloc(10); sprintf(b, "%s/%s", $2, $4); $$ = b;*/}
#line 1778 "y.tab.c"
    break;

  case 108: /* expr: expr '+' expr  */
#line 196 "limbaj.y"
                             { (yyval.value) = createNode("+", (yyvsp[-2].value), (yyvsp[0].value)); /*char* c = (char *)malloc(10); sprintf(c, "%s+%s", $1, $3); $$ = c;*/}
#line 1784 "y.tab.c"
    break;

  case 109: /* expr: '(' expr '+' expr ')'  */
#line 197 "limbaj.y"
                             { (yyval.value) = createNode("+", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* c = (char *)malloc(10); sprintf(c, "%s+%s", $2, $4); $$ = c;*/}
#line 1790 "y.tab.c"
    break;

  case 110: /* expr: expr '-' expr  */
#line 198 "limbaj.y"
                             { (yyval.value) = createNode("-", (yyvsp[-2].value), (yyvsp[0].value)); /*char* d = (char *)malloc(10); sprintf(d, "%s-%s", $1, $3); $$ = d;*/}
#line 1796 "y.tab.c"
    break;

  case 111: /* expr: '(' expr '-' expr ')'  */
#line 199 "limbaj.y"
                             { (yyval.value) = createNode("-", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* d = (char *)malloc(10); sprintf(d, "%s-%s", $2, $4); $$ = d;*/}
#line 1802 "y.tab.c"
    break;

  case 112: /* expr: expr '%' expr  */
#line 200 "limbaj.y"
                             { (yyval.value) = createNode("%", (yyvsp[-2].value), (yyvsp[0].value)); /*char* e = (char *)malloc(10); sprintf(e, "%s%%%s", $1, $3); $$ = e;*/}
#line 1808 "y.tab.c"
    break;

  case 113: /* expr: '(' expr '%' expr ')'  */
#line 201 "limbaj.y"
                             { (yyval.value) = createNode("%", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* e = (char *)malloc(10); sprintf(e, "%s%%%s", $2, $4); $$ = e;*/}
#line 1814 "y.tab.c"
    break;

  case 114: /* expr: expr '^' expr  */
#line 202 "limbaj.y"
                             { (yyval.value) = createNode("^", (yyvsp[-2].value), (yyvsp[0].value)); /*char* e = (char *)malloc(10); sprintf(e, "%s^%s", $1, $3); $$ = e;*/}
#line 1820 "y.tab.c"
    break;

  case 115: /* expr: '(' expr '^' expr ')'  */
#line 203 "limbaj.y"
                             { (yyval.value) = createNode("^", (yyvsp[-3].value), (yyvsp[-1].value)); /*char* e = (char *)malloc(10); sprintf(e, "%s^%s", $2, $4); $$ = e;*/}
#line 1826 "y.tab.c"
    break;

  case 116: /* expr: NR  */
#line 204 "limbaj.y"
                             {(yyval.value) = createNode((yyvsp[0].value), NULL, NULL);}
#line 1832 "y.tab.c"
    break;

  case 117: /* expr: ID  */
#line 205 "limbaj.y"
                             {(yyval.value) = createNode((yyvsp[0].value), NULL, NULL);}
#line 1838 "y.tab.c"
    break;


#line 1842 "y.tab.c"

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

#line 228 "limbaj.y"



int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);

        printTree(root,0);
        //printf("Result: %d\n", evaluateTree(root));
        print_table(errors);
}
