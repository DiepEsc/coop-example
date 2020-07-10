#ifndef __OBJECT_ALONE_INCLUDED__
#define __OBJECT_ALONE_INCLUDED__

typedef struct Object {
    void * class;
} Object;

Object * createObject( void * ptr);

#endif