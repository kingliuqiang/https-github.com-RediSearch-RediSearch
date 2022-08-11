
#pragma once

#include "search_ctx.h"
#include "query.h"

///////////////////////////////////////////////////////////////////////////////////////////////

#define FOUND_TERM_IN_INDEX "term exists in index"

//---------------------------------------------------------------------------------------------

struct RS_Suggestion : Object {
  double score;
  char *suggestion;
  size_t len;

  RS_Suggestion(Runes &runes, double score);
  ~RS_Suggestion();

  int operator>(const RS_Suggestion &v) {
    if (score < v.score) {
      return -1;
    }
    if (score > v.score) {
      return 1;
    }
    return 0;
  }
};

//---------------------------------------------------------------------------------------------

struct RS_Suggestions : Object {
  Trie suggestionsTrie;

  void Add(char *term, size_t len, double score, int incr);
  Vector<RS_Suggestion> GetSuggestions();
  void SendReplyOnTerm(RedisModuleCtx *ctx, char *term, size_t len, uint64_t totalDocNumber);
};

//---------------------------------------------------------------------------------------------

struct SpellChecker {
  RedisSearchCtx *sctx;
  Vector<const char*> includeDict;
  Vector<const char*> excludeDict;
  long long distance;
  bool fullScoreInfo;
  size_t results;

  SpellChecker(RedisSearchCtx *sctx, Vector<const char*> includeDict, Vector<const char*> excludeDict,
    long long distance, bool fullScoreInfo) :
      sctx(sctx), includeDict(includeDict), excludeDict(excludeDict), distance(distance),
      fullScoreInfo(fullScoreInfo) {}

  void Reply(QueryAST *q);
  bool ReplyTermSuggestions(char *term, size_t len, t_fieldMask fieldMask);

  void FindSuggestions(Trie *t, const char *term, t_fieldMask fieldMask, RS_Suggestions &s, int incr);
  double GetScore(char *suggestion, size_t len, t_fieldMask fieldMask);

  bool CheckDictExistence(const char *dict);
  bool CheckTermDictsExistance();

  static bool IsTermExistsInTrie(Trie *t, const char *term, size_t len, double *outScore);
};

///////////////////////////////////////////////////////////////////////////////////////////////
