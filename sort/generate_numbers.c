#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    const char *out = "numbers.txt";
    int len = 100000;
    if (argc == 3) 
    {
        len = atoi(argv[1]);
        out = argv[2];
    }

    FILE *file = freopen(out, "wt", stdout);

    srand(time(NULL));
    int i = 0;
    printf("%d\n", len);
    for (; i < len; i++)
    {
        printf("%d ", rand());
    }
    puts("");



    fclose(file);
    return 0;
}
