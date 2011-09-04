
#include <stdlib.h>
#include "rbuf.h"

rbuf_t *Rbuf_new(int capacity)
{
    rbuf_t* rbuf;
    rbuf            = malloc(sizeof(rbuf_t));
    rbuf->capacity  = capacity;
    rbuf->size      = 0;
    rbuf->put_pos   = 0;
    rbuf->get_pos   = 0;
    rbuf->arr       = malloc(sizeof(void *) * capacity - 1);
}

void Rbuf_free(rbuf_t *rbuf)
{
    int i;
    free(rbuf->arr);
    free(rbuf);
}

void Rbuf_put(rbuf_t *rbuf, void *e)
{
    rbuf->arr[rbuf->put_pos] = e;
    rbuf->put_pos++;
    rbuf->put_pos %= rbuf->capacity;

    if (rbuf->size < rbuf->capacity) {
      rbuf->size++;
    } else if (rbuf->put_pos-1 == rbuf->get_pos)
      rbuf->get_pos++; /* overwrite */
}

void *Rbuf_get(rbuf_t *rbuf)
{
    rbuf_t *result;

    if (rbuf->size == 0)
      return NULL;

    result = rbuf->arr[rbuf->get_pos++];
    rbuf->get_pos %= rbuf->capacity;
    rbuf->size--;
    return result;
}

void *Rbuf_peek(rbuf_t *rbuf, int pos)
{
  pos = (rbuf->get_pos + pos) % rbuf->capacity;
  return rbuf->arr[pos];
}


void *Rbuf_random(rbuf_t *rbuf)
{
    if (rbuf->size == 0) {
      return NULL;
    } else {
      return Rbuf_peek(rbuf, random() % rbuf->size);
    }
}


