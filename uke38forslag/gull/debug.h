
#ifndef GULL_DEBUG_H
#define GULL_DEBUG_H

#include <stdio.h>

#ifdef DEBUG
    #define DLOG(args...) printf("~> "); printf(args)
#else
    #define DLOG(args...)
#endif

#endif
