#include <stdio.h>

int main()
{
    char c;
    FILE * fp = fopen("ONEGIN.txt", "r");
    while (fp)
    {
        int num_symb = 0;
        while ((c = getc(fp)) != '\n')
        {
            num_symb++;
        }
        printf("%d\n",num_symb);
        num_symb = 0;
    }
}
