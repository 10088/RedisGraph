/*
* Copyright 2018-2019 Redis Labs Ltd. and Contributors
*
* This file is available under the Redis Labs Source Available License Agreement
*/

#ifndef __AGG_FUNC_REPO_H__
#define __AGG_FUNC_REPO_H__

#include <stdbool.h>

#include "agg_ctx.h"
#include "agg_funcs.h"

void Agg_GetFunc(const char *name, AggCtx **ctx);
bool Agg_FuncExists(const char *name);
int Agg_RegisterFunc(const char *name, AggFuncInit f);

#endif