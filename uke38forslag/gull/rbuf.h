
#ifndef RBUF_H
#define RBUF_H

/* Ring buffer queue
 *
 * Overwrites oldest element on overflow.
 * Custom size and generic pointers (void *).
 *
 */

typedef struct {
    int capacity, size, put_pos, get_pos;
    void **arr;
} rbuf_t;

rbuf_t  *Rbuf_new(int);
void     Rbuf_free(rbuf_t *);
void     Rbuf_put(rbuf_t *, void *);
void    *Rbuf_get(rbuf_t *);
void    *Rbuf_peek(rbuf_t *, int);
void    *Rbuf_random(rbuf_t *);

#endif
