#ifndef __CLASS_INCLUDED__
#define __CLASS_INCLUDED__


#include "ObjectAlone.h"

typedef struct Class Class;

struct Class{
    Object super;
    Class * parentClass;
} ;

#define DEFINECLASS(name, parentPtr)    \
Class name = {                          \
    {                                   \
       &classClass                      \
    },                                  \
    parentPtr                           \
}

extern Class classClass;

#endif