#ifndef CMARK_GFM_LATEXMATH_H
#define CMARK_GFM_LATEXMATH_H

#include "cmark-gfm-core-extensions.h"

extern cmark_node_type CMARK_NODE_LATEX_MATH;
cmark_syntax_extension *create_latexmath_extension(void);

#endif
