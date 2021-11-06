# malloc
Using only brk/sbrk and your amazing mind, rewrite the 5 following C library functions: malloc, calloc,
realloc, reallocarray and free.

Authors:
* [Kattalin Ocariz](https://github.com/kocariz)
# Project
All programs using malloc should work with your own malloc. Remember to test it with
several existing programs.
Some programs use their own allocation system and memory management. Think
about what kind of tests you’re going to perform
You allocation strategy must be like follow:
* you must align your memory on a power of 2.
* the break must always be aligned on a multiple of 2 pages.
* you must implement the best fit algorithm.
# Usage
```
export LD_LIBRARY_PATH=(pwd)/libmy_malloc.so:$LD_LIBRARY_PATH
gcc -L./ -Wall  test/main.c -lmy_malloc
LD_PRELOAD=(pwd)/libmy_malloc.so /bin/ls
```