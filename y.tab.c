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
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* '{'  */
  YYSYMBOL_39_ = 39,                       /* '}'  */
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
#define YYLAST   464

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

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
      32,    33,    29,    25,    34,    26,    40,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       0,    34,    34,    37,    38,    41,    42,    45,    46,    52,
      53,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    73,    74,    77,    78,    79,    80,
      81,    82,    83,    84,    87,    88,    89,    90,    93,    94,
      97,    98,    99,   102,   103,   106,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   120,   121,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   142,   143,   146,   147,   148,   149,
     152,   153,   156,   157,   160,   161,   162,   163,   164,   168,
     171,   172,   173,   177,   178,   179,   180,   181,   182,   188,
     189,   193,   194,   195,   196,   197,   198,   201,   202,   205,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   220,   221,   222,   223,   224,   225,   227,   228,   229,
     230
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
  "'%'", "'('", "')'", "','", "';'", "'['", "']'", "'{'", "'}'", "'.'",
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

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,  -159,    34,    37,  -159,    28,    21,  -159,    84,    74,
      75,   100,    14,   107,   118,   114,  -159,   164,   165,   152,
     141,   166,   174,   180,   201,    18,  -159,  -159,   169,  -159,
    -159,  -159,  -159,   183,    66,   198,   208,   179,   216,  -159,
    -159,   218,  -159,  -159,   232,   126,  -159,  -159,    86,   250,
      66,   245,    66,  -159,    66,   254,   280,   269,     8,     8,
       8,     8,     8,   343,   271,    65,     9,    66,   272,    66,
    -159,   270,   280,   289,    47,  -159,   284,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,   283,   288,   290,   296,   299,  -159,
     192,    95,  -159,   113,   347,  -159,    18,  -159,   140,   303,
     129,   279,   286,   280,   309,  -159,  -159,  -159,  -159,  -159,
      65,   304,    65,   305,   306,   312,   313,   331,  -159,   316,
     332,    58,  -159,   189,   323,   319,   358,   360,   361,   362,
      13,   344,   195,  -159,  -159,   364,   325,   184,  -159,  -159,
    -159,  -159,  -159,  -159,    11,    96,   365,   351,    89,  -159,
     122,   389,   377,     8,   341,     8,   221,   280,   280,   355,
     366,    65,   378,    19,  -159,  -159,   105,  -159,    27,   211,
    -159,   351,  -159,   163,  -159,  -159,  -159,  -159,  -159,   368,
     351,  -159,   359,    68,   391,   229,   371,   227,   372,   394,
     387,   373,   224,   226,   374,   375,   376,   379,   380,  -159,
     240,    55,   363,  -159,   381,  -159,   388,  -159,   106,   382,
     351,  -159,   383,   384,   385,   390,   392,   393,   395,   367,
    -159,     8,     8,     8,   386,   401,   396,   134,   407,     8,
     397,   398,  -159,  -159,  -159,  -159,  -159,   400,     8,    65,
    -159,   402,   403,   404,   405,    85,  -159,   406,   408,  -159,
     409,  -159,  -159,  -159,  -159,  -159,   411,   412,   414,   415,
    -159,  -159,  -159,   341,   399,   341,  -159,  -159,   173,   416,
    -159,  -159,  -159,  -159,   242,  -159,  -159,  -159,  -159,     8,
      65,  -159,  -159,   413,  -159,  -159,  -159,  -159,  -159,   244,
       8,   260,  -159,  -159,   410,   418,   419,   257,  -159,   417,
     422,  -159,    20,   423,  -159,  -159,   424,   420,   425,     8,
    -159,   426,  -159,   341,  -159,  -159,   341,   277,   293,  -159,
    -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    11,     0,     8,     0,     9,    17,     0,     0,
       0,     0,     0,     0,     0,     7,    25,    10,     0,    14,
      15,    16,    13,     0,     0,     0,     0,     0,     0,     2,
      24,    83,    21,    22,    82,     0,    18,    12,     0,     0,
     101,     0,   104,   107,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,   103,     0,   102,
     108,     0,    42,     0,     0,    38,     0,    83,    82,    86,
      87,    84,    85,    88,    83,     0,     0,    82,     0,   119,
      83,    82,    96,     0,     0,   109,   105,   100,   106,     0,
       0,    40,     0,    42,     0,   115,   117,   118,   116,   114,
      98,     0,    98,     0,     0,     0,     0,     0,    99,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    43,     0,     0,     0,   120,    95,
     110,   112,   113,   111,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    42,    42,     0,
       0,    98,     0,     0,   127,    44,     0,    73,     0,     0,
      97,     0,    31,     0,    41,    34,    36,    37,    35,     0,
       0,    26,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    82,     0,    66,
       0,     0,     0,    56,     0,   129,     0,   128,     0,     0,
       0,    30,     0,     0,    83,     0,     0,    82,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    62,    61,     0,     0,    98,
     122,     0,     0,     0,     0,     0,   130,     0,     0,    29,
       0,    52,    53,    54,    51,    50,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,    79,    78,     0,     0,
      74,    75,    67,   123,     0,    58,    59,    60,    57,     0,
      98,   125,    33,     0,    28,    47,    48,    49,    46,     0,
       0,     0,    77,    76,     0,     0,     0,     0,    32,    68,
       0,    70,     0,     0,   121,   126,     0,     0,     0,     0,
      81,     0,   124,     0,    71,    80,     0,     0,     0,    69,
      72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,  -159,  -159,   427,    -3,   -13,  -158,
     -58,   315,  -115,  -159,  -122,  -159,  -159,  -159,   -57,   -28,
      70,  -147,  -103,  -159,   369,    43,   -36,  -114,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    10,    50,    26,   179,
      74,    75,   132,   133,   134,   135,   191,   303,    45,    92,
     185,   186,    93,    14,    51,    52,    53,   136,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    79,    80,    81,    82,    83,   150,   137,   188,   139,
     165,    25,    40,   209,   100,    94,    70,    94,   166,   159,
      18,   169,   213,    22,     1,   202,   309,    77,   165,   160,
     173,    70,    78,   159,     4,    88,   310,    40,    23,   187,
      12,    56,     5,   160,    95,   161,    95,   165,    11,    69,
      19,   165,   248,   162,   203,   208,    40,     6,   200,   161,
       7,   238,    70,   123,    96,   165,   124,   206,   125,   126,
     127,    22,   -23,   147,   219,   128,   129,   148,   131,     5,
     102,   103,   269,    40,    90,    48,    49,   239,    13,    91,
     240,   279,    63,    67,     6,   159,   184,   149,   184,   192,
     193,   123,    64,   220,   124,   160,   125,   126,   127,   -23,
      16,   171,    98,   128,   129,   148,   131,   280,    65,    17,
     281,   161,    21,    22,   204,   204,    20,   123,   -93,   -93,
     124,   198,   125,   126,   127,   172,   274,   180,    23,   128,
     129,   148,   131,   300,   205,   246,   111,   112,   289,    27,
     291,    58,    59,   266,   218,    60,    61,    62,   267,    48,
     117,   181,   119,   103,   260,   184,   184,   165,   123,   165,
      28,   124,   184,   125,   126,   127,    33,   297,   210,    34,
     128,   129,   148,   131,    29,    35,    30,    31,    41,    32,
      42,    43,   292,    44,    36,   165,   165,   293,   317,    37,
     123,   318,   211,   124,    38,   125,   126,   127,   151,   152,
     273,    56,   128,   129,   130,   131,   123,   170,   112,   124,
      47,   125,   126,   127,   110,   -94,   -94,    55,   128,   129,
     130,   131,   123,   184,   164,   124,    54,   125,   126,   127,
     189,   190,   222,   223,   128,   129,   148,   131,    57,   123,
     207,   296,   124,   -20,   125,   126,   127,   230,   103,   231,
     103,   128,   129,   148,   131,   123,   225,   -19,   124,    66,
     125,   126,   127,   237,   112,   295,   112,   128,   129,   148,
     131,   315,   123,   299,    68,   124,    72,   125,   126,   127,
     306,   112,   261,   262,   128,   129,   148,   131,   123,   301,
      73,   124,    76,   125,   126,   127,    89,    97,   101,    99,
     128,   129,   148,   131,   123,   120,   319,   124,   105,   125,
     126,   127,   104,   106,   121,   107,   128,   129,   130,   131,
     123,   108,   320,   124,   109,   125,   126,   127,   118,   138,
     140,   141,   128,   129,   168,   131,   123,   142,   143,   124,
     144,   125,   126,   127,   145,   153,   146,   154,   128,   129,
     148,   131,    84,   163,    85,    86,   113,    87,   114,   115,
     175,   116,   176,   177,   194,   178,   195,   196,   214,   197,
     215,   216,   241,   217,   242,   243,   256,   244,   257,   258,
     155,   259,   156,   157,   158,   182,   183,   201,   221,   167,
     227,   199,   174,   212,   224,   226,   228,   245,   229,   232,
     233,   234,   264,   268,   235,   236,     0,   247,   122,   250,
     251,   206,   249,    71,   263,   252,   307,   253,   254,   302,
     255,   290,   270,   271,   265,   272,    15,   275,   276,   277,
     278,     0,     0,   283,     0,   282,   285,   286,   284,   287,
     288,   294,   298,   304,   305,   308,   311,     0,   313,   312,
     314,     0,     0,     0,   316
};

static const yytype_int16 yycheck[] =
{
      28,    58,    59,    60,    61,    62,   121,   110,   155,   112,
     132,    14,    25,   171,    72,     6,    52,     6,   132,     6,
       6,   136,   180,     5,    23,     6,     6,    19,   150,    16,
     145,    67,    24,     6,     0,    63,    16,    50,    20,   154,
      19,    32,     5,    16,    35,    32,    35,   169,    20,    52,
      36,   173,   210,    40,    35,   169,    69,    20,   161,    32,
      23,     6,    98,     5,    67,   187,     8,    40,    10,    11,
      12,     5,    35,    15,     6,    17,    18,    19,    20,     5,
      33,    34,   229,    96,    19,    19,    20,    32,     4,    24,
      35,     6,     6,    50,    20,     6,   153,    39,   155,   157,
     158,     5,    16,    35,     8,    16,    10,    11,    12,    35,
      35,    15,    69,    17,    18,    19,    20,    32,    32,    19,
      35,    32,     4,     5,    19,    19,    19,     5,    33,    34,
       8,   159,    10,    11,    12,    39,   239,    15,    20,    17,
      18,    19,    20,   290,    39,    39,    33,    34,   263,    35,
     265,    25,    26,    19,   182,    29,    30,    31,    24,    19,
      20,    39,    33,    34,   221,   222,   223,   289,     5,   291,
       6,     8,   229,    10,    11,    12,    24,   280,    15,    38,
      17,    18,    19,    20,    19,    19,    21,    22,    19,    24,
      21,    22,    19,    24,    20,   317,   318,    24,   313,    19,
       5,   316,    39,     8,     3,    10,    11,    12,    19,    20,
     238,    32,    17,    18,    19,    20,     5,    33,    34,     8,
      37,    10,    11,    12,    32,    33,    34,    19,    17,    18,
      19,    20,     5,   290,    39,     8,    38,    10,    11,    12,
      19,    20,    13,    14,    17,    18,    19,    20,    32,     5,
      39,   279,     8,    35,    10,    11,    12,    33,    34,    33,
      34,    17,    18,    19,    20,     5,    39,    35,     8,    19,
      10,    11,    12,    33,    34,    33,    34,    17,    18,    19,
      20,   309,     5,    39,    39,     8,    32,    10,    11,    12,
      33,    34,   222,   223,    17,    18,    19,    20,     5,    39,
      20,     8,    33,    10,    11,    12,    35,    35,    19,    39,
      17,    18,    19,    20,     5,    36,    39,     8,    35,    10,
      11,    12,    38,    35,    38,    35,    17,    18,    19,    20,
       5,    35,    39,     8,    35,    10,    11,    12,    35,    35,
      35,    35,    17,    18,    19,    20,     5,    35,    35,     8,
      19,    10,    11,    12,    38,    32,    24,    38,    17,    18,
      19,    20,    19,    19,    21,    22,    19,    24,    21,    22,
      19,    24,    21,    22,    19,    24,    21,    22,    19,    24,
      21,    22,    19,    24,    21,    22,    19,    24,    21,    22,
      32,    24,    32,    32,    32,     6,    19,    19,     7,    35,
       6,    35,    37,    35,    33,    33,    19,    19,    35,    35,
      35,    35,    11,     6,    35,    35,    -1,    35,   103,    35,
      35,    40,    39,    54,    38,    35,     9,    35,    35,    19,
      35,    32,    35,    35,    38,    35,     9,    35,    35,    35,
      35,    -1,    -1,    35,    -1,    39,    35,    35,    39,    35,
      35,    35,    39,    35,    35,    33,    33,    -1,    38,    35,
      35,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    20,    23,    44,    46,
      47,    20,    19,     4,    64,    47,    35,    19,     6,    36,
      19,     4,     5,    20,    45,    48,    49,    35,     6,    19,
      21,    22,    24,    24,    38,    19,    20,    19,     3,    69,
      49,    19,    21,    22,    24,    59,    60,    37,    19,    20,
      48,    65,    66,    67,    38,    19,    32,    32,    25,    26,
      29,    30,    31,     6,    16,    32,    19,    66,    39,    48,
      67,    65,    32,    20,    51,    52,    33,    19,    24,    59,
      59,    59,    59,    59,    19,    21,    22,    24,    60,    35,
      19,    24,    60,    63,     6,    35,    48,    35,    66,    39,
      51,    19,    33,    34,    38,    35,    35,    35,    35,    35,
      32,    33,    34,    19,    21,    22,    24,    20,    35,    33,
      36,    38,    52,     5,     8,    10,    11,    12,    17,    18,
      19,    20,    53,    54,    55,    56,    68,    63,    35,    63,
      35,    35,    35,    35,    19,    38,    24,    15,    19,    39,
      53,    19,    20,    32,    38,    32,    32,    32,    32,     6,
      16,    32,    40,    19,    39,    55,    68,    35,    19,    53,
      33,    15,    39,    53,    37,    19,    21,    22,    24,    50,
      15,    39,     6,    19,    59,    61,    62,    53,    62,    19,
      20,    57,    51,    51,    19,    21,    22,    24,    60,    35,
      63,    19,     6,    35,    19,    39,    40,    39,    68,    50,
      15,    39,    35,    50,    19,    21,    22,    24,    60,     6,
      35,     7,    13,    14,    33,    39,    33,     6,    19,    35,
      33,    33,    35,    35,    35,    35,    35,    33,     6,    32,
      35,    19,    21,    22,    24,    19,    39,    35,    50,    39,
      35,    35,    35,    35,    35,    35,    19,    21,    22,    24,
      59,    61,    61,    38,    11,    38,    19,    24,     6,    62,
      35,    35,    35,    60,    63,    35,    35,    35,    35,     6,
      32,    35,    39,    35,    39,    35,    35,    35,    35,    53,
      32,    53,    19,    24,    35,    33,    60,    63,    39,    39,
      62,    39,    19,    58,    35,    35,    33,     9,    33,     6,
      16,    33,    35,    38,    35,    60,    38,    53,    53,    39,
      39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    50,    50,    51,    51,
      52,    52,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    61,
      62,    62,    62,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     2,     5,     4,     4,     4,     4,     3,     5,     5,
       5,     5,     5,     0,     2,     1,     8,     7,    11,    10,
       9,     8,    12,    11,     1,     1,     1,     1,     1,     3,
       2,     5,     0,     1,     2,     4,     6,     6,     6,     6,
       5,     5,     5,     5,     5,     1,     3,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     3,     5,     7,    11,
       7,     9,    11,     2,     5,     5,     4,     4,     3,     3,
       3,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     1,     4,     0,     7,
       6,     1,     2,     2,     1,     3,     3,     1,     2,     3,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     3,
       5,     7,     4,     5,     8,     5,     7,     6,     7,     7,
       8
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
#line 34 "limbaj.y"
                                                            {printf("program corect sintactic\n");}
#line 1460 "y.tab.c"
    break;

  case 11: /* variabila: TIP ID  */
#line 56 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1466 "y.tab.c"
    break;

  case 12: /* variabila: TIP ID '[' NR ']'  */
#line 57 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1472 "y.tab.c"
    break;

  case 13: /* variabila: TIP ID ASSIGN NR  */
#line 58 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1478 "y.tab.c"
    break;

  case 14: /* variabila: TIP ID ASSIGN ID  */
#line 59 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1484 "y.tab.c"
    break;

  case 15: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 60 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1490 "y.tab.c"
    break;

  case 16: /* variabila: TIP ID ASSIGN STRING  */
#line 61 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1496 "y.tab.c"
    break;

  case 17: /* variabila: CONST TIP ID  */
#line 62 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1502 "y.tab.c"
    break;

  case 18: /* variabila: CONST TIP ID ASSIGN expr  */
#line 63 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1508 "y.tab.c"
    break;

  case 19: /* variabila: CONST TIP ID ASSIGN NR  */
#line 64 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1514 "y.tab.c"
    break;

  case 20: /* variabila: CONST TIP ID ASSIGN ID  */
#line 65 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1520 "y.tab.c"
    break;

  case 21: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 66 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1526 "y.tab.c"
    break;

  case 22: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 67 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1532 "y.tab.c"
    break;

  case 26: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 77 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), "");}
#line 1538 "y.tab.c"
    break;

  case 27: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 78 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), "");}
#line 1544 "y.tab.c"
    break;

  case 28: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 79 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1550 "y.tab.c"
    break;

  case 29: /* functie: TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 80 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1556 "y.tab.c"
    break;

  case 30: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 81 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));}
#line 1562 "y.tab.c"
    break;

  case 31: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 82 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));}
#line 1568 "y.tab.c"
    break;

  case 32: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 83 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1574 "y.tab.c"
    break;

  case 33: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 84 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1580 "y.tab.c"
    break;

  case 40: /* parametru: TIP ID  */
#line 97 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1586 "y.tab.c"
    break;

  case 41: /* parametru: TIP ID '[' NR ']'  */
#line 98 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1592 "y.tab.c"
    break;

  case 42: /* parametru: %empty  */
#line 99 "limbaj.y"
                                {par_fct("", "");}
#line 1598 "y.tab.c"
    break;

  case 45: /* const_: CONST TIP ID ';'  */
#line 106 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1604 "y.tab.c"
    break;

  case 46: /* const_: CONST TIP ID ASSIGN NR ';'  */
#line 108 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1610 "y.tab.c"
    break;

  case 47: /* const_: CONST TIP ID ASSIGN ID ';'  */
#line 109 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1616 "y.tab.c"
    break;

  case 48: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 110 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1622 "y.tab.c"
    break;

  case 49: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 111 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1628 "y.tab.c"
    break;

  case 56: /* stmt: TIP ID ';'  */
#line 121 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1634 "y.tab.c"
    break;

  case 57: /* stmt: TIP ID ASSIGN NR ';'  */
#line 123 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1640 "y.tab.c"
    break;

  case 58: /* stmt: TIP ID ASSIGN ID ';'  */
#line 124 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1646 "y.tab.c"
    break;

  case 59: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 125 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1652 "y.tab.c"
    break;

  case 60: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 126 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1658 "y.tab.c"
    break;

  case 61: /* stmt: ID ASSIGN expr ';'  */
#line 127 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1664 "y.tab.c"
    break;

  case 62: /* stmt: ID ASSIGN NR ';'  */
#line 128 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1670 "y.tab.c"
    break;

  case 63: /* stmt: ID ASSIGN ID ';'  */
#line 129 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1676 "y.tab.c"
    break;

  case 64: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 130 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1682 "y.tab.c"
    break;

  case 65: /* stmt: ID ASSIGN STRING ';'  */
#line 131 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1688 "y.tab.c"
    break;

  case 66: /* stmt: ID DIGIT ';'  */
#line 132 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1694 "y.tab.c"
    break;

  case 67: /* stmt: ID '(' apel_fct ')' ';'  */
#line 133 "limbaj.y"
                                                 {search_function((yyvsp[-4].value));}
#line 1700 "y.tab.c"
    break;

  case 76: /* for_stmt: TIP ID ASSIGN NR  */
#line 146 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1706 "y.tab.c"
    break;

  case 77: /* for_stmt: TIP ID ASSIGN ID  */
#line 147 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1712 "y.tab.c"
    break;

  case 82: /* operator: NR  */
#line 156 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1718 "y.tab.c"
    break;

  case 83: /* operator: ID  */
#line 157 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1724 "y.tab.c"
    break;

  case 84: /* expr: operator '*' operator  */
#line 160 "limbaj.y"
                             {char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = a;}
#line 1730 "y.tab.c"
    break;

  case 85: /* expr: operator '/' operator  */
#line 161 "limbaj.y"
                             {char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = b;}
#line 1736 "y.tab.c"
    break;

  case 86: /* expr: operator '+' operator  */
#line 162 "limbaj.y"
                             {char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = c;}
#line 1742 "y.tab.c"
    break;

  case 87: /* expr: operator '-' operator  */
#line 163 "limbaj.y"
                             {char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = d;}
#line 1748 "y.tab.c"
    break;

  case 88: /* expr: operator '%' operator  */
#line 164 "limbaj.y"
                             {char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1754 "y.tab.c"
    break;

  case 109: /* stmt_clasa: TIP ID ';'  */
#line 205 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1760 "y.tab.c"
    break;

  case 110: /* stmt_clasa: TIP ID ASSIGN ID ';'  */
#line 207 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1766 "y.tab.c"
    break;

  case 111: /* stmt_clasa: TIP ID ASSIGN NR ';'  */
#line 208 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1772 "y.tab.c"
    break;

  case 112: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 209 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1778 "y.tab.c"
    break;

  case 113: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 210 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1784 "y.tab.c"
    break;

  case 114: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 211 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1790 "y.tab.c"
    break;

  case 115: /* stmt_clasa: ID ASSIGN ID ';'  */
#line 212 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1796 "y.tab.c"
    break;

  case 116: /* stmt_clasa: ID ASSIGN NR ';'  */
#line 213 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1802 "y.tab.c"
    break;

  case 117: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 214 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1808 "y.tab.c"
    break;

  case 118: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 215 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1814 "y.tab.c"
    break;

  case 119: /* stmt_clasa: ID DIGIT ';'  */
#line 216 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1820 "y.tab.c"
    break;

  case 120: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 217 "limbaj.y"
                                                       {search_function((yyvsp[-4].value));}
#line 1826 "y.tab.c"
    break;


#line 1830 "y.tab.c"

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

#line 233 "limbaj.y"



int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        print_table(errors);
}
