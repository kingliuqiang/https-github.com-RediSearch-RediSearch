
/* #line 1 "lexer.rl" */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "parse.h"
#include "parser.h"
#include "../query_node.h"
#include "../stopwords.h"

/* forward declarations of stuff generated by lemon */

#define RSQuery_Parse RSQueryParser_ // weird Lemon quirk.. oh well..
#define RSQuery_ParseAlloc RSQueryParser_Alloc
#define RSQuery_ParseFree RSQueryParser_Free

void RSQuery_Parse(void *yyp, int yymajor, QueryToken yyminor, QueryParse *ctx);
void *RSQuery_ParseAlloc(void *(*mallocProc)(size_t));
void RSQuery_ParseFree(void *p, void (*freeProc)(void *));


/* #line 236 "lexer.rl" */



/* #line 30 "lexer.c" */
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 10, 1,
	11, 1, 12, 1, 13, 1, 14, 1,
	15, 1, 16, 1, 17, 1, 18, 1,
	19, 1, 20, 1, 21, 1, 22, 1,
	23, 1, 24, 1, 25, 1, 26, 1,
	27, 1, 28, 1, 29, 1, 30, 1,
	31, 1, 32, 1, 33, 1, 34, 2,
	2, 3, 2, 2, 4, 2, 2, 5,
	2, 2, 6, 2, 2, 7, 2, 2,
	8, 2, 2, 9
};

static const unsigned char _query_key_offsets[] = {
	0, 10, 20, 21, 22, 24, 27, 29,
	39, 77, 88, 98, 99, 102, 107, 111,
	113, 129, 143, 156, 157, 167, 177, 189
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96,
	123, 126, 9, 13, 32, 47, 58, 64,
	91, 96, 123, 126, 110, 102, 48, 57,
	45, 48, 57, 48, 57, 9, 13, 32,
	47, 58, 64, 91, 96, 123, 126, 32,
	34, 36, 37, 39, 40, 41, 42, 43,
	45, 58, 59, 61, 64, 91, 92, 93,
	95, 105, 123, 124, 125, 126, 127, 0,
	8, 9, 13, 14, 31, 33, 47, 48,
	57, 60, 63, 94, 96, 42, 92, 96,
	0, 47, 58, 64, 91, 94, 123, 127,
	92, 96, 0, 47, 58, 64, 91, 94,
	123, 127, 105, 105, 48, 57, 46, 69,
	101, 48, 57, 69, 101, 48, 57, 48,
	57, 42, 46, 69, 92, 96, 101, 0,
	47, 48, 57, 58, 64, 91, 94, 123,
	127, 42, 45, 92, 96, 0, 47, 48,
	57, 58, 64, 91, 94, 123, 127, 42,
	92, 96, 0, 47, 48, 57, 58, 64,
	91, 94, 123, 127, 62, 92, 96, 0,
	47, 58, 64, 91, 94, 123, 127, 9,
	13, 32, 47, 58, 64, 91, 96, 123,
	126, 42, 92, 96, 110, 0, 47, 58,
	64, 91, 94, 123, 127, 42, 92, 96,
	102, 0, 47, 58, 64, 91, 94, 123,
	127, 0
};

static const char _query_single_lengths[] = {
	0, 0, 1, 1, 0, 1, 0, 0,
	24, 3, 2, 1, 1, 3, 2, 0,
	6, 4, 3, 1, 2, 0, 4, 4
};

static const char _query_range_lengths[] = {
	5, 5, 0, 0, 1, 1, 1, 5,
	7, 4, 4, 0, 1, 1, 1, 1,
	5, 5, 5, 0, 4, 5, 4, 4
};

static const unsigned char _query_index_offsets[] = {
	0, 6, 12, 14, 16, 18, 21, 23,
	29, 61, 69, 76, 78, 81, 86, 90,
	92, 104, 114, 123, 125, 132, 138, 147
};

static const char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 2,
	2, 2, 2, 0, 3, 0, 4, 0,
	6, 5, 7, 8, 5, 8, 0, 9,
	9, 9, 9, 9, 0, 11, 13, 14,
	15, 16, 17, 18, 19, 16, 20, 22,
	23, 24, 25, 26, 27, 28, 29, 30,
	31, 32, 33, 34, 10, 10, 11, 10,
	12, 21, 12, 12, 1, 35, 36, 0,
	0, 0, 0, 0, 1, 37, 0, 0,
	0, 0, 0, 2, 39, 38, 39, 41,
	40, 43, 44, 44, 41, 42, 44, 44,
	6, 42, 8, 42, 35, 43, 45, 36,
	42, 45, 42, 21, 42, 42, 42, 1,
	35, 7, 36, 46, 46, 47, 46, 46,
	46, 1, 35, 36, 42, 42, 47, 42,
	42, 42, 1, 48, 38, 49, 0, 0,
	0, 0, 0, 9, 1, 1, 1, 1,
	1, 38, 35, 36, 46, 50, 46, 46,
	46, 46, 1, 35, 36, 46, 51, 46,
	46, 46, 46, 1, 0
};

static const char _query_trans_targs[] = {
	8, 9, 10, 3, 8, 8, 14, 6,
	15, 20, 8, 8, 8, 8, 10, 8,
	11, 8, 8, 8, 12, 16, 8, 8,
	19, 20, 8, 21, 8, 9, 22, 8,
	8, 8, 8, 8, 0, 1, 8, 2,
	8, 13, 8, 4, 5, 17, 8, 18,
	8, 7, 23, 9
};

static const char _query_trans_actions[] = {
	53, 73, 61, 0, 7, 51, 55, 0,
	0, 58, 39, 35, 37, 9, 70, 29,
	70, 13, 15, 27, 67, 55, 21, 23,
	0, 70, 31, 0, 33, 70, 73, 17,
	11, 19, 25, 41, 0, 0, 47, 0,
	45, 55, 43, 0, 0, 73, 49, 55,
	5, 0, 73, 64
};

static const char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0,
	1, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

static const char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0,
	3, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

static const unsigned char _query_eof_trans[] = {
	1, 1, 1, 1, 6, 6, 1, 1,
	0, 1, 1, 39, 41, 43, 43, 43,
	43, 47, 43, 39, 1, 39, 47, 47
};

static const int query_start = 8;
static const int query_first_final = 8;
static const int query_error = -1;

static const int query_en_main = 8;


/* #line 239 "lexer.rl" */

QueryNode *QueryParse::ParseRaw() {
  void *pParser = RSQuery_ParseAlloc(rm_malloc);


  int cs, act;
  const char* ts = raw;
  const char* te = raw + len;

/* #line 175 "lexer.c" */
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

/* #line 248 "lexer.rl" */
  QueryToken tok = {.len = 0, .pos = 0, .s = 0};

  //parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char* p = raw;
  const char* pe = raw + len;
  const char* eof = pe;


/* #line 192 "lexer.c" */
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
/* #line 211 "lexer.c" */
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
/* #line 53 "lexer.rl" */
	{act = 1;}
	break;
	case 4:
/* #line 65 "lexer.rl" */
	{act = 2;}
	break;
	case 5:
/* #line 74 "lexer.rl" */
	{act = 3;}
	break;
	case 6:
/* #line 92 "lexer.rl" */
	{act = 5;}
	break;
	case 7:
/* #line 161 "lexer.rl" */
	{act = 14;}
	break;
	case 8:
/* #line 204 "lexer.rl" */
	{act = 21;}
	break;
	case 9:
/* #line 207 "lexer.rl" */
	{act = 23;}
	break;
	case 10:
/* #line 83 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    tok.len = te - ts;
    tok.s = ts+1;
    RSQuery_Parse(pParser, ARROW, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 11:
/* #line 92 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 12:
/* #line 103 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, QUOTE, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 13:
/* #line 110 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, OR, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 14:
/* #line 117 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, LP, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 15:
/* #line 125 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, RP, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 16:
/* #line 132 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, LB, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 17:
/* #line 139 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, RB, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 18:
/* #line 146 "lexer.rl" */
	{te = p+1;{
     tok.pos = ts-raw;
     RSQuery_Parse(pParser, COLON, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
   }}
	break;
	case 19:
/* #line 153 "lexer.rl" */
	{te = p+1;{
     tok.pos = ts-raw;
     RSQuery_Parse(pParser, SEMICOLON, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
   }}
	break;
	case 20:
/* #line 168 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, TILDE, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 21:
/* #line 175 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, STAR, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 22:
/* #line 182 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, PERCENT, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 23:
/* #line 189 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, LSQB, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 24:
/* #line 196 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, RSQB, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
/* #line 203 "lexer.rl" */
	{te = p+1;}
	break;
	case 26:
/* #line 204 "lexer.rl" */
	{te = p+1;}
	break;
	case 27:
/* #line 205 "lexer.rl" */
	{te = p+1;}
	break;
	case 28:
/* #line 221 "lexer.rl" */
	{te = p+1;{
    tok.len = te-ts - 1;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;

    RSQuery_Parse(pParser, PREFIX, tok, q);

    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 29:
/* #line 53 "lexer.rl" */
	{te = p;p--;{
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }

  }}
	break;
	case 30:
/* #line 161 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, MINUS, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 31:
/* #line 204 "lexer.rl" */
	{te = p;p--;}
	break;
	case 32:
/* #line 207 "lexer.rl" */
	{te = p;p--;{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;
    if (!opts->stopwords->Contains(tok.s, tok.len)) {
      RSQuery_Parse(pParser, TERM, tok, q);
    } else {
      RSQuery_Parse(pParser, STOPWORD, tok, q);
    }
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }}
	break;
	case 33:
/* #line 53 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }

  }}
	break;
	case 34:
/* #line 1 "NONE" */
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;}
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }

  }
	break;
	case 2:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse(pParser, MODIFIER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 3:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse(pParser, ATTRIBUTE, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 5:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 14:
	{{p = ((te))-1;}
    tok.pos = ts-raw;
    RSQuery_Parse(pParser, MINUS, tok, q);
    if (!q->IsOk()) {
      {p++; goto _out; }
    }
  }
	break;
	case 23:
	{{p = ((te))-1;}
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-raw;
    if (!opts->stopwords->Contains(tok.s, tok.len)) {
      RSQuery_Parse(pParser, TERM, tok, q);
    } else {
      RSQuery_Parse(pParser, STOPWORD, tok, q);
    }
    if (!q->IsOk()) {
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
/* #line 634 "lexer.c" */
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
/* #line 647 "lexer.c" */
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

/* #line 256 "lexer.rl" */

  if (q->IsOk()) {
    RSQuery_Parse(pParser, 0, tok, q);
  }
  RSQuery_ParseFree(pParser, rm_free);
  if (!q->IsOk() && root) {
    QueryNode_Free(root);
    root = NULL;
  }
  return root;
}

