#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct Vector {
  void** items;
  int size;
  int capacity;
} Vector;

Vector* Vector__new(size_t initial_capacity);
void Vector__resize(Vector* self, int capacity);
void Vector__push(Vector* self, void* element);
void Vector__pop(Vector* self);
void* Vector__last(Vector* self);
void Vector__copy(Vector* self, Vector* target);
void Vector__delete(Vector* self, int index);
void Vector__insert(Vector* self, void* element, int index);
void Vector__clear(Vector* self);
void Vector__free(Vector* self);

#endif