#ifndef STAN_LANG_TORSTEN_AST_FUN_IS_NIL_VIS_HPP
#define STAN_LANG_TORSTEN_AST_FUN_IS_NIL_VIS_HPP

#include <stan/torsten/torsten_func_expression_list.h>

#define TORSTEN_FUNC_EXPR(F, R) bool operator()(const F& x) const;
    TORSTEN_LANG_FUNCTORS_EXPRESSION_LIST
#undef TORSTEN_FUNC_EXPR

#endif
