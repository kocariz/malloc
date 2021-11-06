#include "./include/malloc.h"

//export LD_LIBRARY_PATH=/home/kattalin/Epitech/Tek-2/Memory/B-PSU-400-BAR-4-1-nmobjdump-kattalin.ocariz-monedero/bootstrap/libfoo.so:$LD_LIBRARY_PATH
//gcc -L./ -Wall  main.c -lmy_malloc

//LD_PRELOAD=/home/kattalin/Epitech/Tek-2/Memory/B-PSU-400-BAR-4-1-malloc-kattalin.ocariz-monedero/libmy_malloc.so /bin/ls

void my_putchar(char  c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int x = 0;

    if (str == NULL)
        return;
    for (x = 0 ; str[x] != '\0' ; x++)
        my_putchar(str[x]);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    char *mall = malloc(2);
    mall = "a";
    char *call = calloc(2, 2);
    call = "te";
    my_putstr(mall);
    my_putchar('\n');
    my_putstr(call);
    return (0);
}