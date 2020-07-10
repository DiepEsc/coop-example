#include "Object.h"
#include <stdlib.h>

Object * createObject( void * ptr){
    if(ptr==NULL){
        ptr = malloc(sizeof(Object));
        if(ptr==NULL){
            return NULL;
        }
        ((Object *) ptr)->class = &classObject;
    } else if(((Object *)ptr)->class == NULL){
        ((Object *) ptr)->class = &classObject;
    }
    return (Object *) ptr;
}

DEFINECLASS(classObject, NULL);


int isInstance(Object * ptr, Class * class){
    if(ptr == NULL) {
        return 0;
    }
    if(class == (Class *) &classObject){
        return 1;
    }
    Class * objClass = ptr->class;
    while(objClass != (Class *) &classObject){
        if(objClass == class){
            return 1;
        }
        objClass = objClass->parentClass;
    }
    return 0;
}