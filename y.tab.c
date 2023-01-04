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
  YYSYMBOL_expr = 59,                      /* expr  */
  YYSYMBOL_conditii = 60,                  /* conditii  */
  YYSYMBOL_apel_fct = 61,                  /* apel_fct  */
  YYSYMBOL_clase = 62,                     /* clase  */
  YYSYMBOL_instr_clasa = 63,               /* instr_clasa  */
  YYSYMBOL_instructiuni_clasa = 64,        /* instructiuni_clasa  */
  YYSYMBOL_stmt_clasa = 65,                /* stmt_clasa  */
  YYSYMBOL_apel_clase = 66,                /* apel_clase  */
  YYSYMBOL_main = 67                       /* main  */
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
#define YYLAST   516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

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
       0,    33,    33,    36,    37,    40,    41,    44,    45,    51,
      52,    55,    56,    57,    58,    59,    60,    61,    62,    65,
      66,    67,    72,    73,    76,    77,    78,    79,    80,    81,
      82,    83,    86,    87,    88,    89,    92,    93,    96,    97,
      98,   101,   102,   105,   106,   109,   110,   111,   114,   115,
     119,   120,   122,   123,   124,   125,   126,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   141,   142,   145,
     146,   147,   148,   151,   152,   156,   157,   158,   159,   160,
     161,   162,   163,   166,   167,   168,   169,   170,   174,   175,
     176,   177,   183,   184,   188,   189,   190,   191,   192,   193,
     196,   197,   200,   202,   203,   204,   205,   206,   209,   210,
     211,   212,   215,   216,   217,   218,   219,   220,   222,   223,
     224,   225
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
  "for_expr", "expr", "conditii", "apel_fct", "clase", "instr_clasa",
  "instructiuni_clasa", "stmt_clasa", "apel_clase", "main", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-22)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -156,    24,    39,  -156,    -3,    41,  -156,    62,    20,
      44,    51,    17,    81,     8,    58,  -156,   115,   205,   107,
     101,   114,   117,   137,   162,   102,  -156,  -156,   389,  -156,
    -156,  -156,  -156,   145,    49,   159,   171,   168,   175,  -156,
    -156,  -156,  -156,  -156,  -156,   287,  -156,   177,   196,    49,
     186,    49,  -156,    49,   198,   218,   227,    99,    99,    99,
      99,    99,    99,   393,   228,   149,    67,    49,   244,    49,
    -156,   246,   218,   267,    96,  -156,   276,   224,   224,  -156,
    -156,  -156,  -156,   259,   275,   342,  -156,   298,   287,   125,
     397,  -156,   102,  -156,   156,   304,   180,   316,   315,   218,
     314,  -156,  -156,  -156,   149,   320,   149,   324,   325,   326,
     327,   355,  -156,   331,   382,    77,  -156,   226,   375,   344,
     411,   412,   414,   415,    10,   371,   184,  -156,  -156,   363,
     330,   236,  -156,  -156,  -156,  -156,  -156,  -156,    42,    93,
     416,   401,   216,  -156,   135,   442,   430,   421,   346,   421,
     252,   218,   218,   405,   419,   149,   431,    80,  -156,  -156,
      33,  -156,    35,   200,  -156,   401,  -156,   152,  -156,  -156,
    -156,  -156,  -156,   420,   401,  -156,   409,    84,  -156,   287,
     128,   223,   173,   445,   433,   422,   268,   295,   423,   424,
     350,  -156,   303,    74,   413,  -156,   425,  -156,   437,  -156,
      95,   426,   401,  -156,   427,   428,   429,   432,   358,   417,
    -156,   421,   421,   421,   434,   449,   435,   160,   456,   421,
     436,   439,  -156,  -156,  -156,   440,    99,   149,  -156,   441,
     443,   444,   446,    85,  -156,   438,   447,  -156,   448,  -156,
    -156,  -156,   450,   451,   366,   307,  -156,  -156,   346,   452,
     346,  -156,  -156,   197,   274,  -156,  -156,  -156,   287,   310,
    -156,  -156,  -156,  -156,    99,   149,  -156,  -156,   453,  -156,
    -156,  -156,  -156,   239,   421,   256,  -156,  -156,   461,   454,
     374,   312,  -156,   459,   290,  -156,     5,   455,  -156,  -156,
     458,   457,   462,    99,  -156,   460,  -156,   346,  -156,   287,
     346,   272,   288,  -156,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    11,     0,     8,     0,     9,    17,     0,     0,
       0,     0,     0,     0,     0,     7,    23,    10,     0,    14,
      15,    16,    13,     0,     0,     0,     0,     0,     0,     2,
      22,    82,    19,    20,    81,    18,    12,     0,     0,    94,
       0,    97,   100,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    96,     0,    95,
     101,     0,    40,     0,     0,    36,     0,    77,    78,    80,
      75,    76,    79,     0,     0,     0,   110,    82,    89,     0,
       0,   102,    98,    93,    99,     0,     0,    38,     0,    40,
       0,   108,   109,   107,    91,     0,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    41,     0,
       0,     0,   111,    88,   103,   105,   106,   104,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    40,    40,     0,     0,    91,     0,     0,   118,    42,
       0,    66,     0,     0,    90,     0,    29,     0,    39,    32,
      34,    35,    33,     0,     0,    24,     0,     0,    87,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,    51,     0,   120,     0,   119,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    56,     0,     0,    91,   113,     0,
       0,     0,     0,     0,   121,     0,     0,    27,     0,    48,
      49,    47,     0,     0,     0,    84,    85,    86,     0,     0,
       0,    72,    71,     0,     0,    67,    68,    60,   114,     0,
      53,    54,    55,    52,     0,    91,   116,    31,     0,    26,
      45,    46,    44,     0,     0,     0,    70,    69,     0,     0,
       0,     0,    30,    61,     0,    63,     0,     0,   112,   117,
       0,     0,     0,     0,    74,     0,   115,     0,    64,    73,
       0,     0,     0,    62,    65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,  -156,  -156,   474,    -6,   -11,  -155,
     -68,   370,  -112,  -156,  -124,  -156,  -156,  -156,   -28,  -148,
     -99,  -156,   463,    75,   -45,  -117,  -156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    10,    49,    26,   173,
      74,    75,   126,   127,   128,   129,   185,   287,   179,   180,
      89,    14,    50,    51,    52,   130,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   182,   159,   144,    96,   131,    70,   133,    25,   160,
     201,   293,    21,    22,    40,     1,   153,    11,   163,   205,
     159,   294,    70,    18,     4,     5,   154,   167,    23,    77,
      78,    79,    80,    81,    82,    85,   181,    88,    40,   159,
       6,   153,   155,   159,     5,    69,   200,   236,    90,    70,
     156,   154,   196,    19,    22,   -21,   192,   159,    40,     6,
      12,    92,     7,   245,   246,   247,    13,   155,    47,    48,
      17,   254,   197,    90,   -21,   198,    88,    91,    88,    16,
     226,    40,   117,   186,   187,   118,   194,   119,   120,   121,
     209,   264,   141,    27,   122,   123,   142,   125,   117,    55,
      20,   118,    91,   119,   120,   121,   227,    22,   165,   228,
     122,   123,   142,   125,   196,   195,   143,   265,    41,   210,
     266,    28,    23,    44,    67,   190,   284,    88,   259,    98,
      99,    33,   166,    35,   234,   211,   273,    36,   275,    34,
     117,   212,   213,   118,    94,   119,   120,   121,   208,   159,
     174,   159,   122,   123,   142,   125,    37,   117,   105,   106,
     118,   214,   119,   120,   121,    38,   281,   202,    87,   122,
     123,   142,   125,    44,   175,    47,   111,   159,   159,   251,
     211,   244,    46,    63,   252,   301,   212,   213,   302,   117,
      54,   203,   118,    64,   119,   120,   121,    53,   258,    88,
      55,   122,   123,   124,   125,   117,   216,    56,   118,    65,
     119,   120,   121,   113,    99,    66,   276,   122,   123,   124,
     125,   277,   153,   158,    29,    68,    30,    31,   117,    32,
      72,   118,   154,   119,   120,   121,   280,    88,    73,   199,
     122,   123,   142,   125,   117,   145,   146,   118,   155,   119,
     120,   121,    59,    60,    61,    62,   122,   123,   142,   125,
      76,   117,   215,    86,   118,   299,   119,   120,   121,   164,
     106,   183,   184,   122,   123,   142,   125,   117,   283,    93,
     118,   211,   119,   120,   121,    95,    97,   212,   213,   122,
     123,   142,   125,   117,   101,   285,   118,   211,   119,   120,
     121,   220,    99,   212,   213,   122,   123,   142,   125,   278,
     102,   303,    57,    58,   100,    59,    60,    61,    62,   117,
     212,   213,   118,   292,   119,   120,   121,   304,   221,    99,
     104,   122,   123,   124,   125,   117,   225,   106,   118,   112,
     119,   120,   121,   279,   106,   290,   106,   122,   123,   162,
     125,   117,   114,   115,   118,   132,   119,   120,   121,   134,
     135,   136,   137,   122,   123,   142,   125,    57,    58,   139,
      59,    60,    61,    62,   138,    57,    58,   103,    59,    60,
      61,    62,   148,    57,    58,   224,    59,    60,    61,    62,
     157,    57,    58,   241,    59,    60,    61,    62,   161,    57,
      58,   272,    59,    60,    61,    62,   140,   147,    41,   289,
      42,    43,    41,    44,    83,    84,   107,    44,   108,   109,
     169,   110,   170,   171,    41,   172,   188,   189,    41,    44,
     206,   207,   229,    44,   230,   231,    41,   232,   242,   243,
      41,    44,   178,   149,   150,    44,   151,   152,   176,   177,
     193,   217,   218,   168,   191,   204,   233,   219,   222,   223,
     249,   235,   253,   238,   239,   198,   237,   240,   291,   116,
       0,   255,   248,   250,   256,   257,   260,   267,   261,   262,
     286,   263,   268,    15,   274,   270,   271,   269,   295,   288,
       0,     0,   282,   296,     0,   297,     0,   298,   300,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71
};

static const yytype_int16 yycheck[] =
{
      28,   149,   126,   115,    72,   104,    51,   106,    14,   126,
     165,     6,     4,     5,    25,    23,     6,    20,   130,   174,
     144,    16,    67,     6,     0,     5,    16,   139,    20,    57,
      58,    59,    60,    61,    62,    63,   148,    65,    49,   163,
      20,     6,    32,   167,     5,    51,   163,   202,     6,    94,
      40,    16,    19,    36,     5,    35,   155,   181,    69,    20,
      19,    67,    23,   211,   212,   213,     4,    32,    19,    20,
      19,   219,    39,     6,    35,    40,   104,    35,   106,    35,
       6,    92,     5,   151,   152,     8,     6,    10,    11,    12,
       6,     6,    15,    35,    17,    18,    19,    20,     5,    32,
      19,     8,    35,    10,    11,    12,    32,     5,    15,    35,
      17,    18,    19,    20,    19,    35,    39,    32,    19,    35,
      35,     6,    20,    24,    49,   153,   274,   155,   227,    33,
      34,    24,    39,    19,    39,     7,   248,    20,   250,    38,
       5,    13,    14,     8,    69,    10,    11,    12,   176,   273,
      15,   275,    17,    18,    19,    20,    19,     5,    33,    34,
       8,    33,    10,    11,    12,     3,   265,    15,    19,    17,
      18,    19,    20,    24,    39,    19,    20,   301,   302,    19,
       7,   209,    37,     6,    24,   297,    13,    14,   300,     5,
      19,    39,     8,    16,    10,    11,    12,    38,   226,   227,
      32,    17,    18,    19,    20,     5,    33,    32,     8,    32,
      10,    11,    12,    33,    34,    19,    19,    17,    18,    19,
      20,    24,     6,    39,    19,    39,    21,    22,     5,    24,
      32,     8,    16,    10,    11,    12,   264,   265,    20,    39,
      17,    18,    19,    20,     5,    19,    20,     8,    32,    10,
      11,    12,    28,    29,    30,    31,    17,    18,    19,    20,
      33,     5,    39,    35,     8,   293,    10,    11,    12,    33,
      34,    19,    20,    17,    18,    19,    20,     5,    39,    35,
       8,     7,    10,    11,    12,    39,    19,    13,    14,    17,
      18,    19,    20,     5,    35,    39,     8,     7,    10,    11,
      12,    33,    34,    13,    14,    17,    18,    19,    20,    35,
      35,    39,    25,    26,    38,    28,    29,    30,    31,     5,
      13,    14,     8,    33,    10,    11,    12,    39,    33,    34,
      32,    17,    18,    19,    20,     5,    33,    34,     8,    35,
      10,    11,    12,    33,    34,    33,    34,    17,    18,    19,
      20,     5,    36,    38,     8,    35,    10,    11,    12,    35,
      35,    35,    35,    17,    18,    19,    20,    25,    26,    38,
      28,    29,    30,    31,    19,    25,    26,    35,    28,    29,
      30,    31,    38,    25,    26,    35,    28,    29,    30,    31,
      19,    25,    26,    35,    28,    29,    30,    31,    35,    25,
      26,    35,    28,    29,    30,    31,    24,    32,    19,    35,
      21,    22,    19,    24,    21,    22,    19,    24,    21,    22,
      19,    24,    21,    22,    19,    24,    21,    22,    19,    24,
      21,    22,    19,    24,    21,    22,    19,    24,    21,    22,
      19,    24,    21,    32,    32,    24,    32,    32,     6,    19,
      19,     6,    19,    37,    35,    35,    19,    35,    35,    35,
      11,    35,     6,    35,    35,    40,    39,    35,     9,    99,
      -1,    35,    38,    38,    35,    35,    35,    39,    35,    35,
      19,    35,    35,     9,    32,    35,    35,    39,    33,    35,
      -1,    -1,    39,    35,    -1,    38,    -1,    35,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    20,    23,    44,    46,
      47,    20,    19,     4,    62,    47,    35,    19,     6,    36,
      19,     4,     5,    20,    45,    48,    49,    35,     6,    19,
      21,    22,    24,    24,    38,    19,    20,    19,     3,    67,
      49,    19,    21,    22,    24,    59,    37,    19,    20,    48,
      63,    64,    65,    38,    19,    32,    32,    25,    26,    28,
      29,    30,    31,     6,    16,    32,    19,    64,    39,    48,
      65,    63,    32,    20,    51,    52,    33,    59,    59,    59,
      59,    59,    59,    21,    22,    59,    35,    19,    59,    61,
       6,    35,    48,    35,    64,    39,    51,    19,    33,    34,
      38,    35,    35,    35,    32,    33,    34,    19,    21,    22,
      24,    20,    35,    33,    36,    38,    52,     5,     8,    10,
      11,    12,    17,    18,    19,    20,    53,    54,    55,    56,
      66,    61,    35,    61,    35,    35,    35,    35,    19,    38,
      24,    15,    19,    39,    53,    19,    20,    32,    38,    32,
      32,    32,    32,     6,    16,    32,    40,    19,    39,    55,
      66,    35,    19,    53,    33,    15,    39,    53,    37,    19,
      21,    22,    24,    50,    15,    39,     6,    19,    21,    59,
      60,    53,    60,    19,    20,    57,    51,    51,    21,    22,
      59,    35,    61,    19,     6,    35,    19,    39,    40,    39,
      66,    50,    15,    39,    35,    50,    21,    22,    59,     6,
      35,     7,    13,    14,    33,    39,    33,     6,    19,    35,
      33,    33,    35,    35,    35,    33,     6,    32,    35,    19,
      21,    22,    24,    19,    39,    35,    50,    39,    35,    35,
      35,    35,    21,    22,    59,    60,    60,    60,    38,    11,
      38,    19,    24,     6,    60,    35,    35,    35,    59,    61,
      35,    35,    35,    35,     6,    32,    35,    39,    35,    39,
      35,    35,    35,    53,    32,    53,    19,    24,    35,    33,
      59,    61,    39,    39,    60,    39,    19,    58,    35,    35,
      33,     9,    33,     6,    16,    33,    35,    38,    35,    59,
      38,    53,    53,    39,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     2,     5,     4,     4,     4,     4,     3,     5,     5,
       5,     0,     2,     1,     8,     7,    11,    10,     9,     8,
      12,    11,     1,     1,     1,     1,     1,     3,     2,     5,
       0,     1,     2,     4,     6,     6,     6,     5,     5,     5,
       1,     3,     5,     5,     5,     5,     4,     4,     4,     3,
       5,     7,    11,     7,     9,    11,     2,     5,     5,     4,
       4,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     1,     3,     1,
       4,     0,     7,     6,     1,     2,     2,     1,     3,     3,
       1,     2,     3,     5,     5,     5,     5,     4,     4,     4,
       3,     5,     7,     4,     5,     8,     5,     7,     6,     7,
       7,     8
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
#line 1458 "y.tab.c"
    break;

  case 11: /* variabila: TIP ID  */
#line 55 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1464 "y.tab.c"
    break;

  case 12: /* variabila: TIP ID '[' NR ']'  */
#line 56 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1470 "y.tab.c"
    break;

  case 13: /* variabila: TIP ID ASSIGN NR  */
#line 57 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1476 "y.tab.c"
    break;

  case 14: /* variabila: TIP ID ASSIGN ID  */
#line 58 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1482 "y.tab.c"
    break;

  case 15: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 59 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1488 "y.tab.c"
    break;

  case 16: /* variabila: TIP ID ASSIGN STRING  */
#line 60 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1494 "y.tab.c"
    break;

  case 17: /* variabila: CONST TIP ID  */
#line 61 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1500 "y.tab.c"
    break;

  case 18: /* variabila: CONST TIP ID ASSIGN expr  */
#line 62 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1506 "y.tab.c"
    break;

  case 19: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 65 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1512 "y.tab.c"
    break;

  case 20: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 66 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1518 "y.tab.c"
    break;

  case 24: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 76 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), "");}
#line 1524 "y.tab.c"
    break;

  case 25: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 77 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), "");}
#line 1530 "y.tab.c"
    break;

  case 26: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 78 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1536 "y.tab.c"
    break;

  case 27: /* functie: TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 79 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1542 "y.tab.c"
    break;

  case 28: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 80 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));}
#line 1548 "y.tab.c"
    break;

  case 29: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 81 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));}
#line 1554 "y.tab.c"
    break;

  case 30: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 82 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1560 "y.tab.c"
    break;

  case 31: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 83 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1566 "y.tab.c"
    break;

  case 38: /* parametru: TIP ID  */
#line 96 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1572 "y.tab.c"
    break;

  case 39: /* parametru: TIP ID '[' NR ']'  */
#line 97 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1578 "y.tab.c"
    break;

  case 40: /* parametru: %empty  */
#line 98 "limbaj.y"
                                {par_fct("", "");}
#line 1584 "y.tab.c"
    break;

  case 43: /* const_: CONST TIP ID ';'  */
#line 105 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1590 "y.tab.c"
    break;

  case 44: /* const_: CONST TIP ID ASSIGN expr ';'  */
#line 106 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1596 "y.tab.c"
    break;

  case 45: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 109 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1602 "y.tab.c"
    break;

  case 46: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 110 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1608 "y.tab.c"
    break;

  case 51: /* stmt: TIP ID ';'  */
#line 120 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1614 "y.tab.c"
    break;

  case 52: /* stmt: TIP ID ASSIGN NR ';'  */
#line 122 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1620 "y.tab.c"
    break;

  case 53: /* stmt: TIP ID ASSIGN ID ';'  */
#line 123 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1626 "y.tab.c"
    break;

  case 54: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 124 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1632 "y.tab.c"
    break;

  case 55: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 125 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1638 "y.tab.c"
    break;

  case 56: /* stmt: ID ASSIGN expr ';'  */
#line 126 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1644 "y.tab.c"
    break;

  case 57: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 129 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1650 "y.tab.c"
    break;

  case 58: /* stmt: ID ASSIGN STRING ';'  */
#line 130 "limbaj.y"
                                                {search_var((yyvsp[-3].value));}
#line 1656 "y.tab.c"
    break;

  case 59: /* stmt: ID DIGIT ';'  */
#line 131 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1662 "y.tab.c"
    break;

  case 60: /* stmt: ID '(' apel_fct ')' ';'  */
#line 132 "limbaj.y"
                                                 {search_function((yyvsp[-4].value));}
#line 1668 "y.tab.c"
    break;

  case 69: /* for_stmt: TIP ID ASSIGN NR  */
#line 145 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1674 "y.tab.c"
    break;

  case 70: /* for_stmt: TIP ID ASSIGN ID  */
#line 146 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1680 "y.tab.c"
    break;

  case 75: /* expr: expr '*' expr  */
#line 156 "limbaj.y"
                     {char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = a;}
#line 1686 "y.tab.c"
    break;

  case 76: /* expr: expr '/' expr  */
#line 157 "limbaj.y"
                     {char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = b;}
#line 1692 "y.tab.c"
    break;

  case 77: /* expr: expr '+' expr  */
#line 158 "limbaj.y"
                     {char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = c;}
#line 1698 "y.tab.c"
    break;

  case 78: /* expr: expr '-' expr  */
#line 159 "limbaj.y"
                     {char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = d;}
#line 1704 "y.tab.c"
    break;

  case 79: /* expr: expr '%' expr  */
#line 160 "limbaj.y"
                     {char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1710 "y.tab.c"
    break;

  case 80: /* expr: expr '^' expr  */
#line 161 "limbaj.y"
                     {char* e = (char *)malloc(10); sprintf(e, "%s^%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1716 "y.tab.c"
    break;

  case 81: /* expr: NR  */
#line 162 "limbaj.y"
          {(yyval.value) = (yyvsp[0].value);}
#line 1722 "y.tab.c"
    break;

  case 82: /* expr: ID  */
#line 163 "limbaj.y"
          {(yyval.value) = (yyvsp[0].value);}
#line 1728 "y.tab.c"
    break;

  case 102: /* stmt_clasa: TIP ID ';'  */
#line 200 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1734 "y.tab.c"
    break;

  case 103: /* stmt_clasa: TIP ID ASSIGN ID ';'  */
#line 202 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1740 "y.tab.c"
    break;

  case 104: /* stmt_clasa: TIP ID ASSIGN NR ';'  */
#line 203 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1746 "y.tab.c"
    break;

  case 105: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 204 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1752 "y.tab.c"
    break;

  case 106: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 205 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1758 "y.tab.c"
    break;

  case 107: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 206 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1764 "y.tab.c"
    break;

  case 108: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 209 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1770 "y.tab.c"
    break;

  case 109: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 210 "limbaj.y"
                                                      {search_var((yyvsp[-3].value));}
#line 1776 "y.tab.c"
    break;

  case 110: /* stmt_clasa: ID DIGIT ';'  */
#line 211 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1782 "y.tab.c"
    break;

  case 111: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 212 "limbaj.y"
                                                       {search_function((yyvsp[-4].value));}
#line 1788 "y.tab.c"
    break;


#line 1792 "y.tab.c"

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
        print_table(errors);
}
