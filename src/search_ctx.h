/*
 * Copyright Redis Ltd. 2016 - present
 * Licensed under your choice of the Redis Source Available License 2.0 (RSALv2) or
 * the Server Side Public License v1 (SSPLv1).
 */

#ifndef __SEARCH_CTX_H
#define __SEARCH_CTX_H

#include <sched.h>

#include "redismodule.h"
#include "spec.h"
#include "concurrent_ctx.h"
#include "trie/trie_type.h"
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__FreeBSD__)
#define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
#endif

typedef enum {
  RS_CTX_READONLY = 0,
  RS_CTX_READWRITE = 1,
} RSContextFlags;


/** Context passed to all redis related search handling functions. */
typedef struct RedisSearchCtx {
  RedisModuleCtx *redisCtx;
  RedisModuleKey *key_;
  IndexSpec *spec;
  uint64_t specId;  // Unique id of the spec; used when refreshing
  struct timespec timeout;
  unsigned int apiVersion; // API Version to allow for backward compatibility / alternative functionality
  RSContextFlags flags;
  bool isLocked;
} RedisSearchCtx;

#define SEARCH_CTX_SORTABLES(ctx) ((ctx && ctx->spec) ? ctx->spec->sortables : NULL)
// Create a string context on the heap
RedisSearchCtx *NewSearchCtx(RedisModuleCtx *ctx, RedisModuleString *indexName, bool resetTTL, RSContextFlags flags);

// Same as above, only from c string (null terminated)
RedisSearchCtx *NewSearchCtxC(RedisModuleCtx *ctx, const char *indexName, bool resetTTL, RSContextFlags flads);

RedisSearchCtx SEARCH_CTX_STATIC(RedisModuleCtx *ctx, IndexSpec *sp, RSContextFlags flags);

void SearchCtx_CleanUp(RedisSearchCtx * sctx);

void SearchCtx_Free(RedisSearchCtx *sctx);

void RedisSearchCtx_LockSpec(RedisSearchCtx *sctx);

void RedisSearchCtx_UnlockSpec(RedisSearchCtx *sctx);

#ifdef __cplusplus
}
#endif
#endif
