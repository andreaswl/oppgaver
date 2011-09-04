

#include <stdio.h>
#include <stdlib.h>
#include "rbuf.h"

void inspect(rbuf_t *rbuf)
{
    int i;
    printf("ringbuf capacity: %d, size: %d | %d %d\n",
      rbuf->capacity, rbuf->size, rbuf->get_pos, rbuf->put_pos);

    for (i=0; i<rbuf->size; i++)
      printf("Element: %s\n", (char*) Rbuf_peek(rbuf, i));
}

int main()
{
    rbuf_t *rb;

    rb = Rbuf_new(5);
    inspect(rb);
    Rbuf_put(rb, "One");
    inspect(rb);
    Rbuf_put(rb, "Two");
    inspect(rb);
    Rbuf_put(rb, "Three");
    inspect(rb);
    Rbuf_put(rb, "Four");
    inspect(rb);
    Rbuf_put(rb, "Five");
    inspect(rb);
    Rbuf_put(rb, "Six");
    inspect(rb);
    Rbuf_put(rb, "Seven");
    inspect(rb);
    Rbuf_put(rb, "Eight");
    inspect(rb);

    printf("random %s\n", (char*) Rbuf_random(rb));
    printf("random %s\n", (char*) Rbuf_random(rb));
    printf("random %s\n", (char*) Rbuf_random(rb));
    printf("random %s\n", (char*) Rbuf_random(rb));
    printf("random %s\n", (char*) Rbuf_random(rb));

    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    Rbuf_put(rb, "Nine");
    inspect(rb);
    Rbuf_put(rb, "Ten!");
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    printf("got %s\n", (char*) Rbuf_get(rb));
    inspect(rb);
    
    Rbuf_free(rb);
}
