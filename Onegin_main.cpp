#include <stdio.h>
#include <sys/stat.h>

int main()
{
    struct stat statistic;
    long size_f;
    int c = 0, k = 1;


    FILE * fp = fopen("ONEGIN.txt", "r");
    stat("ONEGIN.txt", &statistic);
    size_f = statistic.st_size;

    printf("%d",size_f);
    char buffer[size_f] = {};
    fread(buffer, sizeof buffer[0], size_f, fp);

    for (int i = 0; i < 90; i++)
    {
        if ((buffer[i]) == '\n')
        {
            k++;
        }
    }
}
