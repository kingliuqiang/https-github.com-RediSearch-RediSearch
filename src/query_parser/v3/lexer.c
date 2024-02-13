
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


/* #line 612 "lexer.rl" */



/* #line 36 "lexer.c" */
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	17, 1, 18, 1, 19, 1, 20, 1, 
	21, 1, 22, 1, 23, 1, 24, 1, 
	25, 1, 26, 1, 27, 1, 28, 1, 
	29, 1, 30, 1, 31, 1, 32, 1, 
	33, 1, 34, 1, 35, 1, 36, 1, 
	37, 1, 38, 1, 39, 1, 40, 1, 
	41, 1, 42, 1, 43, 1, 44, 1, 
	45, 1, 46, 1, 47, 1, 48, 1, 
	49, 1, 50, 1, 51, 1, 52, 1, 
	53, 1, 54, 1, 55, 1, 56, 1, 
	57, 1, 58, 2, 2, 3, 2, 2, 
	4, 2, 2, 5, 2, 2, 6, 2, 
	2, 7, 2, 2, 8, 2, 2, 9, 
	2, 2, 10, 2, 2, 11, 2, 2, 
	12, 2, 2, 13, 2, 2, 14, 2, 
	2, 15, 2, 2, 16
};

static const short _query_key_offsets[] = {
	0, 10, 20, 22, 22, 25, 28, 38, 
	48, 50, 52, 55, 57, 58, 59, 61, 
	64, 66, 67, 68, 70, 72, 73, 73, 
	78, 82, 83, 87, 91, 95, 96, 100, 
	105, 110, 114, 118, 123, 125, 126, 126, 
	130, 135, 140, 145, 147, 148, 148, 152, 
	155, 159, 169, 209, 220, 230, 241, 244, 
	246, 260, 271, 277, 282, 285, 301, 313, 
	314, 317, 323, 328, 331, 347, 361, 374, 
	376, 378, 380, 381, 391, 404, 414, 426
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96, 
	123, 126, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 39, 92, 39, 92, 
	110, 39, 92, 102, 9, 13, 32, 47, 
	58, 64, 91, 96, 123, 126, 92, 96, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	48, 57, 48, 57, 45, 48, 57, 48, 
	57, 110, 102, 48, 57, 45, 48, 57, 
	48, 57, 119, 39, 39, 92, 39, 92, 
	41, 36, 42, 92, 119, 125, 36, 42, 
	92, 125, 125, 36, 42, 92, 125, 36, 
	42, 92, 125, 36, 42, 92, 125, 125, 
	36, 42, 92, 125, 36, 42, 92, 119, 
	125, 36, 39, 42, 92, 125, 36, 42, 
	92, 125, 36, 42, 92, 125, 36, 39, 
	42, 92, 125, 39, 92, 125, 36, 42, 
	92, 125, 36, 39, 42, 92, 125, 36, 
	39, 42, 92, 125, 36, 39, 42, 92, 
	125, 39, 92, 125, 36, 42, 92, 125, 
	39, 92, 125, 36, 42, 92, 125, 9, 
	13, 32, 47, 58, 64, 91, 96, 123, 
	126, 32, 34, 36, 37, 39, 40, 41, 
	42, 43, 45, 58, 59, 61, 64, 65, 
	91, 92, 93, 95, 97, 105, 123, 124, 
	125, 126, 127, 0, 8, 9, 13, 14, 
	31, 33, 47, 48, 57, 60, 63, 94, 
	96, 42, 92, 96, 0, 47, 58, 64, 
	91, 94, 123, 127, 92, 96, 0, 47, 
	58, 64, 91, 94, 123, 127, 42, 92, 
	96, 0, 47, 58, 64, 91, 94, 123, 
	127, 39, 92, 105, 39, 92, 36, 45, 
	92, 96, 0, 47, 48, 57, 58, 64, 
	91, 94, 123, 127, 42, 92, 96, 0, 
	47, 58, 64, 91, 94, 123, 127, 42, 
	46, 69, 101, 48, 57, 42, 69, 101, 
	48, 57, 42, 48, 57, 42, 46, 69, 
	92, 96, 101, 0, 47, 48, 57, 58, 
	64, 91, 94, 123, 127, 42, 45, 92, 
	96, 0, 47, 58, 64, 91, 94, 123, 
	127, 105, 105, 48, 57, 42, 46, 69, 
	101, 48, 57, 42, 69, 101, 48, 57, 
	42, 48, 57, 42, 46, 69, 92, 96, 
	101, 0, 47, 48, 57, 58, 64, 91, 
	94, 123, 127, 42, 45, 92, 96, 0, 
	47, 48, 57, 58, 64, 91, 94, 123, 
	127, 42, 92, 96, 0, 47, 48, 57, 
	58, 64, 91, 94, 123, 127, 40, 123, 
	39, 92, 39, 92, 62, 92, 96, 0, 
	47, 58, 64, 91, 94, 123, 127, 42, 
	83, 92, 96, 115, 0, 47, 58, 64, 
	91, 94, 123, 127, 9, 13, 32, 47, 
	58, 64, 91, 96, 123, 126, 42, 92, 
	96, 110, 0, 47, 58, 64, 91, 94, 
	123, 127, 42, 92, 96, 102, 0, 47, 
	58, 64, 91, 94, 123, 127, 0
};

static const char _query_single_lengths[] = {
	0, 0, 2, 0, 3, 3, 0, 2, 
	0, 0, 1, 0, 1, 1, 0, 1, 
	0, 1, 1, 2, 2, 1, 0, 5, 
	4, 1, 4, 4, 4, 1, 4, 5, 
	5, 4, 4, 5, 2, 1, 0, 4, 
	5, 5, 5, 2, 1, 0, 4, 3, 
	4, 0, 26, 3, 2, 3, 3, 2, 
	4, 3, 4, 3, 1, 6, 4, 1, 
	1, 4, 3, 1, 6, 4, 3, 2, 
	2, 2, 1, 2, 5, 0, 4, 4
};

static const char _query_range_lengths[] = {
	5, 5, 0, 0, 0, 0, 5, 4, 
	1, 1, 1, 1, 0, 0, 1, 1, 
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 5, 7, 4, 4, 4, 0, 0, 
	5, 4, 1, 1, 1, 5, 4, 0, 
	1, 1, 1, 1, 5, 5, 5, 0, 
	0, 0, 0, 4, 4, 5, 4, 4
};

static const short _query_index_offsets[] = {
	0, 6, 12, 15, 16, 20, 24, 30, 
	37, 39, 41, 44, 46, 48, 50, 52, 
	55, 57, 59, 61, 64, 67, 69, 70, 
	76, 81, 83, 88, 93, 98, 100, 105, 
	111, 117, 122, 127, 133, 136, 138, 139, 
	144, 150, 156, 162, 165, 167, 168, 173, 
	177, 182, 188, 222, 230, 237, 245, 249, 
	252, 262, 270, 276, 281, 284, 296, 305, 
	307, 310, 316, 321, 324, 336, 346, 355, 
	358, 361, 364, 366, 373, 383, 389, 398
};

static const char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 2, 
	2, 2, 2, 0, 4, 5, 3, 3, 
	4, 5, 7, 3, 4, 5, 8, 3, 
	9, 9, 9, 9, 9, 0, 11, 10, 
	10, 10, 10, 10, 9, 12, 10, 14, 
	13, 15, 16, 13, 16, 13, 17, 0, 
	18, 0, 19, 0, 21, 22, 20, 22, 
	0, 24, 23, 25, 23, 23, 27, 26, 
	28, 27, 26, 29, 23, 26, 23, 31, 
	32, 33, 23, 30, 23, 34, 35, 36, 
	30, 37, 23, 30, 30, 30, 30, 23, 
	23, 23, 39, 23, 38, 23, 40, 39, 
	41, 38, 42, 23, 38, 38, 38, 38, 
	23, 30, 30, 30, 43, 30, 23, 23, 
	45, 23, 46, 23, 44, 23, 23, 46, 
	36, 44, 44, 44, 44, 44, 23, 47, 
	44, 47, 48, 49, 45, 50, 51, 47, 
	36, 0, 47, 45, 45, 45, 45, 47, 
	23, 52, 34, 35, 36, 30, 54, 30, 
	55, 56, 57, 53, 54, 58, 55, 56, 
	57, 53, 59, 60, 54, 61, 0, 54, 
	23, 34, 35, 36, 30, 59, 60, 62, 
	54, 53, 53, 53, 53, 54, 63, 63, 
	63, 63, 63, 0, 65, 67, 68, 69, 
	70, 71, 72, 73, 74, 75, 77, 78, 
	79, 80, 81, 82, 83, 84, 85, 81, 
	86, 87, 88, 89, 90, 64, 64, 65, 
	64, 66, 76, 66, 66, 1, 91, 92, 
	0, 0, 0, 0, 0, 1, 94, 93, 
	93, 93, 93, 93, 2, 91, 94, 95, 
	95, 95, 95, 95, 2, 93, 5, 96, 
	3, 4, 5, 3, 99, 100, 11, 98, 
	98, 101, 98, 98, 98, 9, 103, 11, 
	102, 102, 102, 102, 102, 9, 103, 104, 
	105, 105, 12, 102, 103, 105, 105, 14, 
	102, 103, 16, 102, 103, 104, 106, 11, 
	102, 106, 102, 101, 102, 102, 102, 9, 
	103, 15, 11, 102, 102, 102, 102, 102, 
	9, 107, 93, 107, 109, 108, 91, 111, 
	112, 112, 109, 110, 91, 112, 112, 19, 
	110, 91, 22, 110, 91, 111, 114, 92, 
	113, 114, 113, 76, 113, 113, 113, 1, 
	91, 21, 92, 115, 115, 116, 115, 115, 
	115, 1, 91, 92, 110, 110, 116, 110, 
	110, 110, 1, 118, 119, 117, 50, 51, 
	47, 59, 60, 54, 121, 93, 122, 0, 
	0, 0, 0, 0, 63, 91, 123, 92, 
	115, 123, 115, 115, 115, 115, 1, 1, 
	1, 1, 1, 1, 93, 91, 92, 115, 
	124, 115, 115, 115, 115, 1, 91, 92, 
	115, 125, 115, 115, 115, 115, 1, 0
};

static const char _query_trans_targs[] = {
	50, 51, 53, 2, 50, 3, 50, 5, 
	55, 57, 50, 6, 58, 50, 59, 11, 
	60, 13, 50, 66, 50, 16, 67, 50, 
	18, 19, 20, 22, 21, 50, 24, 27, 
	31, 40, 25, 26, 50, 50, 28, 30, 
	29, 50, 50, 32, 33, 35, 34, 36, 
	39, 72, 37, 38, 41, 42, 43, 47, 
	48, 73, 46, 44, 45, 50, 73, 75, 
	50, 50, 50, 50, 52, 50, 54, 50, 
	50, 56, 63, 64, 68, 71, 50, 74, 
	75, 76, 50, 77, 50, 51, 78, 50, 
	50, 50, 50, 50, 0, 50, 1, 50, 
	4, 50, 50, 7, 8, 61, 50, 50, 
	9, 10, 62, 12, 50, 65, 50, 14, 
	15, 50, 69, 50, 70, 50, 17, 23, 
	50, 50, 49, 51, 79, 51
};

static const unsigned char _query_trans_actions[] = {
	89, 121, 100, 0, 53, 0, 85, 0, 
	106, 130, 83, 0, 5, 87, 5, 0, 
	0, 0, 9, 94, 79, 0, 0, 81, 
	0, 0, 0, 0, 0, 55, 0, 0, 
	0, 0, 0, 0, 39, 45, 0, 0, 
	0, 43, 47, 0, 0, 0, 0, 0, 
	0, 124, 0, 0, 0, 0, 0, 0, 
	0, 124, 0, 0, 0, 41, 127, 97, 
	37, 33, 35, 11, 118, 27, 118, 15, 
	17, 115, 118, 112, 91, 109, 23, 0, 
	118, 121, 29, 0, 31, 118, 121, 19, 
	13, 21, 25, 49, 0, 71, 0, 61, 
	0, 63, 69, 0, 0, 130, 77, 51, 
	0, 0, 130, 0, 67, 94, 59, 0, 
	0, 57, 121, 73, 94, 65, 0, 0, 
	75, 7, 0, 103, 121, 106
};

static const unsigned char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 1, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const unsigned char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 3, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const short _query_eof_trans[] = {
	1, 1, 1, 1, 7, 7, 1, 11, 
	11, 14, 14, 14, 1, 1, 1, 21, 
	1, 24, 24, 24, 24, 24, 24, 24, 
	24, 24, 24, 24, 24, 24, 24, 24, 
	24, 24, 24, 24, 1, 1, 1, 24, 
	24, 24, 24, 1, 1, 1, 24, 24, 
	24, 1, 0, 1, 94, 96, 94, 98, 
	99, 103, 103, 103, 103, 103, 103, 94, 
	109, 111, 111, 111, 114, 116, 111, 118, 
	121, 1, 94, 1, 116, 94, 116, 116
};

static const int query_start = 50;
static const int query_first_final = 50;
static const int query_error = -1;

static const int query_en_main = 50;


/* #line 615 "lexer.rl" */

QueryNode *RSQuery_ParseRaw_v3(QueryParseCtx *q) {
  void *pParser = RSQuery_ParseAlloc_v3(rm_malloc);

  int cs, act;
  const char* ts = q->raw;
  const char* te = q->raw + q->len;
  
/* #line 314 "lexer.c" */
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

/* #line 623 "lexer.rl" */
  QueryToken tok = {.len = 0, .pos = 0, .s = 0};

  //parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char* p = q->raw;
  const char* pe = q->raw + q->len;
  const char* eof = pe;

  
/* #line 331 "lexer.c" */
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
/* #line 350 "lexer.c" */
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
/* #line 91 "lexer.rl" */
	{act = 1;}
	break;
	case 4:
/* #line 103 "lexer.rl" */
	{act = 2;}
	break;
	case 5:
/* #line 115 "lexer.rl" */
	{act = 3;}
	break;
	case 6:
/* #line 125 "lexer.rl" */
	{act = 4;}
	break;
	case 7:
/* #line 145 "lexer.rl" */
	{act = 6;}
	break;
	case 8:
/* #line 155 "lexer.rl" */
	{act = 7;}
	break;
	case 9:
/* #line 214 "lexer.rl" */
	{act = 14;}
	break;
	case 10:
/* #line 230 "lexer.rl" */
	{act = 16;}
	break;
	case 11:
/* #line 246 "lexer.rl" */
	{act = 18;}
	break;
	case 12:
/* #line 278 "lexer.rl" */
	{act = 23;}
	break;
	case 13:
/* #line 281 "lexer.rl" */
	{act = 25;}
	break;
	case 14:
/* #line 292 "lexer.rl" */
	{act = 26;}
	break;
	case 15:
/* #line 433 "lexer.rl" */
	{act = 29;}
	break;
	case 16:
/* #line 530 "lexer.rl" */
	{act = 32;}
	break;
	case 17:
/* #line 135 "lexer.rl" */
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
	case 18:
/* #line 155 "lexer.rl" */
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
	case 19:
/* #line 166 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, QUOTE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 20:
/* #line 174 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, OR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 21:
/* #line 182 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 22:
/* #line 190 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 23:
/* #line 198 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 24:
/* #line 206 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
/* #line 222 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SEMICOLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 26:
/* #line 238 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TILDE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 27:
/* #line 254 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PERCENT, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 28:
/* #line 262 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LSQB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 29:
/* #line 270 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RSQB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 30:
/* #line 277 "lexer.rl" */
	{te = p+1;}
	break;
	case 31:
/* #line 278 "lexer.rl" */
	{te = p+1;}
	break;
	case 32:
/* #line 279 "lexer.rl" */
	{te = p+1;}
	break;
	case 33:
/* #line 292 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 3);
    tok.s = ts + 2;
    tok.numval = 0;

    if(tok.s[0] == 'w' && tok.s[1] == '\'' && tok.s[tok.len-1] == '\'') {
      int is_attr = (*(ts + 4) == '$') ? 1 : 0;
      tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
      tok.len = te - (ts + 6 + is_attr);
      tok.s = ts + 4 + is_attr;
      tok.pos = tok.s - q->raw;
      RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    } else {
      tok.pos = tok.s - q->raw;
      tok.type = QT_TERM;
      RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    }
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

  }}
	break;
	case 34:
/* #line 340 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 3);
    tok.s = ts + 2;

    if(tok.s[0] == 'w' && tok.s[1] == '\'') {
      int is_attr = (*(ts + 4) == '$') ? 1 : 0;
      tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
      tok.len = te - (ts + 6 + is_attr);
      tok.s = ts + 4 + is_attr;
      tok.pos = tok.s - q->raw;
      tok.numval = 0;
      RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    } else {
      tok.len = te - (ts + 3);
      tok.s = ts + 2;
      tok.numval = 0;
      tok.pos = tok.s - q->raw;
      tok.type = QT_TERM;
      RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    }
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

  }}
	break;
	case 35:
/* #line 391 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 3) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 3 + is_attr) - 1;
    tok.s = ts + 3 + is_attr;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    // Invalid case: wildcard and suffix
    if(tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 36:
/* #line 433 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr) - 2;
    tok.s = ts + 2 + is_attr;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    // Invalid case: wildcard and prefix
    if(tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }
    RSQuery_Parse_v3(pParser, PREFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 37:
/* #line 475 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 2;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 3) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 3 + is_attr) - 2;
    tok.s = ts + 3 + is_attr;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    // Invalid case: wildcard and contains
    if(tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }
    RSQuery_Parse_v3(pParser, CONTAINS, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 38:
/* #line 517 "lexer.rl" */
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
	case 39:
/* #line 543 "lexer.rl" */
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
	case 40:
/* #line 556 "lexer.rl" */
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
	case 41:
/* #line 569 "lexer.rl" */
	{te = p+1;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 3);
    tok.s = ts + 2;
    
    int is_attr = (*(ts + 4) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
    tok.len = te - (ts + 6 + is_attr);
    tok.s = ts + 4 + is_attr;
    tok.pos = tok.s - q->raw;
    tok.numval = 0;
    RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

  }}
	break;
	case 42:
/* #line 91 "lexer.rl" */
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
	case 43:
/* #line 103 "lexer.rl" */
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
	case 44:
/* #line 125 "lexer.rl" */
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
	case 45:
/* #line 155 "lexer.rl" */
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
	case 46:
/* #line 214 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 47:
/* #line 230 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, MINUS, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 48:
/* #line 246 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 49:
/* #line 278 "lexer.rl" */
	{te = p;p--;}
	break;
	case 50:
/* #line 281 "lexer.rl" */
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
	case 51:
/* #line 292 "lexer.rl" */
	{te = p;p--;{
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 3);
    tok.s = ts + 2;
    tok.numval = 0;

    if(tok.s[0] == 'w' && tok.s[1] == '\'' && tok.s[tok.len-1] == '\'') {
      int is_attr = (*(ts + 4) == '$') ? 1 : 0;
      tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
      tok.len = te - (ts + 6 + is_attr);
      tok.s = ts + 4 + is_attr;
      tok.pos = tok.s - q->raw;
      RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    } else {
      tok.pos = tok.s - q->raw;
      tok.type = QT_TERM;
      RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    }
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

  }}
	break;
	case 52:
/* #line 530 "lexer.rl" */
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
	case 53:
/* #line 103 "lexer.rl" */
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
	case 54:
/* #line 214 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 55:
/* #line 246 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 56:
/* #line 278 "lexer.rl" */
	{{p = ((te))-1;}}
	break;
	case 57:
/* #line 530 "lexer.rl" */
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
	case 58:
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
	case 14:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
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
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 3);
    tok.s = ts + 2;
    tok.numval = 0;

    if(tok.s[0] == 'w' && tok.s[1] == '\'' && tok.s[tok.len-1] == '\'') {
      int is_attr = (*(ts + 4) == '$') ? 1 : 0;
      tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
      tok.len = te - (ts + 6 + is_attr);
      tok.s = ts + 4 + is_attr;
      tok.pos = tok.s - q->raw;
      RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    } else {
      tok.pos = tok.s - q->raw;
      tok.type = QT_TERM;
      RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    }
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

  }
	break;
	case 29:
	{{p = ((te))-1;}
    tok.len = 1;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = ts + 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr) - 2;
    tok.s = ts + 2 + is_attr;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    // Invalid case: wildcard and prefix
    if(tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }
    RSQuery_Parse_v3(pParser, PREFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.numval = 0;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 32:
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
/* #line 1390 "lexer.c" */
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
/* #line 1403 "lexer.c" */
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

/* #line 631 "lexer.rl" */

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

