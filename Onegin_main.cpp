#include <stdio.h>

int main()
{
    int c;
    FILE * fp = fopen("ONEGIN.txt", "r");
    if (fp)
    {
        int num_symb = 0;
        while ((c = getc(fp)) != EOF)
        {
            if (c == '\n')
            {
                printf("%d\n",num_symb);
                num_symb = -1;

            }
            num_symb++;
        }
        printf("%d\n",num_symb);

    }
}
