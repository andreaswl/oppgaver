
    int main(){
         char *s = "hello world";
         *s = 'H';
    }


    /* This code results in a segmentation fault.
     *
     * The string (char array) pointed to by s
     * is part of the program itself. Therefore,
     * the OS prevents us from modifying it. 
     *
     * To allow modifying the string, it could either
     * have been allocated on the heap (using malloc),
     * or declared (on the stack)
     *
     * Two possible solutions:
     *
     * char *s = malloc(sizeof(char) * 12);
     * char s[12];
     *
     * The first allocates heap memory, while the
     * second reserves space on the stack.
     * Both these memory areas can be written to
     * inside the function.
     */


