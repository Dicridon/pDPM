#ifndef __DISTORE__DEBUG__DEBUG__
#define __DISTORE__DEBUG__DEBUG__

#include "config.hpp"
#include <cstdio>
namespace DiStore::Debug {
    auto info(const char *fmt, ...) -> void;
    auto warn(const char *fmt, ...) -> void;
    auto error(const char *fmt, ...) -> void;
}
#endif
