
/* #line 1 "lexer.rl" */
/*
 * Copyright Redis Ltd. 2016 - present
 * Licensed under your choice of the Redis Source Available License 2.0 (RSALv2) or
 * the Server Side Public License v1 (SSPLv1).
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "../parse.h"
#include "parser.h"
#include "../../query_node.h"
#include "../../stopwords.h"

/* forward declarations of stuff generated by lemon */

#define RSQuery_Parse_v3 RSQueryParser_v3_ // weird Lemon quirk.. oh well..
#define RSQuery_ParseAlloc_v3 RSQueryParser_v3_Alloc
#define RSQuery_ParseFree_v3 RSQueryParser_v3_Free

void RSQuery_Parse_v3(void *yyp, int yymajor, QueryToken yyminor, QueryParseCtx *ctx);
void *RSQuery_ParseAlloc_v3(void *(*mallocProc)(size_t));
void RSQuery_ParseFree_v3(void *p, void (*freeProc)(void *));


/* #line 357 "lexer.rl" */



/* #line 36 "lexer.c" */
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	15, 1, 16, 1, 17, 1, 18, 1, 
	19, 1, 20, 1, 21, 1, 22, 1, 
	23, 1, 24, 1, 25, 1, 26, 1, 
	27, 1, 28, 1, 29, 1, 30, 1, 
	31, 1, 32, 1, 33, 1, 34, 1, 
	35, 1, 36, 1, 37, 1, 38, 1, 
	39, 1, 40, 1, 41, 1, 42, 1, 
	43, 1, 44, 1, 45, 1, 46, 1, 
	47, 1, 48, 1, 49, 1, 50, 1, 
	51, 2, 2, 3, 2, 2, 4, 2, 
	2, 5, 2, 2, 6, 2, 2, 7, 
	2, 2, 8, 2, 2, 9, 2, 2, 
	10, 2, 2, 11, 2, 2, 12, 2, 
	2, 13, 2, 2, 14
};

static const short _query_key_offsets[] = {
	0, 10, 20, 22, 24, 26, 28, 28, 
	31, 34, 44, 55, 57, 59, 61, 63, 
	65, 68, 70, 71, 72, 74, 77, 79, 
	89, 91, 93, 93, 95, 97, 138, 149, 
	160, 171, 172, 175, 177, 192, 203, 204, 
	210, 215, 218, 234, 246, 247, 250, 256, 
	261, 264, 280, 294, 307, 308, 318, 331, 
	341, 353, 365, 377
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96, 
	123, 126, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 92, 125, 92, 125, 
	92, 125, 39, 92, 39, 92, 110, 39, 
	92, 102, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 92, 96, 123, 0, 
	47, 58, 64, 91, 94, 124, 127, 92, 
	125, 92, 125, 92, 125, 48, 57, 48, 
	57, 45, 48, 57, 48, 57, 110, 102, 
	48, 57, 45, 48, 57, 48, 57, 9, 
	13, 32, 47, 58, 64, 91, 96, 123, 
	126, 39, 92, 39, 92, 92, 125, 92, 
	125, 32, 34, 36, 37, 39, 40, 41, 
	42, 43, 45, 58, 59, 61, 64, 65, 
	91, 92, 93, 95, 97, 105, 119, 123, 
	124, 125, 126, 127, 0, 8, 9, 13, 
	14, 31, 33, 47, 48, 57, 60, 63, 
	94, 96, 42, 92, 96, 0, 47, 58, 
	64, 91, 94, 123, 127, 92, 96, 123, 
	0, 47, 58, 64, 91, 94, 124, 127, 
	42, 92, 96, 0, 47, 58, 64, 91, 
	94, 123, 127, 42, 39, 92, 105, 39, 
	92, 36, 45, 92, 96, 123, 0, 47, 
	48, 57, 58, 64, 91, 94, 124, 127, 
	42, 92, 96, 0, 47, 58, 64, 91, 
	94, 123, 127, 42, 42, 46, 69, 101, 
	48, 57, 42, 69, 101, 48, 57, 42, 
	48, 57, 42, 46, 69, 92, 96, 101, 
	0, 47, 48, 57, 58, 64, 91, 94, 
	123, 127, 42, 45, 92, 96, 0, 47, 
	58, 64, 91, 94, 123, 127, 105, 105, 
	48, 57, 42, 46, 69, 101, 48, 57, 
	42, 69, 101, 48, 57, 42, 48, 57, 
	42, 46, 69, 92, 96, 101, 0, 47, 
	48, 57, 58, 64, 91, 94, 123, 127, 
	42, 45, 92, 96, 0, 47, 48, 57, 
	58, 64, 91, 94, 123, 127, 42, 92, 
	96, 0, 47, 48, 57, 58, 64, 91, 
	94, 123, 127, 62, 92, 96, 0, 47, 
	58, 64, 91, 94, 123, 127, 42, 83, 
	92, 96, 115, 0, 47, 58, 64, 91, 
	94, 123, 127, 9, 13, 32, 47, 58, 
	64, 91, 96, 123, 126, 42, 92, 96, 
	110, 0, 47, 58, 64, 91, 94, 123, 
	127, 42, 92, 96, 102, 0, 47, 58, 
	64, 91, 94, 123, 127, 39, 42, 92, 
	96, 0, 47, 58, 64, 91, 94, 123, 
	127, 92, 125, 0
};

static const char _query_single_lengths[] = {
	0, 0, 2, 2, 2, 2, 0, 3, 
	3, 0, 3, 2, 2, 2, 0, 0, 
	1, 0, 1, 1, 0, 1, 0, 0, 
	2, 2, 0, 2, 2, 27, 3, 3, 
	3, 1, 3, 2, 5, 3, 1, 4, 
	3, 1, 6, 4, 1, 1, 4, 3, 
	1, 6, 4, 3, 1, 2, 5, 0, 
	4, 4, 4, 2
};

static const char _query_range_lengths[] = {
	5, 5, 0, 0, 0, 0, 0, 0, 
	0, 5, 4, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 1, 1, 1, 5, 
	0, 0, 0, 0, 0, 7, 4, 4, 
	4, 0, 0, 0, 5, 4, 0, 1, 
	1, 1, 5, 4, 0, 1, 1, 1, 
	1, 5, 5, 5, 0, 4, 4, 5, 
	4, 4, 4, 0
};

static const short _query_index_offsets[] = {
	0, 6, 12, 15, 18, 21, 24, 25, 
	29, 33, 39, 47, 50, 53, 56, 58, 
	60, 63, 65, 67, 69, 71, 74, 76, 
	82, 85, 88, 89, 92, 95, 130, 138, 
	146, 154, 156, 160, 163, 174, 182, 184, 
	190, 195, 198, 210, 219, 221, 224, 230, 
	235, 238, 250, 260, 269, 271, 278, 288, 
	294, 303, 312, 321
};

static const char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 2, 
	2, 2, 2, 0, 5, 3, 4, 5, 
	6, 4, 4, 4, 3, 8, 9, 7, 
	7, 8, 9, 10, 7, 8, 9, 11, 
	7, 12, 12, 12, 12, 12, 0, 14, 
	13, 15, 13, 13, 13, 13, 12, 17, 
	13, 16, 17, 18, 16, 16, 16, 13, 
	19, 13, 21, 20, 22, 23, 20, 23, 
	20, 24, 0, 25, 0, 26, 0, 28, 
	29, 27, 29, 0, 30, 30, 30, 30, 
	30, 0, 31, 33, 32, 34, 33, 32, 
	32, 37, 38, 36, 36, 36, 35, 40, 
	42, 43, 44, 45, 46, 47, 48, 49, 
	50, 52, 53, 54, 55, 56, 57, 58, 
	59, 60, 56, 61, 62, 63, 64, 65, 
	66, 39, 39, 40, 39, 41, 51, 41, 
	41, 1, 67, 68, 0, 0, 0, 0, 
	0, 1, 70, 69, 71, 69, 69, 69, 
	69, 2, 67, 70, 72, 72, 72, 72, 
	72, 2, 67, 0, 69, 9, 73, 7, 
	8, 9, 7, 76, 77, 14, 75, 15, 
	75, 78, 75, 75, 75, 12, 80, 14, 
	79, 79, 79, 79, 79, 12, 80, 79, 
	80, 81, 82, 82, 19, 79, 80, 82, 
	82, 21, 79, 80, 23, 79, 80, 81, 
	83, 14, 79, 83, 79, 78, 79, 79, 
	79, 12, 80, 22, 14, 79, 79, 79, 
	79, 79, 12, 84, 69, 84, 86, 85, 
	67, 88, 89, 89, 86, 87, 67, 89, 
	89, 26, 87, 67, 29, 87, 67, 88, 
	91, 68, 90, 91, 90, 51, 90, 90, 
	90, 1, 67, 28, 68, 92, 92, 93, 
	92, 92, 92, 1, 67, 68, 87, 87, 
	93, 87, 87, 87, 1, 94, 69, 95, 
	0, 0, 0, 0, 0, 30, 67, 96, 
	68, 92, 96, 92, 92, 92, 92, 1, 
	1, 1, 1, 1, 1, 69, 67, 68, 
	92, 97, 92, 92, 92, 92, 1, 67, 
	68, 92, 98, 92, 92, 92, 92, 1, 
	99, 67, 68, 92, 92, 92, 92, 92, 
	1, 37, 100, 36, 0
};

static const char _query_trans_targs[] = {
	29, 30, 32, 29, 3, 4, 33, 5, 
	29, 6, 8, 35, 37, 29, 9, 11, 
	12, 13, 38, 39, 29, 40, 17, 41, 
	19, 29, 47, 29, 22, 48, 53, 29, 
	25, 26, 29, 29, 27, 28, 33, 29, 
	29, 29, 29, 31, 29, 34, 29, 29, 
	36, 44, 45, 49, 29, 29, 52, 53, 
	54, 29, 55, 29, 30, 56, 58, 59, 
	29, 29, 29, 29, 0, 29, 1, 2, 
	29, 7, 29, 29, 10, 14, 42, 29, 
	29, 15, 16, 43, 18, 29, 46, 29, 
	20, 21, 29, 50, 29, 51, 29, 23, 
	30, 57, 30, 24, 29
};

static const char _query_trans_actions[] = {
	79, 108, 90, 73, 0, 0, 90, 0, 
	43, 0, 0, 96, 114, 71, 0, 0, 
	0, 0, 0, 5, 77, 5, 0, 0, 
	0, 9, 84, 67, 0, 0, 87, 75, 
	0, 0, 45, 69, 0, 0, 111, 37, 
	33, 35, 11, 105, 27, 105, 15, 17, 
	102, 105, 99, 81, 21, 23, 0, 105, 
	108, 29, 0, 31, 105, 108, 108, 5, 
	13, 19, 25, 39, 0, 61, 0, 0, 
	51, 0, 53, 59, 0, 0, 114, 65, 
	41, 0, 0, 114, 0, 57, 84, 49, 
	0, 0, 47, 108, 63, 84, 7, 0, 
	93, 108, 96, 0, 55
};

static const char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 1, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0
};

static const char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0
};

static const short _query_eof_trans[] = {
	1, 1, 4, 4, 4, 1, 1, 4, 
	4, 1, 14, 14, 14, 14, 14, 21, 
	21, 21, 1, 1, 1, 28, 1, 1, 
	32, 32, 32, 36, 36, 0, 1, 70, 
	73, 1, 70, 75, 76, 80, 80, 80, 
	80, 80, 80, 80, 70, 86, 88, 88, 
	88, 91, 93, 88, 70, 1, 93, 70, 
	93, 93, 93, 101
};

static const int query_start = 29;
static const int query_first_final = 29;
static const int query_error = -1;

static const int query_en_main = 29;


/* #line 360 "lexer.rl" */

QueryNode *RSQuery_ParseRaw_v3(QueryParseCtx *q) {
  void *pParser = RSQuery_ParseAlloc_v3(rm_malloc);

  int cs, act;
  const char* ts = q->raw;
  const char* te = q->raw + q->len;
  
/* #line 275 "lexer.c" */
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

/* #line 368 "lexer.rl" */
  QueryToken tok = {.len = 0, .pos = 0, .s = 0};
  
  //parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char* p = q->raw;
  const char* pe = q->raw + q->len;
  const char* eof = pe;
  
  
/* #line 292 "lexer.c" */
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
_resume:
	_acts = _query_actions + _query_from_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 1:
/* #line 1 "NONE" */
	{ts = p;}
	break;
/* #line 311 "lexer.c" */
		}
	}

	_keys = _query_trans_keys + _query_key_offsets[cs];
	_trans = _query_index_offsets[cs];

	_klen = _query_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _query_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _query_indicies[_trans];
_eof_trans:
	cs = _query_trans_targs[_trans];

	if ( _query_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _query_actions + _query_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 2:
/* #line 1 "NONE" */
	{te = p+1;}
	break;
	case 3:
/* #line 69 "lexer.rl" */
	{act = 1;}
	break;
	case 4:
/* #line 81 "lexer.rl" */
	{act = 2;}
	break;
	case 5:
/* #line 93 "lexer.rl" */
	{act = 3;}
	break;
	case 6:
/* #line 103 "lexer.rl" */
	{act = 4;}
	break;
	case 7:
/* #line 123 "lexer.rl" */
	{act = 6;}
	break;
	case 8:
/* #line 132 "lexer.rl" */
	{act = 7;}
	break;
	case 9:
/* #line 207 "lexer.rl" */
	{act = 16;}
	break;
	case 10:
/* #line 223 "lexer.rl" */
	{act = 18;}
	break;
	case 11:
/* #line 255 "lexer.rl" */
	{act = 23;}
	break;
	case 12:
/* #line 258 "lexer.rl" */
	{act = 25;}
	break;
	case 13:
/* #line 269 "lexer.rl" */
	{act = 26;}
	break;
	case 14:
/* #line 304 "lexer.rl" */
	{act = 29;}
	break;
	case 15:
/* #line 113 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    tok.len = te - ts;
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ARROW, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 16:
/* #line 132 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 17:
/* #line 143 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, QUOTE, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 18:
/* #line 151 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, OR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 19:
/* #line 159 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 20:
/* #line 167 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 21:
/* #line 183 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 22:
/* #line 191 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 23:
/* #line 199 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SEMICOLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 24:
/* #line 215 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TILDE, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
/* #line 231 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PERCENT, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 26:
/* #line 239 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LSQB, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }  
  }}
	break;
	case 27:
/* #line 247 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RSQB, tok, q);   
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    } 
  }}
	break;
	case 28:
/* #line 254 "lexer.rl" */
	{te = p+1;}
	break;
	case 29:
/* #line 255 "lexer.rl" */
	{te = p+1;}
	break;
	case 30:
/* #line 256 "lexer.rl" */
	{te = p+1;}
	break;
	case 31:
/* #line 291 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*ts == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PREFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 32:
/* #line 317 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts+1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, CONTAINS, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 33:
/* #line 330 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts+2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 2 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    RSQuery_Parse_v3(pParser, VERBATIM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 34:
/* #line 343 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts+2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
    tok.pos = ts-q->raw + 2;
    tok.len = te - (ts + 3 + is_attr);
    tok.s = ts + 2 + is_attr;
    tok.numval = 0;
    RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 35:
/* #line 69 "lexer.rl" */
	{te = p;p--;{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SIZE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 36:
/* #line 81 "lexer.rl" */
	{te = p;p--;{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 37:
/* #line 103 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ATTRIBUTE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 38:
/* #line 132 "lexer.rl" */
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 39:
/* #line 175 "lexer.rl" */
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 40:
/* #line 207 "lexer.rl" */
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, MINUS, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 41:
/* #line 223 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 42:
/* #line 255 "lexer.rl" */
	{te = p;p--;}
	break;
	case 43:
/* #line 258 "lexer.rl" */
	{te = p;p--;{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 44:
/* #line 304 "lexer.rl" */
	{te = p;p--;{
    int is_attr = (*(ts+1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 45:
/* #line 81 "lexer.rl" */
	{{p = ((te))-1;}{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 46:
/* #line 175 "lexer.rl" */
	{{p = ((te))-1;}{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 47:
/* #line 223 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 48:
/* #line 255 "lexer.rl" */
	{{p = ((te))-1;}}
	break;
	case 49:
/* #line 258 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 50:
/* #line 304 "lexer.rl" */
	{{p = ((te))-1;}{
    int is_attr = (*(ts+1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 51:
/* #line 1 "NONE" */
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;} 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SIZE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 2:
	{{p = ((te))-1;} 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 3:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, MODIFIER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 4:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ATTRIBUTE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 6:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - ts;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, AS_T, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 7:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 16:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, MINUS, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 18:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 25:
	{{p = ((te))-1;}
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 26:
	{{p = ((te))-1;}
    tok.len = te-(ts + 2);
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 29:
	{{p = ((te))-1;}
    int is_attr = (*(ts+1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	default:
	{{p = ((te))-1;}}
	break;
	}
	}
	break;
/* #line 953 "lexer.c" */
		}
	}

_again:
	_acts = _query_actions + _query_to_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 0:
/* #line 1 "NONE" */
	{ts = 0;}
	break;
/* #line 966 "lexer.c" */
		}
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _query_eof_trans[cs] > 0 ) {
		_trans = _query_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	_out: {}
	}

/* #line 376 "lexer.rl" */
  
  if (QPCTX_ISOK(q)) {
    RSQuery_Parse_v3(pParser, 0, tok, q);
  }
  RSQuery_ParseFree_v3(pParser, rm_free);
  if (!QPCTX_ISOK(q) && q->root) {
    QueryNode_Free(q->root);
    q->root = NULL;
  }
  return q->root;
}

