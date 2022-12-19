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
#include <stdlib.h>
#include <stdbool.h>

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int count_lines;

void tip_id_val(bool, char *, char *, char*);
void tip_fct(bool, char *, char *, char*);
void par_fct(char *, char *);

bool found(char *);
bool fct_found(char*);

int var_used;
int fct_used;
int count = 0; //pt table[] 
int count_fct = 0; //pt t_fct[]
int errors = 0;

struct fct{

        struct param{
                char* type;
                char* name;
                char* value;
                
        } param_fct[5];

        
        char* type;
        char* name;
        char* ret;
        int rownum;
        int nr_param;
        bool const_fct;

}t_fct[40];

struct data{

        char* type;
        char* name;
        char* value;

        int line_number;
        bool const_var; 

} table[40];


#line 127 "y.tab.c"

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
#line 57 "limbaj.y"


        char *value;

#line 233 "y.tab.c"

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
  YYSYMBOL_eval_type = 50,                 /* eval_type  */
  YYSYMBOL_ret = 51,                       /* ret  */
  YYSYMBOL_parametri = 52,                 /* parametri  */
  YYSYMBOL_parametru = 53,                 /* parametru  */
  YYSYMBOL_instructiuni = 54,              /* instructiuni  */
  YYSYMBOL_const_ = 55,                    /* const_  */
  YYSYMBOL_stmt = 56,                      /* stmt  */
  YYSYMBOL_for_stmt = 57,                  /* for_stmt  */
  YYSYMBOL_for_expr = 58,                  /* for_expr  */
  YYSYMBOL_operator = 59,                  /* operator  */
  YYSYMBOL_expr = 60,                      /* expr  */
  YYSYMBOL_comparatii = 61,                /* comparatii  */
  YYSYMBOL_conditii = 62,                  /* conditii  */
  YYSYMBOL_apel_fct = 63,                  /* apel_fct  */
  YYSYMBOL_clase = 64,                     /* clase  */
  YYSYMBOL_instr_clasa = 65,               /* instr_clasa  */
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
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

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
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    85,    86,    89,    90,    93,    94,   100,
     101,   102,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   124,   125,   128,   129,   130,   131,
     132,   133,   134,   135,   138,   139,   142,   143,   144,   147,
     148,   151,   152,   153,   156,   157,   160,   162,   163,   164,
     165,   166,   167,   168,   172,   173,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     191,   192,   193,   194,   197,   198,   201,   202,   205,   206,
     207,   208,   209,   212,   215,   216,   217,   221,   222,   223,
     224,   225,   226,   227,   233,   234,   238,   239,   240,   241,
     242,   243,   248,   249,   250,   251,   252,   253,   255,   256,
     257,   258
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
  "global", "variabila", "functii", "functie", "eval_type", "ret",
  "parametri", "parametru", "instructiuni", "const_", "stmt", "for_stmt",
  "for_expr", "operator", "expr", "comparatii", "conditii", "apel_fct",
  "clase", "instr_clasa", "apel_clase", "main", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,  -168,    31,    80,  -168,    37,    54,    64,     3,  -168,
      67,     9,    89,  -168,   118,   121,   121,     2,   129,   142,
     147,  -168,   151,   165,   -24,  -168,    79,   134,   148,   167,
     188,   191,   218,   245,    61,  -168,  -168,   199,   222,   229,
     121,   230,  -168,  -168,  -168,  -168,   231,   308,   240,   246,
     254,   260,  -168,  -168,  -168,  -168,  -168,  -168,   172,  -168,
     242,  -168,  -168,  -168,  -168,   149,   262,   256,   264,   274,
     120,   276,   308,   308,  -168,  -168,   271,   308,   282,   121,
     288,   189,   189,   189,   189,   189,   287,   309,   303,   189,
     321,   189,   205,   228,   290,   198,    33,   308,   308,  -168,
     291,   296,   121,    82,   298,  -168,  -168,  -168,  -168,  -168,
    -168,   257,    58,   329,    39,   304,   215,   319,    13,   310,
     341,   330,   314,   316,   317,   339,   322,  -168,   328,   172,
    -168,   111,   286,  -168,    61,   321,  -168,   327,   138,   325,
     334,   340,   344,   346,   353,   360,  -168,   189,   189,   189,
     326,   370,     6,   379,   354,   219,   386,   189,  -168,  -168,
    -168,  -168,   198,   359,   232,   361,   362,   363,  -168,   357,
      68,    10,   168,   347,  -168,  -168,  -168,  -168,   365,   366,
     367,  -168,  -168,  -168,   321,    29,   371,   321,  -168,  -168,
     261,   368,   152,  -168,   372,   172,  -168,  -168,  -168,  -168,
     123,   364,  -168,   155,   387,  -168,    -2,    22,   234,  -168,
    -168,  -168,   250,   189,   263,  -168,  -168,   388,  -168,   198,
     364,  -168,   221,  -168,  -168,   374,  -168,   364,  -168,    85,
     358,  -168,   390,  -168,    63,   396,   377,  -168,    14,   378,
     153,   380,   364,  -168,   375,   381,   189,   198,  -168,    88,
    -168,   382,   383,   189,  -168,   384,  -168,   385,   391,  -168,
     389,   172,  -168,   156,   189,   198,  -168,   321,  -168,  -168,
     321,  -168,   392,  -168,   394,   395,   161,   279,   292,  -168,
    -168,  -168,   397,  -168,  -168,  -168
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     6,     1,     0,     0,     0,     0,     3,
       0,     5,     0,    11,     0,    43,    43,    12,     0,     8,
       0,     9,    18,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     7,    25,    10,     0,    41,     0,
      43,     0,    15,    16,    17,    14,     0,     0,     0,     0,
       0,     0,     2,    24,    77,    21,    22,    76,    20,    19,
       0,    34,    40,    35,    13,     0,     0,     0,     0,     0,
       0,     0,    96,    99,    54,    44,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    98,    97,    45,
       0,     0,    43,     0,     0,    80,    81,    78,    79,    82,
      42,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    77,    87,
      90,     0,     0,    55,   100,   101,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      60,    59,    93,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,    52,    53,    51,    50,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,    73,    72,
       0,     0,     0,    64,    77,    88,    89,    57,    58,    56,
       0,     0,    27,     0,     0,   108,     0,     0,     0,    48,
      49,    47,     0,     0,     0,    71,    70,     0,    91,    93,
       0,    31,     0,    37,    38,     0,    36,     0,    26,     0,
       0,   110,     0,   109,     0,    65,     0,    67,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    93,   103,     0,
     111,     0,     0,     0,    75,     0,    92,     0,     0,    29,
       0,     0,   104,     0,     0,    93,   106,     0,    68,    74,
       0,    33,     0,    28,     0,     0,     0,     0,     0,    32,
     102,   107,     0,    66,    69,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,  -168,  -168,   401,   -13,   -23,  -168,
     -88,    -9,   376,   -71,  -168,   -63,  -168,  -168,   -37,   -34,
     -44,   -89,  -158,  -168,   343,  -167,  -168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    10,    33,    11,    12,    72,    35,    13,
     225,    24,    25,    73,    74,    75,   122,   239,   113,   130,
     114,   115,   131,    19,    76,   173,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    97,   119,    59,   192,   206,    34,    26,    27,    39,
      99,    53,   132,     1,     5,    40,    93,   230,   116,   118,
     253,    66,    17,    67,    68,    69,    94,   135,    93,     8,
     254,     4,    70,   117,    99,   145,   231,    28,    94,   132,
     133,   234,    95,   -23,   105,   106,   107,   108,   109,    53,
     204,   153,   148,   149,    95,    99,   125,    14,   129,   126,
      98,   240,   232,   146,   145,    79,    31,   133,   191,   172,
     103,    18,    99,   116,   143,    53,    66,   144,    67,    68,
      69,    32,   230,   201,   134,     5,    15,    70,   117,   263,
     102,   246,   146,   138,   264,   167,    16,     6,     7,   203,
       8,   250,   208,     9,   182,   183,   202,   276,   180,    99,
     181,    53,    41,   212,   -23,   139,   214,   247,    40,   248,
     265,    40,   266,    21,   236,   129,    93,   195,   116,   222,
     196,    66,   241,    67,    68,    69,    94,    22,   220,   245,
      99,    23,    70,   117,   163,    99,    30,    31,    29,    99,
     164,    99,    95,    42,   258,    43,    44,    37,    45,    99,
     116,   221,    32,    66,   226,    67,    68,    69,    87,    88,
     227,   169,    46,   116,    70,   117,    66,    40,    67,    68,
      69,    36,   129,   226,    38,   218,   256,   171,   117,   274,
     226,   164,   164,   228,   282,   164,   277,    81,    82,   278,
     164,    83,    84,    85,    47,   226,   205,    48,    54,   261,
     129,    49,   262,    57,    99,    99,   261,   128,    54,   269,
      55,    56,    57,    57,   120,   121,   116,   261,   129,    66,
     275,    67,    68,    69,    87,   151,   242,    50,   188,   116,
      70,   117,    66,   189,    67,    68,    69,    54,    51,   123,
     124,   194,    57,   171,   117,   116,    57,    60,    66,   243,
      67,    68,    69,    61,    63,    78,    86,    64,   116,    70,
     117,    66,   233,    67,    68,    69,    54,    77,   141,   142,
     215,    57,    70,   117,   116,   216,    79,    66,   235,    67,
      68,    69,    80,    90,    89,    96,    91,   116,    70,   117,
      66,   237,    67,    68,    69,    54,    92,   165,   166,   100,
      57,    70,   117,    65,   102,   111,    66,   283,    67,    68,
      69,   104,   112,   110,   127,   136,   116,    70,    71,    66,
     284,    67,    68,    69,   137,   140,   147,   150,   152,   116,
      70,   117,    66,   154,    67,    68,    69,   155,   157,   156,
     158,   159,   116,   171,   117,    66,   161,    67,    68,    69,
     162,   168,   170,   184,    81,    82,   207,   117,    83,    84,
      85,    81,    82,   160,   174,    83,    84,    85,   175,    54,
     176,   178,   179,    54,    57,   223,   224,   177,    57,   185,
     186,   187,   190,   193,   200,   197,   198,   199,   232,   209,
     210,   211,   217,   213,   219,   251,   229,   238,   244,   249,
     252,   255,    20,   259,   257,   260,    62,   268,     0,   267,
     101,   270,     0,   271,     0,   272,     0,   273,   280,   281,
     279,   285
};

static const yytype_int16 yycheck[] =
{
      37,    72,    91,    37,   162,   172,    19,    16,     6,    33,
      73,    34,     6,    23,     5,    39,     6,    19,     5,    90,
       6,     8,    19,    10,    11,    12,    16,    98,     6,    20,
      16,     0,    19,    20,    97,     6,    38,    35,    16,     6,
      34,   208,    32,    34,    81,    82,    83,    84,    85,    72,
      40,    38,    13,    14,    32,   118,    93,    20,    95,    93,
      73,   219,    40,    34,     6,    32,     5,    34,   157,   140,
      79,     4,   135,     5,   111,    98,     8,   111,    10,    11,
      12,    20,    19,    15,    97,     5,    32,    19,    20,   247,
      32,     6,    34,   102,     6,   132,    32,    17,    18,   170,
      20,    38,   173,    23,   148,   149,    38,   265,   145,   172,
     147,   134,    33,   184,    34,    33,   187,    32,    39,    34,
      32,    39,    34,    34,   213,   162,     6,   164,     5,   200,
     164,     8,   220,    10,    11,    12,    16,    19,    15,   227,
     203,    20,    19,    20,    33,   208,     4,     5,    19,   212,
      39,   214,    32,    19,   242,    21,    22,     6,    24,   222,
       5,    38,    20,     8,   201,    10,    11,    12,    19,    20,
      15,    33,    24,     5,    19,    20,     8,    39,    10,    11,
      12,    34,   219,   220,    19,    33,    33,    19,    20,    33,
     227,    39,    39,    38,    33,    39,   267,    25,    26,   270,
      39,    29,    30,    31,    37,   242,    38,    19,    19,   246,
     247,    20,   246,    24,   277,   278,   253,    19,    19,   253,
      21,    22,    24,    24,    19,    20,     5,   264,   265,     8,
     264,    10,    11,    12,    19,    20,    15,    19,    19,     5,
      19,    20,     8,    24,    10,    11,    12,    19,     3,    21,
      22,    19,    24,    19,    20,     5,    24,    35,     8,    38,
      10,    11,    12,    34,    34,    19,    24,    36,     5,    19,
      20,     8,    38,    10,    11,    12,    19,    37,    21,    22,
      19,    24,    19,    20,     5,    24,    32,     8,    38,    10,
      11,    12,    32,    37,    32,    19,    32,     5,    19,    20,
       8,    38,    10,    11,    12,    19,    32,    21,    22,    38,
      24,    19,    20,     5,    32,     6,     8,    38,    10,    11,
      12,    33,    19,    36,    34,    34,     5,    19,    20,     8,
      38,    10,    11,    12,    38,    37,     7,    33,    19,     5,
      19,    20,     8,    33,    10,    11,    12,     6,    34,    19,
      34,    34,     5,    19,    20,     8,    34,    10,    11,    12,
      32,    34,    37,    37,    25,    26,    19,    20,    29,    30,
      31,    25,    26,    34,    34,    29,    30,    31,    34,    19,
      34,    21,    22,    19,    24,    21,    22,    34,    24,    19,
      11,    37,     6,    34,    37,    34,    34,    34,    40,    34,
      34,    34,    34,    32,    32,     9,    19,    19,    34,    19,
      33,    33,    11,    38,    34,    34,    40,    34,    -1,    37,
      77,    37,    -1,    38,    -1,    34,    -1,    38,    34,    34,
      38,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    42,    43,     0,     5,    17,    18,    20,    23,
      44,    46,    47,    50,    20,    32,    32,    19,     4,    64,
      47,    34,    19,    20,    52,    53,    52,     6,    35,    19,
       4,     5,    20,    45,    48,    49,    34,     6,    19,    33,
      39,    33,    19,    21,    22,    24,    24,    37,    19,    20,
      19,     3,    67,    49,    19,    21,    22,    24,    59,    60,
      35,    34,    53,    34,    36,     5,     8,    10,    11,    12,
      19,    20,    48,    54,    55,    56,    65,    37,    19,    32,
      32,    25,    26,    29,    30,    31,    24,    19,    20,    32,
      37,    32,    32,     6,    16,    32,    19,    54,    48,    56,
      38,    65,    32,    52,    33,    59,    59,    59,    59,    59,
      36,     6,    19,    59,    61,    62,     5,    20,    54,    62,
      19,    20,    57,    21,    22,    59,    60,    34,    19,    59,
      60,    63,     6,    34,    48,    54,    34,    38,    52,    33,
      37,    21,    22,    59,    60,     6,    34,     7,    13,    14,
      33,    20,    19,    38,    33,     6,    19,    34,    34,    34,
      34,    34,    32,    33,    39,    21,    22,    59,    34,    33,
      37,    19,    54,    66,    34,    34,    34,    34,    21,    22,
      59,    59,    61,    61,    37,    19,    11,    37,    19,    24,
       6,    62,    63,    34,    19,    59,    60,    34,    34,    34,
      37,    15,    38,    54,    40,    38,    66,    19,    54,    34,
      34,    34,    54,    32,    54,    19,    24,    34,    33,    32,
      15,    38,    54,    21,    22,    51,    59,    15,    38,    19,
      19,    38,    40,    38,    66,    38,    62,    38,    19,    58,
      63,    51,    15,    38,    34,    51,     6,    32,    34,    19,
      38,     9,    33,     6,    16,    33,    33,    34,    51,    38,
      34,    59,    60,    63,     6,    32,    34,    37,    34,    60,
      37,    38,    34,    38,    33,    60,    63,    54,    54,    38,
      34,    34,    33,    38,    38,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    51,    51,    52,
      52,    53,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    61,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     1,     0,     2,
       3,     1,     2,     5,     4,     4,     4,     4,     3,     5,
       5,     5,     5,     0,     2,     1,     8,     7,    11,    10,
       9,     8,    12,    11,     5,     5,     1,     1,     1,     1,
       3,     2,     5,     0,     1,     2,     4,     6,     6,     6,
       5,     5,     5,     5,     1,     3,     5,     5,     5,     4,
       4,     4,     4,     3,     5,     7,    11,     7,     9,    11,
       4,     4,     3,     3,     3,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       1,     4,     6,     0,     7,     6,     1,     2,     2,     1,
       3,     3,     7,     4,     5,     8,     5,     7,     6,     7,
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
#line 82 "limbaj.y"
                                                            {printf("program corect sintactic\n");}
#line 1482 "y.tab.c"
    break;

  case 3: /* headers: headers INCLUDE  */
#line 85 "limbaj.y"
                          {tip_id_val(false, "header", (yyvsp[0].value), "");}
#line 1488 "y.tab.c"
    break;

  case 4: /* headers: INCLUDE  */
#line 86 "limbaj.y"
                  {tip_id_val(false, "header", (yyvsp[0].value), "");}
#line 1494 "y.tab.c"
    break;

  case 12: /* variabila: TIP ID  */
#line 105 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1500 "y.tab.c"
    break;

  case 13: /* variabila: TIP ID '[' NR ']'  */
#line 106 "limbaj.y"
                                                              {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); tip_id_val(false, strcat((yyvsp[-4].value), "[]"), x, "");}
#line 1506 "y.tab.c"
    break;

  case 14: /* variabila: TIP ID ASSIGN NR  */
#line 107 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1512 "y.tab.c"
    break;

  case 15: /* variabila: TIP ID ASSIGN ID  */
#line 108 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1518 "y.tab.c"
    break;

  case 16: /* variabila: TIP ID ASSIGN VARBOOL  */
#line 109 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1524 "y.tab.c"
    break;

  case 17: /* variabila: TIP ID ASSIGN STRING  */
#line 110 "limbaj.y"
                                                              {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1530 "y.tab.c"
    break;

  case 18: /* variabila: CONST TIP ID  */
#line 111 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-1].value), (yyvsp[0].value), "");}
#line 1536 "y.tab.c"
    break;

  case 19: /* variabila: CONST TIP ID ASSIGN expr  */
#line 112 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1542 "y.tab.c"
    break;

  case 20: /* variabila: CONST TIP ID ASSIGN operator  */
#line 113 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1548 "y.tab.c"
    break;

  case 21: /* variabila: CONST TIP ID ASSIGN VARBOOL  */
#line 114 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1554 "y.tab.c"
    break;

  case 22: /* variabila: CONST TIP ID ASSIGN STRING  */
#line 115 "limbaj.y"
                                                              {tip_id_val(true, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1560 "y.tab.c"
    break;

  case 26: /* functie: TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 128 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-7].value), (yyvsp[-6].value), "");}
#line 1566 "y.tab.c"
    break;

  case 27: /* functie: TIP ID '(' parametri ')' '{' '}'  */
#line 129 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-6].value), (yyvsp[-5].value), "");}
#line 1572 "y.tab.c"
    break;

  case 28: /* functie: TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 130 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1578 "y.tab.c"
    break;

  case 29: /* functie: TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 131 "limbaj.y"
                                                                                {tip_fct(false, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1584 "y.tab.c"
    break;

  case 30: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni '}'  */
#line 132 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-7].value), (yyvsp[-6].value), (yyvsp[-7].value));}
#line 1590 "y.tab.c"
    break;

  case 31: /* functie: CONST TIP ID '(' parametri ')' '{' '}'  */
#line 133 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-6].value), (yyvsp[-5].value), (yyvsp[-6].value));}
#line 1596 "y.tab.c"
    break;

  case 32: /* functie: CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'  */
#line 134 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-10].value), (yyvsp[-9].value), (yyvsp[-10].value));}
#line 1602 "y.tab.c"
    break;

  case 33: /* functie: CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'  */
#line 135 "limbaj.y"
                                                                                {tip_fct(true, (yyvsp[-9].value), (yyvsp[-8].value), (yyvsp[-9].value));}
#line 1608 "y.tab.c"
    break;

  case 41: /* parametru: TIP ID  */
#line 151 "limbaj.y"
                                {par_fct((yyvsp[-1].value), (yyvsp[0].value));}
#line 1614 "y.tab.c"
    break;

  case 42: /* parametru: TIP ID '[' NR ']'  */
#line 152 "limbaj.y"
                                {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", (yyvsp[-3].value), (yyvsp[-1].value)); par_fct(strcat((yyvsp[-4].value), "[]"), y);}
#line 1620 "y.tab.c"
    break;

  case 43: /* parametru: %empty  */
#line 153 "limbaj.y"
                                {par_fct("", "");}
#line 1626 "y.tab.c"
    break;

  case 46: /* const_: CONST TIP ID ';'  */
#line 160 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1632 "y.tab.c"
    break;

  case 47: /* const_: CONST TIP ID ASSIGN operator ';'  */
#line 162 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1638 "y.tab.c"
    break;

  case 48: /* const_: CONST TIP ID ASSIGN VARBOOL ';'  */
#line 163 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1644 "y.tab.c"
    break;

  case 49: /* const_: CONST TIP ID ASSIGN STRING ';'  */
#line 164 "limbaj.y"
                                                  {tip_id_val(true, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1650 "y.tab.c"
    break;

  case 55: /* stmt: TIP ID ';'  */
#line 173 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-2].value), (yyvsp[-1].value), "");}
#line 1656 "y.tab.c"
    break;

  case 56: /* stmt: TIP ID ASSIGN operator ';'  */
#line 175 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1662 "y.tab.c"
    break;

  case 57: /* stmt: TIP ID ASSIGN VARBOOL ';'  */
#line 176 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1668 "y.tab.c"
    break;

  case 58: /* stmt: TIP ID ASSIGN STRING ';'  */
#line 177 "limbaj.y"
                                                {tip_id_val(false, (yyvsp[-4].value), (yyvsp[-3].value), (yyvsp[-1].value));}
#line 1674 "y.tab.c"
    break;

  case 70: /* for_stmt: TIP ID ASSIGN NR  */
#line 191 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1680 "y.tab.c"
    break;

  case 71: /* for_stmt: TIP ID ASSIGN ID  */
#line 192 "limbaj.y"
                            {tip_id_val(false, (yyvsp[-3].value), (yyvsp[-2].value), (yyvsp[0].value));}
#line 1686 "y.tab.c"
    break;

  case 76: /* operator: NR  */
#line 201 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1692 "y.tab.c"
    break;

  case 77: /* operator: ID  */
#line 202 "limbaj.y"
              {(yyval.value) = (yyvsp[0].value);}
#line 1698 "y.tab.c"
    break;

  case 78: /* expr: operator '*' operator  */
#line 205 "limbaj.y"
                             {char* a = (char *)malloc(10); sprintf(a, "%s*%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = a;}
#line 1704 "y.tab.c"
    break;

  case 79: /* expr: operator '/' operator  */
#line 206 "limbaj.y"
                             {char* b = (char *)malloc(10); sprintf(b, "%s/%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = b;}
#line 1710 "y.tab.c"
    break;

  case 80: /* expr: operator '+' operator  */
#line 207 "limbaj.y"
                             {char* c = (char *)malloc(10); sprintf(c, "%s+%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = c;}
#line 1716 "y.tab.c"
    break;

  case 81: /* expr: operator '-' operator  */
#line 208 "limbaj.y"
                             {char* d = (char *)malloc(10); sprintf(d, "%s-%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = d;}
#line 1722 "y.tab.c"
    break;

  case 82: /* expr: operator '%' operator  */
#line 209 "limbaj.y"
                             {char* e = (char *)malloc(10); sprintf(e, "%s%%%s", (yyvsp[-2].value), (yyvsp[0].value)); (yyval.value) = e;}
#line 1728 "y.tab.c"
    break;


#line 1732 "y.tab.c"

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

#line 261 "limbaj.y"

int yyerror(char * s){
        printf("eroare: %s la linia:%d\n",s,yylineno);
        errors = 1;
}

int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        FILE* fp;
        if(errors==0){
                fp = fopen("symbol_table.txt", "w+");
                fprintf(fp,"\n\n");
                fprintf(fp,"                               SYMBOL TABLE  VARIABLES                                                   \n");
                fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
                fprintf(fp,"      TYPE                       NAME                    VALUE                    LINE NO                \n");
                fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
                int i, max = 0 ;
                for(i=0; i<count; i++) {
                        if(strlen(table[i].name)>max) {
                                max = strlen(table[i].name);
                        }
                }
                int temp;
                for(i=0; i<count; i++) {
                         if(strlen(table[i].name)!=max)
                         {
                                 temp = max - strlen(table[i].name);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr, table[i].name);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                table[i].name = const_ptr;
                        }
                }
                max = 0;
                for(i=0; i<count; i++) {
                        if(strlen(table[i].value)>max) {
                                max = strlen(table[i].value);
                        }
                }
                for(i=0; i<count; i++) {
                         if(strlen(table[i].value)!=max)
                         {
                                 temp = max - strlen(table[i].value);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr, table[i].value);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                  temp--;
                                }
                                table[i].value = const_ptr;
                        }
                }
                for(i=0; i<count; i++) {
		        fprintf(fp,"%s\t\t\t%s\t\t\t%s\t\t%d\n", table[i].type, table[i].name, table[i].value, table[i].line_number);
                        fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
	        }
                fclose(fp);
                fp = fopen("symbol_function_table.txt", "w+");
                fprintf(fp,"                                       SYMBOL TABLE  FUNCTIONS                                      \n");
                fprintf(fp,"----------------------------------------------------------------------------------------------------\n");
                fprintf(fp,"   LINE NO           TYPE           NAME           RETURN              PARAM                        \n");
                fprintf(fp,"----------------------------------------------------------------------------------------------------\n");
                int j;
                max = 0;
                for(i=0; i<count_fct; i++) {
                        if(strlen(t_fct[i].name)>max) {
                                max = strlen( t_fct[i].name);
                        }
                }
                for(i=0; i<count_fct; i++) {
                         if(strlen( t_fct[i].name)!=max)
                         {
                                 temp = max - strlen( t_fct[i].name);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr,  t_fct[i].name);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                 t_fct[i].name = const_ptr;
                        }
                }
                max = 0;
                 for(i=0; i<count_fct; i++) {
                        if(strlen(t_fct[i].ret)>max) {
                                max = strlen( t_fct[i].ret);
                        }
                }
                for(i=0; i<count_fct; i++) {
                         if(strlen( t_fct[i].ret)!=max)
                         {
                                 temp = max - strlen( t_fct[i].ret);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr,  t_fct[i].ret);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                 t_fct[i].ret = const_ptr;
                        }
                }
                for(j = 0; j < count_fct; j++){
                        fprintf(fp,"\t%d\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t %s %s\n ", t_fct[j].rownum, t_fct[j].type, t_fct[j].name, t_fct[j].ret, t_fct[j].param_fct[0].type, t_fct[j].param_fct[0].name);
                        fprintf(fp,"---------------------------------------------------------------------------------------------------\n");
                }
                fclose(fp);
        }

}

void tip_id_val(bool cnst, char* typ, char* idd, char* vall){

        if(found(idd) == false){
                if(cnst == false){
                        char *const_ptr;
                        const_ptr = (char*)malloc(24);

                        strcat(const_ptr, "     ");
                        strcat(const_ptr, typ);
                        strcat(const_ptr, "   ");
                        table[count].type = const_ptr;

                }
                else{

                        char *const_ptr;
                        const_ptr = (char*)malloc(24);

                        strcat(const_ptr, "   const ");
                        strcat(const_ptr, typ);
                        table[count].type = const_ptr;
                        
                }
                if(strlen(idd)< 10){
                        char *const_ptr;
                        const_ptr = (char*)malloc(24);
                        strcat(const_ptr, "       ");
                        strcat(const_ptr, idd);
                        table[count].name = const_ptr;
                }
                else{
                        table[count].name = idd;
                }
                table[count].value = vall;
                table[count].line_number = yylineno;
                count++;
        }
        else{
                printf("name <%s> is already in use at line: %d", idd, var_used);
                exit(0);
        }
}

// parametrii functie

void par_fct(char * typ, char *idd){

        int ce_dq = 0;
        ce_dq = t_fct[count_fct].nr_param;

        if(typ != NULL){

        t_fct[count_fct].param_fct[ce_dq].type = typ;
        t_fct[count_fct].param_fct[ce_dq].name = idd;}
        else{

                strcpy(t_fct[count_fct].param_fct[ce_dq].type, "");
                strcpy(t_fct[count_fct].param_fct[ce_dq].name, "");
        

        }

        t_fct[count_fct].rownum = yylineno;

        t_fct[count_fct].nr_param++;
        
}

// tip + nume + return functie

void tip_fct(bool cnst, char * typ, char *idd, char *rett){

        if(fct_found(idd) == false){
                if(cnst == false){
                        char *const_ptr;
                        const_ptr = (char*)malloc(24);
                        strcat(const_ptr, "   ");
                        strcat(const_ptr, typ);
                        strcat(const_ptr, "   ");
                        t_fct[count_fct].type = const_ptr;

                }

                if(cnst == true) {

                        char *const_ptr;
                        const_ptr = (char*)malloc(24);

                        strcat(const_ptr, "const ");
                        strcat(const_ptr, typ);
                        t_fct[count_fct].type = const_ptr;

                }

                t_fct[count_fct].name = idd;
                if(strlen(rett)<0){
                        char *const_ptr;
                        const_ptr = (char*)malloc(24);
                        strcat(const_ptr, "N/A");
                        t_fct[count_fct].ret = const_ptr;
                }
                else{
                        t_fct[count_fct].ret = rett;
                }
                
                if(t_fct[count_fct].nr_param == 0){
                t_fct[count_fct].rownum = yylineno;
                }
                

                count_fct++;
       }
       else{
                printf("name <%s> is already in use at line: %d", idd, fct_used);
                exit(0);
        }


}

bool found(char* variable){

        // variables
        int i;
        var_used = 0;
        for(i = 0; i < count; i++){
                
                char *x;
                x = (char*)malloc(strlen(table[i].name));
                strcpy(x, table[i].name);
                char *pch;
                pch = strtok (x," ");
                
                if(pch != NULL){
                        strcpy(x, pch);
                }
                if(strcmp(x, variable) == 0){
                        var_used = table[i].line_number;
                        return true;
                }
                
        }
        return false;
}
bool fct_found(char* variable){

        // functions
        int i;
        fct_used = 0;
        for(i = 0; i < count_fct; i++){
                
                char *x;
                x = (char*)malloc(strlen(t_fct[i].name));
                strcpy(x, t_fct[i].name);
                char *pch;
                pch = strtok (x," ");
                
                if(pch != NULL){
                        strcpy(x, pch);
                }
                if(strcmp(x, variable) == 0){
                        fct_used = t_fct[i].rownum;
                        return true;
                }
                
        }
        return false;
}
