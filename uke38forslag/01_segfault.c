
    int main(){
         char *s = "hello world";
         *s = 'H';
    }


    /* This code results in a segmentation fault.
     *
     * Note that the string is not explicitly allocated.
     * Therefore, the compiler writes it into the
     * program itself; and it will reside in the programs
     * own memory -- not in the heap.
     *
     * The OS prevents us from modifying this memory,
     * and we get a segmentation fault.
     *
     * To prevent this, we would have to allocate new
     * memory on the heap, and use this; typically by
     * using malloc.
     *
     */


