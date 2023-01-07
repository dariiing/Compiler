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
#define YYLAST   571

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

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
      85,    86,    87,    89,    90,    91,    92,    96,    99,   100,
     101,   102,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   121,   122,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   143,   144,   147,   148,   149,   152,   153,   156,   157,
     158,   159,   160,   161,   162,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   184,   185,   188,   189,   190,   191,   194,   195,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   216,   217,   218,   219,   220,   221,   222,
     223,   224
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

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -167,    14,   112,  -167,    41,    38,  -167,    59,    42,
      56,    78,     2,    84,   169,    74,  -167,   109,   188,    97,
     102,   115,   121,   131,   157,     4,  -167,  -167,   247,  -167,
    -167,  -167,  -167,   129,    79,   145,   156,   166,   181,  -167,
    -167,  -167,  -167,  -167,  -167,   218,   488,  -167,   123,   165,
     134,    79,  -167,    79,    79,   183,   201,   168,   495,   218,
     218,   218,   218,   218,   218,   268,   196,   248,    37,   209,
    -167,    79,    79,   204,   201,   232,    16,  -167,   221,   218,
     218,   218,   218,   218,   218,   287,   287,  -167,  -167,  -167,
    -167,   239,   243,   408,  -167,   254,    61,   488,   305,  -167,
    -167,   172,     4,   253,   226,   256,   257,   201,   323,   199,
     499,   266,   278,   292,   297,  -167,  -167,  -167,   248,   301,
     248,   303,   313,   416,   342,  -167,   296,   344,     8,  -167,
     289,   340,   338,   343,   352,   356,   358,    98,   372,  -167,
     206,  -167,  -167,   365,  -167,  -167,  -167,  -167,  -167,  -167,
     312,  -167,  -167,  -167,  -167,  -167,    40,    68,   362,   341,
     162,  -167,   108,  -167,   400,   388,   399,   339,   399,   333,
     201,   201,   345,   381,   248,   407,    58,  -167,  -167,  -167,
    -167,  -167,   357,  -167,   185,  -167,   384,   397,   424,   361,
    -167,  -167,   373,    75,  -167,   403,   488,   144,   228,   149,
     434,   411,   413,   321,   337,   421,   429,   432,  -167,   353,
     105,   377,  -167,   437,   445,   440,   389,  -167,   451,   459,
     467,   477,   487,   448,   496,   498,   456,   393,  -167,   501,
     495,   173,   399,   399,   399,   500,   524,   502,    -9,   531,
     399,   504,   505,  -167,  -167,  -167,   506,   218,   248,  -167,
     507,   508,   464,   509,   510,   511,   514,   515,   472,  -167,
    -167,  -167,   516,   517,   518,  -167,  -167,  -167,   521,   522,
     480,  -167,   399,   399,   399,   390,  -167,  -167,   339,   512,
     339,  -167,  -167,   234,   135,  -167,  -167,  -167,   488,   395,
    -167,  -167,  -167,  -167,  -167,  -167,   523,   525,   526,  -167,
    -167,  -167,  -167,  -167,  -167,   139,   519,   528,   244,   399,
     265,  -167,  -167,   532,   529,  -167,  -167,  -167,  -167,  -167,
    -167,   536,   152,  -167,    96,   533,  -167,   534,   530,   218,
    -167,   535,   339,  -167,   488,   339,   286,   302,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     3,     0,     5,
       0,     0,    42,     0,     8,     0,     9,    48,     0,     0,
       0,     0,     0,     0,     0,     7,    54,    10,     0,    45,
      46,    47,    44,     0,     0,     0,     0,     0,     0,     2,
      53,   122,    50,    51,   121,     0,    49,    43,     0,     0,
       0,    16,    19,    13,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
      20,    14,    15,     0,    75,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,   113,   115,   119,   109,   111,
     117,     0,     0,     0,    28,   122,     0,    34,     0,    21,
      12,    18,    17,     0,     0,    73,     0,    75,     0,   113,
     115,   119,   109,   111,   117,    26,    27,    25,    36,     0,
      36,     0,     0,     0,     0,    11,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,    85,    40,     0,   114,   116,   120,   110,   112,   118,
       0,    29,    33,    23,    24,    22,     0,     0,     0,     0,
       0,    56,     0,    76,     0,     0,     0,     0,     0,     0,
      75,    75,     0,     0,    36,     0,     0,    37,    39,    38,
     100,    35,     0,    64,     0,    74,     0,     0,     0,     0,
      55,    77,     0,     0,   130,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,    86,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,   130,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    90,     0,     0,    36,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    60,     0,     0,     0,    83,    84,    82,     0,     0,
       0,   131,     0,     0,     0,   124,   126,   128,     0,     0,
       0,   106,   105,     0,     0,   101,   102,    94,    32,     0,
      88,    89,    87,    69,    70,    68,     0,     0,     0,    58,
      59,    57,    80,    81,    79,   124,   126,   128,     0,     0,
       0,   104,   103,     0,     0,    66,    67,    65,   125,   127,
     129,    95,     0,    97,     0,     0,    30,     0,     0,     0,
     108,     0,     0,    98,   107,     0,     0,     0,    96,    99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,  -167,  -167,  -167,   513,   -23,   -30,
     418,  -115,  -167,  -167,   550,    -7,   -13,   -70,   461,  -156,
    -167,  -102,  -167,  -167,  -167,   -28,  -166
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    24,     9,    14,    50,    51,    52,
     139,    96,    39,   140,    10,    53,    26,    76,    77,   162,
     141,   163,   143,   202,   325,   196,   197
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   184,   199,   150,   104,   152,   142,    25,    18,    22,
     281,   198,    40,   130,     4,   282,   131,    58,   132,   133,
     134,    70,     1,   159,    23,   135,   136,   160,   138,   231,
      72,    85,    86,    87,    88,    89,    90,    93,   179,    97,
      40,    19,    70,    98,    71,   161,    98,     5,   101,   106,
     107,   109,   110,   111,   112,   113,   114,    12,    40,   209,
     191,    11,     6,    13,   211,   102,   275,   276,   277,    56,
     123,    70,    99,   130,   284,    99,   131,   -52,   132,   133,
     134,   227,   191,   182,    22,   135,   136,   160,   138,    40,
      97,    16,    97,   212,   119,   120,   191,    17,    48,    49,
     203,   204,   329,    20,   172,   183,   305,   306,   307,    27,
     228,   247,   330,   130,   173,    28,   131,     5,   132,   133,
     134,    33,   308,   189,   310,   135,   136,   160,   138,    65,
     174,   188,     6,   289,    35,     7,   175,   248,    34,    66,
     249,    36,   232,   322,   207,   190,    97,   -52,   233,   234,
      37,   232,   233,   234,   215,    67,   232,   233,   234,   232,
      38,   223,   233,   234,   226,   233,   234,   230,   172,    47,
     313,    69,   318,    21,    22,    55,   336,   235,   173,   337,
     272,    54,   237,   252,    68,   328,   273,   274,   258,    23,
     130,    48,   124,   131,   174,   132,   133,   134,    56,   270,
     216,    78,   135,   136,   160,   138,   191,    29,   191,    30,
      31,   130,    32,    57,   131,    74,   132,   133,   134,   288,
      97,    75,   217,   135,   136,   137,   138,    61,    62,    63,
      64,    94,   144,   130,   191,   191,   131,    41,   132,   133,
     134,   103,    44,   177,   100,   135,   136,   160,   138,   130,
      45,   105,   131,   311,   132,   133,   134,   108,   312,   126,
     107,   135,   136,   160,   138,   236,    41,    95,    42,    43,
     130,    44,    44,   131,   115,   132,   133,   134,   116,    45,
      45,   321,   135,   136,   160,   138,   118,    41,   125,    91,
      92,   130,    44,   128,   131,   127,   132,   133,   134,   146,
      45,   334,   323,   135,   136,   160,   138,   130,   164,   165,
     131,   147,   132,   133,   134,    61,    62,    63,    64,   135,
     136,   160,   138,   338,    41,   148,   121,   122,   130,    44,
     149,   131,   157,   132,   133,   134,   151,    45,   153,   339,
     135,   136,   137,   138,   130,   181,   120,   131,   154,   132,
     133,   134,   200,   201,   241,   107,   135,   136,   160,   138,
      41,   156,   186,   187,    41,    44,   205,   206,   158,    44,
     242,   107,   166,    45,   167,   168,    41,    45,   213,   214,
      41,    44,   221,   222,   169,    44,   246,   120,   170,    45,
     171,   176,    41,    45,   224,   225,    41,    44,   250,   251,
     180,    44,   185,   233,   234,    45,   192,   193,    41,    45,
     256,   257,    41,    44,   268,   269,   208,    44,    41,   218,
     194,    45,    41,    44,   229,    45,   210,    44,   314,   120,
     239,   195,   219,    59,    60,   195,    61,    62,    63,    64,
     238,    59,    60,   117,    61,    62,    63,    64,   240,    59,
      60,   155,    61,    62,    63,    64,   243,    59,    60,   220,
      61,    62,    63,    64,   244,    59,    60,   245,    61,    62,
      63,    64,   253,    59,    60,   255,    61,    62,    63,    64,
     254,    59,    60,   264,    61,    62,    63,    64,   259,    59,
      60,   267,    61,    62,    63,    64,   260,    59,    60,   292,
      61,    62,    63,    64,   261,    59,    60,   298,    61,    62,
      63,    64,   262,    59,    60,   304,    61,    62,    63,    64,
      79,    80,   263,    81,    82,    83,    84,    61,    62,    63,
      64,   265,   145,   266,   271,   279,   278,   283,   280,   285,
     286,   287,   290,   291,   309,   327,   293,   294,   295,   296,
     297,   324,   319,   299,   300,   301,   302,   303,   178,    15,
     315,   320,   316,   317,   326,   333,   331,    73,   129,     0,
     332,   335
};

static const yytype_int16 yycheck[] =
{
      28,   157,   168,   118,    74,   120,   108,    14,     6,     5,
      19,   167,    25,     5,     0,    24,     8,    45,    10,    11,
      12,    51,    23,    15,    20,    17,    18,    19,    20,   195,
      53,    59,    60,    61,    62,    63,    64,    65,   140,    67,
      53,    39,    72,     6,    51,    37,     6,     5,    71,    33,
      34,    79,    80,    81,    82,    83,    84,    19,    71,   174,
     162,    20,    20,     4,     6,    72,   232,   233,   234,    32,
      98,   101,    35,     5,   240,    35,     8,    35,    10,    11,
      12,     6,   184,    15,     5,    17,    18,    19,    20,   102,
     118,    35,   120,    35,    33,    34,   198,    19,    19,    20,
     170,   171,     6,    19,     6,    37,   272,   273,   274,    35,
      35,     6,    16,     5,    16,     6,     8,     5,    10,    11,
      12,    24,   278,    15,   280,    17,    18,    19,    20,     6,
      32,   159,    20,   248,    19,    23,    38,    32,    36,    16,
      35,    20,     7,   309,   172,    37,   174,    35,    13,    14,
      19,     7,    13,    14,   182,    32,     7,    13,    14,     7,
       3,   189,    13,    14,   192,    13,    14,   195,     6,    40,
      35,    37,    33,     4,     5,    19,   332,    33,    16,   335,
       7,    36,    33,   211,    19,    33,    13,    14,   216,    20,
       5,    19,    20,     8,    32,    10,    11,    12,    32,   227,
      15,    33,    17,    18,    19,    20,   308,    19,   310,    21,
      22,     5,    24,    32,     8,    32,    10,    11,    12,   247,
     248,    20,    37,    17,    18,    19,    20,    28,    29,    30,
      31,    35,    33,     5,   336,   337,     8,    19,    10,    11,
      12,    37,    24,    37,    35,    17,    18,    19,    20,     5,
      32,    19,     8,    19,    10,    11,    12,    36,    24,    33,
      34,    17,    18,    19,    20,    37,    19,    19,    21,    22,
       5,    24,    24,     8,    35,    10,    11,    12,    35,    32,
      32,    37,    17,    18,    19,    20,    32,    19,    35,    21,
      22,     5,    24,    36,     8,    39,    10,    11,    12,    33,
      32,   329,    37,    17,    18,    19,    20,     5,    19,    20,
       8,    33,    10,    11,    12,    28,    29,    30,    31,    17,
      18,    19,    20,    37,    19,    33,    21,    22,     5,    24,
      33,     8,    36,    10,    11,    12,    35,    32,    35,    37,
      17,    18,    19,    20,     5,    33,    34,     8,    35,    10,
      11,    12,    19,    20,    33,    34,    17,    18,    19,    20,
      19,    19,    21,    22,    19,    24,    21,    22,    24,    24,
      33,    34,    32,    32,    36,    32,    19,    32,    21,    22,
      19,    24,    21,    22,    32,    24,    33,    34,    32,    32,
      32,    19,    19,    32,    21,    22,    19,    24,    21,    22,
      35,    24,    40,    13,    14,    32,     6,    19,    19,    32,
      21,    22,    19,    24,    21,    22,    35,    24,    19,    35,
      21,    32,    19,    24,    21,    32,    19,    24,    33,    34,
      19,    32,    35,    25,    26,    32,    28,    29,    30,    31,
       6,    25,    26,    35,    28,    29,    30,    31,    35,    25,
      26,    35,    28,    29,    30,    31,    35,    25,    26,    35,
      28,    29,    30,    31,    35,    25,    26,    35,    28,    29,
      30,    31,    35,    25,    26,    35,    28,    29,    30,    31,
      35,    25,    26,    35,    28,    29,    30,    31,    37,    25,
      26,    35,    28,    29,    30,    31,    37,    25,    26,    35,
      28,    29,    30,    31,    37,    25,    26,    35,    28,    29,
      30,    31,    35,    25,    26,    35,    28,    29,    30,    31,
      25,    26,    35,    28,    29,    30,    31,    28,    29,    30,
      31,    35,    33,    35,    33,    11,    36,     6,    36,    35,
      35,    35,    35,    35,    32,     9,    37,    37,    37,    35,
      35,    19,    33,    37,    37,    37,    35,    35,   140,     9,
      37,    33,    37,    37,    35,    35,    33,    54,   107,    -1,
      36,    36
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
      48,    49,    50,    56,    36,    19,    32,    32,    66,    25,
      26,    28,    29,    30,    31,     6,    16,    32,    19,    37,
      50,    56,    49,    48,    32,    20,    58,    59,    33,    25,
      26,    28,    29,    30,    31,    66,    66,    66,    66,    66,
      66,    21,    22,    66,    35,    19,    52,    66,     6,    35,
      35,    49,    56,    37,    58,    19,    33,    34,    36,    66,
      66,    66,    66,    66,    66,    35,    35,    35,    32,    33,
      34,    21,    22,    66,    20,    35,    33,    39,    36,    59,
       5,     8,    10,    11,    12,    17,    18,    19,    20,    51,
      54,    61,    62,    63,    33,    33,    33,    33,    33,    33,
      52,    35,    52,    35,    35,    35,    19,    36,    24,    15,
      19,    37,    60,    62,    19,    20,    32,    36,    32,    32,
      32,    32,     6,    16,    32,    38,    19,    37,    51,    62,
      35,    33,    15,    37,    60,    40,    21,    22,    66,    15,
      37,    62,     6,    19,    21,    32,    66,    67,    60,    67,
      19,    20,    64,    58,    58,    21,    22,    66,    35,    52,
      19,     6,    35,    21,    22,    66,    15,    37,    35,    35,
      35,    21,    22,    66,    21,    22,    66,     6,    35,    21,
      66,    67,     7,    13,    14,    33,    37,    33,     6,    19,
      35,    33,    33,    35,    35,    35,    33,     6,    32,    35,
      21,    22,    66,    35,    35,    35,    21,    22,    66,    37,
      37,    37,    35,    35,    35,    35,    35,    35,    21,    22,
      66,    33,     7,    13,    14,    67,    67,    67,    36,    11,
      36,    19,    24,     6,    67,    35,    35,    35,    66,    52,
      35,    35,    35,    37,    37,    37,    35,    35,    35,    37,
      37,    37,    35,    35,    35,    67,    67,    67,    60,    32,
      60,    19,    24,    35,    33,    37,    37,    37,    33,    33,
      33,    37,    67,    37,    19,    65,    35,     9,    33,     6,
      16,    33,    36,    35,    66,    36,    60,    60,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    52,    53,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     7,     6,     1,     2,     2,     1,     3,     3,     1,
       2,     3,     5,     5,     5,     4,     4,     4,     3,     5,
       7,     4,     5,     3,     1,     4,     0,     6,     2,     2,
       1,     1,     2,     5,     4,     4,     4,     4,     3,     5,
       5,     5,     0,     2,     1,     8,     7,    11,    11,    11,
      10,    10,    10,     9,     8,    12,    12,    12,    11,    11,
      11,     1,     3,     2,     5,     0,     1,     2,     4,     6,
       6,     6,     5,     5,     5,     1,     3,     5,     5,     5,
       4,     4,     4,     3,     5,     7,    11,     7,     9,    11,
       2,     5,     5,     4,     4,     3,     3,     3,     2,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     1,     1,     1,     3,     5,     3,     5,     3,     5,
       1,     3
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
#line 1482 "y.tab.c"
    break;

  case 21: /* stmt_clasa: TIP ID ';'  */
#line 74 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1488 "y.tab.c"
    break;

  case 22: /* stmt_clasa: TIP ID ASSIGN expr ';'  */
#line 75 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1494 "y.tab.c"
    break;

  case 23: /* stmt_clasa: TIP ID ASSIGN VARBOOL ';'  */
#line 76 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1500 "y.tab.c"
    break;

  case 24: /* stmt_clasa: TIP ID ASSIGN STRING ';'  */
#line 77 "limbaj.y"
                                                      {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1506 "y.tab.c"
    break;

  case 25: /* stmt_clasa: ID ASSIGN expr ';'  */
#line 78 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1512 "y.tab.c"
    break;

  case 26: /* stmt_clasa: ID ASSIGN VARBOOL ';'  */
#line 79 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1518 "y.tab.c"
    break;

  case 27: /* stmt_clasa: ID ASSIGN STRING ';'  */
#line 80 "limbaj.y"
                                                      {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1524 "y.tab.c"
    break;

  case 28: /* stmt_clasa: ID DIGIT ';'  */
#line 81 "limbaj.y"
                                                      {search_var((yyvsp[-2].value));}
#line 1530 "y.tab.c"
    break;

  case 29: /* stmt_clasa: ID '(' apel_fct ')' ';'  */
#line 82 "limbaj.y"
                                                      {search_function((yyvsp[-4].value));}
#line 1536 "y.tab.c"
    break;

  case 42: /* variabila: TIP ID  */
#line 106 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1542 "y.tab.c"
    break;

  case 43: /* variabila: TIP ID '[' NR ']'  */
#line 107 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1548 "y.tab.c"
    break;

  case 44: /* variabila: TIP ID ASSIGN NR  */
#line 108 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1554 "y.tab.c"
    break;

  case 45: /* variabila: TIP ID ASSIGN ID  */
#line 109 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1560 "y.tab.c"
    break;

  case 46: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 110 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1566 "y.tab.c"
    break;

  case 47: /* variabila: TIP ID ASSIGN STRING  */
#line 111 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1572 "y.tab.c"
    break;

  case 48: /* variabila: CONST TIP ID  */
#line 112 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1578 "y.tab.c"
    break;

  case 49: /* variabila: CONST TIP ID ASSIGN expr  */
#line 113 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1584 "y.tab.c"
    break;

  case 50: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 114 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1590 "y.tab.c"
    break;

  case 51: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 115 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value)); verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1596 "y.tab.c"
    break;

  case 55: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 125 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), ""); }
#line 1602 "y.tab.c"
    break;

  case 56: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 126 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), ""); }
#line 1608 "y.tab.c"
    break;

  case 57: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'  */
#line 127 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1614 "y.tab.c"
    break;

  case 58: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'  */
#line 128 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1620 "y.tab.c"
    break;

  case 59: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}'  */
#line 129 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1626 "y.tab.c"
    break;

  case 60: /* functie: TIP ID '(' parametri ')' '{' RETURN expr ';' '}'  */
#line 130 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value)); }
#line 1632 "y.tab.c"
    break;

  case 61: /* functie: TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'  */
#line 131 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value)); }
#line 1638 "y.tab.c"
    break;

  case 62: /* functie: TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'  */
#line 132 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value)); }
#line 1644 "y.tab.c"
    break;

  case 63: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 133 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));  }
#line 1650 "y.tab.c"
    break;

  case 64: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 134 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));  }
#line 1656 "y.tab.c"
    break;

  case 65: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'  */
#line 135 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1662 "y.tab.c"
    break;

  case 66: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'  */
#line 136 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1668 "y.tab.c"
    break;

  case 67: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}'  */
#line 137 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-2].value)); }
#line 1674 "y.tab.c"
    break;

  case 68: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN expr ';' '}'  */
#line 138 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value));  }
#line 1680 "y.tab.c"
    break;

  case 69: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'  */
#line 139 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value));  }
#line 1686 "y.tab.c"
    break;

  case 70: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'  */
#line 140 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-2].value));  }
#line 1692 "y.tab.c"
    break;

  case 73: /* parametru: TIP ID  */
#line 147 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1698 "y.tab.c"
    break;

  case 74: /* parametru: TIP ID '[' NR ']'  */
#line 148 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1704 "y.tab.c"
    break;

  case 75: /* parametru: %empty  */
#line 149 "limbaj.y"
                                {par_fct("", "");}
#line 1710 "y.tab.c"
    break;

  case 78: /* const_: CONST TIP ID ';'  */
#line 156 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1716 "y.tab.c"
    break;

  case 79: /* const_: CONST TIP ID ASSIGN expr ';'  */
#line 157 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1722 "y.tab.c"
    break;

  case 80: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 158 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1728 "y.tab.c"
    break;

  case 81: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 159 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1734 "y.tab.c"
    break;

  case 86: /* stmt: TIP ID ';'  */
#line 167 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1740 "y.tab.c"
    break;

  case 87: /* stmt: TIP ID ASSIGN expr ';'  */
#line 168 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1746 "y.tab.c"
    break;

  case 88: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 169 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1752 "y.tab.c"
    break;

  case 89: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 170 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1758 "y.tab.c"
    break;

  case 90: /* stmt: ID ASSIGN expr ';'  */
#line 171 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1764 "y.tab.c"
    break;

  case 91: /* stmt: ID ASSIGN VARBOOL ';'  */
#line 172 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1770 "y.tab.c"
    break;

  case 92: /* stmt: ID ASSIGN STRING ';'  */
#line 173 "limbaj.y"
                                                {search_var((yyvsp[-3].value)); verif_type_var((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1776 "y.tab.c"
    break;

  case 93: /* stmt: ID DIGIT ';'  */
#line 174 "limbaj.y"
                                                {search_var((yyvsp[-2].value));}
#line 1782 "y.tab.c"
    break;

  case 94: /* stmt: ID '(' apel_fct ')' ';'  */
#line 175 "limbaj.y"
                                                {search_function((yyvsp[-4].value));}
#line 1788 "y.tab.c"
    break;

  case 103: /* for_stmt: TIP ID ASSIGN NR  */
#line 188 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1794 "y.tab.c"
    break;

  case 104: /* for_stmt: TIP ID ASSIGN ID  */
#line 189 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));verif_type_var((yyvsp[-2].value),(yyvsp[0].value));}
#line 1800 "y.tab.c"
    break;

  case 109: /* expr: expr '*' expr  */
#line 199 "limbaj.y"
                             { /*$$ = createNode("*", $1, $3);*/ char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = a;}
#line 1806 "y.tab.c"
    break;

  case 110: /* expr: '(' expr '*' expr ')'  */
#line 200 "limbaj.y"
                             { /*$$ = createNode("*", $2, $4);*/ char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = a;}
#line 1812 "y.tab.c"
    break;

  case 111: /* expr: expr '/' expr  */
#line 201 "limbaj.y"
                             { /*$$ = createNode("/", $1, $3);*/ char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = b;}
#line 1818 "y.tab.c"
    break;

  case 112: /* expr: '(' expr '/' expr ')'  */
#line 202 "limbaj.y"
                             { /*$$ = createNode("/", $2, $4);*/char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = b;}
#line 1824 "y.tab.c"
    break;

  case 113: /* expr: expr '+' expr  */
#line 203 "limbaj.y"
                             { /*$$ = createNode("+", $1, $3);*/char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = c;}
#line 1830 "y.tab.c"
    break;

  case 114: /* expr: '(' expr '+' expr ')'  */
#line 204 "limbaj.y"
                             { /*$$ = createNode("+", $2, $4);*/char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = c;}
#line 1836 "y.tab.c"
    break;

  case 115: /* expr: expr '-' expr  */
#line 205 "limbaj.y"
                             { /*$$ = createNode("-", $1, $3);*/char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = d;}
#line 1842 "y.tab.c"
    break;

  case 116: /* expr: '(' expr '-' expr ')'  */
#line 206 "limbaj.y"
                             { /*$$ = createNode("-", $2, $4);*/ char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = d;}
#line 1848 "y.tab.c"
    break;

  case 117: /* expr: expr '%' expr  */
#line 207 "limbaj.y"
                             { /*$$ = createNode("%", $1, $3);*/ char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1854 "y.tab.c"
    break;

  case 118: /* expr: '(' expr '%' expr ')'  */
#line 208 "limbaj.y"
                             { /*$$ = createNode("%", $2, $4);*/char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = e;}
#line 1860 "y.tab.c"
    break;

  case 119: /* expr: expr '^' expr  */
#line 209 "limbaj.y"
                             { /*$$ = createNode("^", $1, $3);*/char* e = (char *)malloc(10); sprintf(e, "%s^%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1866 "y.tab.c"
    break;

  case 120: /* expr: '(' expr '^' expr ')'  */
#line 210 "limbaj.y"
                             { /*$$ = createNode("^", $2, $4);*/ char* e = (char *)malloc(10); sprintf(e, "%s^%s", (yyvsp[-3].value), (yyvsp[-1].value)); (yyval.value) = e;}
#line 1872 "y.tab.c"
    break;

  case 121: /* expr: NR  */
#line 211 "limbaj.y"
                             {(yyval.value) = (yyvsp[0].value);}
#line 1878 "y.tab.c"
    break;

  case 122: /* expr: ID  */
#line 212 "limbaj.y"
                             {(yyval.value) = (yyvsp[0].value);}
#line 1884 "y.tab.c"
    break;


#line 1888 "y.tab.c"

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

#line 227 "limbaj.y"



int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);

        printTree(root,0);
        //printf("Result: %d\n", evaluateTree(root));
        print_table(errors);
}
