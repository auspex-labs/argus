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

#ifndef YY_ARGUS_Y_TAB_H_INCLUDED
# define YY_ARGUS_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int argus_debug;
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
    START = 258,                   /* START  */
    STOP = 259,                    /* STOP  */
    STATUS = 260,                  /* STATUS  */
    SHUTDOWN = 261,                /* SHUTDOWN  */
    ERROR = 262,                   /* ERROR  */
    MAN = 263,                     /* MAN  */
    FAR = 264,                     /* FAR  */
    EVENT = 265,                   /* EVENT  */
    INDEX = 266,                   /* INDEX  */
    DST = 267,                     /* DST  */
    SRC = 268,                     /* SRC  */
    HOST = 269,                    /* HOST  */
    INODE = 270,                   /* INODE  */
    GATEWAY = 271,                 /* GATEWAY  */
    IPID = 272,                    /* IPID  */
    TTL = 273,                     /* TTL  */
    TOS = 274,                     /* TOS  */
    DSB = 275,                     /* DSB  */
    SRCID = 276,                   /* SRCID  */
    TCPBASE = 277,                 /* TCPBASE  */
    NET = 278,                     /* NET  */
    AMASK = 279,                   /* AMASK  */
    PORT = 280,                    /* PORT  */
    EQUAL = 281,                   /* EQUAL  */
    LESS = 282,                    /* LESS  */
    GREATER = 283,                 /* GREATER  */
    PROTO = 284,                   /* PROTO  */
    BYTE = 285,                    /* BYTE  */
    PKT = 286,                     /* PKT  */
    APPBYTE = 287,                 /* APPBYTE  */
    TRANS = 288,                   /* TRANS  */
    ARP = 289,                     /* ARP  */
    RARP = 290,                    /* RARP  */
    IP = 291,                      /* IP  */
    IPV4 = 292,                    /* IPV4  */
    IPV6 = 293,                    /* IPV6  */
    TCP = 294,                     /* TCP  */
    UDP = 295,                     /* UDP  */
    ICMP = 296,                    /* ICMP  */
    IGMP = 297,                    /* IGMP  */
    ISIS = 298,                    /* ISIS  */
    HELLO = 299,                   /* HELLO  */
    LSP = 300,                     /* LSP  */
    CSNP = 301,                    /* CSNP  */
    PSNP = 302,                    /* PSNP  */
    UDT = 303,                     /* UDT  */
    SVC = 304,                     /* SVC  */
    TCPRTT = 305,                  /* TCPRTT  */
    TCPOPT = 306,                  /* TCPOPT  */
    MSS = 307,                     /* MSS  */
    WSCALE = 308,                  /* WSCALE  */
    SELECTIVEACKOK = 309,          /* SELECTIVEACKOK  */
    SELECTIVEACK = 310,            /* SELECTIVEACK  */
    TCPECHO = 311,                 /* TCPECHO  */
    TCPECHOREPLY = 312,            /* TCPECHOREPLY  */
    TCPTIMESTAMP = 313,            /* TCPTIMESTAMP  */
    TCPCC = 314,                   /* TCPCC  */
    TCPCCNEW = 315,                /* TCPCCNEW  */
    TCPCCECHO = 316,               /* TCPCCECHO  */
    SECN = 317,                    /* SECN  */
    DECN = 318,                    /* DECN  */
    ETHER = 319,                   /* ETHER  */
    MPLS = 320,                    /* MPLS  */
    VLAN = 321,                    /* VLAN  */
    ANON = 322,                    /* ANON  */
    VID = 323,                     /* VID  */
    VPRI = 324,                    /* VPRI  */
    MPLSID = 325,                  /* MPLSID  */
    SPI = 326,                     /* SPI  */
    ENCAPS = 327,                  /* ENCAPS  */
    RTP = 328,                     /* RTP  */
    RTCP = 329,                    /* RTCP  */
    ESP = 330,                     /* ESP  */
    DECNET = 331,                  /* DECNET  */
    LAT = 332,                     /* LAT  */
    MOPRC = 333,                   /* MOPRC  */
    MOPDL = 334,                   /* MOPDL  */
    TK_BROADCAST = 335,            /* TK_BROADCAST  */
    TK_MULTICAST = 336,            /* TK_MULTICAST  */
    FRAG = 337,                    /* FRAG  */
    FRAG_ONLY = 338,               /* FRAG_ONLY  */
    ABR = 339,                     /* ABR  */
    PCR = 340,                     /* PCR  */
    RATE = 341,                    /* RATE  */
    LOAD = 342,                    /* LOAD  */
    LOSS = 343,                    /* LOSS  */
    PLOSS = 344,                   /* PLOSS  */
    GAP = 345,                     /* GAP  */
    CO = 346,                      /* CO  */
    INTER = 347,                   /* INTER  */
    INTERACTIVE = 348,             /* INTERACTIVE  */
    INTERIDLE = 349,               /* INTERIDLE  */
    JITTER = 350,                  /* JITTER  */
    JITTERACTIVE = 351,            /* JITTERACTIVE  */
    JITTERIDLE = 352,              /* JITTERIDLE  */
    DUR = 353,                     /* DUR  */
    AVGDUR = 354,                  /* AVGDUR  */
    DELTADUR = 355,                /* DELTADUR  */
    DELTASTART = 356,              /* DELTASTART  */
    DELTALAST = 357,               /* DELTALAST  */
    DELTASPKTS = 358,              /* DELTASPKTS  */
    DELTADPKTS = 359,              /* DELTADPKTS  */
    SEQ = 360,                     /* SEQ  */
    NSTROKE = 361,                 /* NSTROKE  */
    NUM = 362,                     /* NUM  */
    FLOAT = 363,                   /* FLOAT  */
    INBOUND = 364,                 /* INBOUND  */
    OUTBOUND = 365,                /* OUTBOUND  */
    LINK = 366,                    /* LINK  */
    AUTH = 367,                    /* AUTH  */
    RECURS = 368,                  /* RECURS  */
    REQ = 369,                     /* REQ  */
    RSP = 370,                     /* RSP  */
    GEQ = 371,                     /* GEQ  */
    LEQ = 372,                     /* LEQ  */
    NEQ = 373,                     /* NEQ  */
    ID = 374,                      /* ID  */
    EID = 375,                     /* EID  */
    HIDV4 = 376,                   /* HIDV4  */
    HIDV6 = 377,                   /* HIDV6  */
    STRING = 378,                  /* STRING  */
    LSH = 379,                     /* LSH  */
    RSH = 380,                     /* RSH  */
    LEN = 381,                     /* LEN  */
    OUTOFORDER = 382,              /* OUTOFORDER  */
    RETRANS = 383,                 /* RETRANS  */
    NORMAL = 384,                  /* NORMAL  */
    WAIT = 385,                    /* WAIT  */
    MULTIPATH = 386,               /* MULTIPATH  */
    RESET = 387,                   /* RESET  */
    TIMEDOUT = 388,                /* TIMEDOUT  */
    WINSHUT = 389,                 /* WINSHUT  */
    DUP = 390,                     /* DUP  */
    SYN = 391,                     /* SYN  */
    SYNACK = 392,                  /* SYNACK  */
    ACK = 393,                     /* ACK  */
    PUSH = 394,                    /* PUSH  */
    URGENT = 395,                  /* URGENT  */
    DATA = 396,                    /* DATA  */
    ECE = 397,                     /* ECE  */
    CWR = 398,                     /* CWR  */
    FIN = 399,                     /* FIN  */
    FINACK = 400,                  /* FINACK  */
    ICMPECHO = 401,                /* ICMPECHO  */
    ICMPMAP = 402,                 /* ICMPMAP  */
    UNREACH = 403,                 /* UNREACH  */
    REDIRECT = 404,                /* REDIRECT  */
    ECN = 405,                     /* ECN  */
    TIMEXED = 406,                 /* TIMEXED  */
    ESTABLISHED = 407,             /* ESTABLISHED  */
    CONNECTED = 408,               /* CONNECTED  */
    CORRELATED = 409,              /* CORRELATED  */
    RTR = 410,                     /* RTR  */
    MBR = 411,                     /* MBR  */
    LVG = 412,                     /* LVG  */
    COCODE = 413,                  /* COCODE  */
    ASN = 414,                     /* ASN  */
    OR = 415,                      /* OR  */
    AND = 416,                     /* AND  */
    UMINUS = 417                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define START 258
#define STOP 259
#define STATUS 260
#define SHUTDOWN 261
#define ERROR 262
#define MAN 263
#define FAR 264
#define EVENT 265
#define INDEX 266
#define DST 267
#define SRC 268
#define HOST 269
#define INODE 270
#define GATEWAY 271
#define IPID 272
#define TTL 273
#define TOS 274
#define DSB 275
#define SRCID 276
#define TCPBASE 277
#define NET 278
#define AMASK 279
#define PORT 280
#define EQUAL 281
#define LESS 282
#define GREATER 283
#define PROTO 284
#define BYTE 285
#define PKT 286
#define APPBYTE 287
#define TRANS 288
#define ARP 289
#define RARP 290
#define IP 291
#define IPV4 292
#define IPV6 293
#define TCP 294
#define UDP 295
#define ICMP 296
#define IGMP 297
#define ISIS 298
#define HELLO 299
#define LSP 300
#define CSNP 301
#define PSNP 302
#define UDT 303
#define SVC 304
#define TCPRTT 305
#define TCPOPT 306
#define MSS 307
#define WSCALE 308
#define SELECTIVEACKOK 309
#define SELECTIVEACK 310
#define TCPECHO 311
#define TCPECHOREPLY 312
#define TCPTIMESTAMP 313
#define TCPCC 314
#define TCPCCNEW 315
#define TCPCCECHO 316
#define SECN 317
#define DECN 318
#define ETHER 319
#define MPLS 320
#define VLAN 321
#define ANON 322
#define VID 323
#define VPRI 324
#define MPLSID 325
#define SPI 326
#define ENCAPS 327
#define RTP 328
#define RTCP 329
#define ESP 330
#define DECNET 331
#define LAT 332
#define MOPRC 333
#define MOPDL 334
#define TK_BROADCAST 335
#define TK_MULTICAST 336
#define FRAG 337
#define FRAG_ONLY 338
#define ABR 339
#define PCR 340
#define RATE 341
#define LOAD 342
#define LOSS 343
#define PLOSS 344
#define GAP 345
#define CO 346
#define INTER 347
#define INTERACTIVE 348
#define INTERIDLE 349
#define JITTER 350
#define JITTERACTIVE 351
#define JITTERIDLE 352
#define DUR 353
#define AVGDUR 354
#define DELTADUR 355
#define DELTASTART 356
#define DELTALAST 357
#define DELTASPKTS 358
#define DELTADPKTS 359
#define SEQ 360
#define NSTROKE 361
#define NUM 362
#define FLOAT 363
#define INBOUND 364
#define OUTBOUND 365
#define LINK 366
#define AUTH 367
#define RECURS 368
#define REQ 369
#define RSP 370
#define GEQ 371
#define LEQ 372
#define NEQ 373
#define ID 374
#define EID 375
#define HIDV4 376
#define HIDV6 377
#define STRING 378
#define LSH 379
#define RSH 380
#define LEN 381
#define OUTOFORDER 382
#define RETRANS 383
#define NORMAL 384
#define WAIT 385
#define MULTIPATH 386
#define RESET 387
#define TIMEDOUT 388
#define WINSHUT 389
#define DUP 390
#define SYN 391
#define SYNACK 392
#define ACK 393
#define PUSH 394
#define URGENT 395
#define DATA 396
#define ECE 397
#define CWR 398
#define FIN 399
#define FINACK 400
#define ICMPECHO 401
#define ICMPMAP 402
#define UNREACH 403
#define REDIRECT 404
#define ECN 405
#define TIMEXED 406
#define ESTABLISHED 407
#define CONNECTED 408
#define CORRELATED 409
#define RTR 410
#define MBR 411
#define LVG 412
#define COCODE 413
#define ASN 414
#define OR 415
#define AND 416
#define UMINUS 417

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 89 "grammar.y"

	int i;
	float f;
	u_long h;
	u_char *e;
	char *s;
	struct stmt *stmt;
	struct arth *a;
	struct {
		struct qual q;
		struct ablock *b;
	} blk;
	struct ablock *rblk;

#line 406 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE argus_lval;


int argus_parse (void);


#endif /* !YY_ARGUS_Y_TAB_H_INCLUDED  */
