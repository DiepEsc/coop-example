#ifndef __OBJECT_INCLUDED__
#define __OBJECT_INCLUDED__


#include "ObjectAlone.h"
#include "Class.h"

extern struct Class classObject;

int isInstance(Object * ptr, Class * class);
#endif