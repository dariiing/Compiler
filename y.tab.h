/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
