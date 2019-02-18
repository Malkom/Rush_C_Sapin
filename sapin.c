#include "sapin.h"

void branches (int bloc_n, int size)
{

    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = 0;

    int space;
    int lines;
    int stars;
 
    space = (last_line(size) / 2) - (first_line(bloc_n) / 2);
    lines = nbr_line(bloc_n);
    stars = first_line(bloc_n);

   

    while (i < lines)
    {
        while (j < space)
        {
            my_putchar(' ');
            j++;
        }

        while (k < stars)
        {
            my_putchar('*');
            k++;
        }

    my_putchar('\n');

    space--;
    stars = stars + 2;
    i++;
    j=0;
    k=0;

    }

}

void tronc(int size)
{
    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = 0;

    int space;
    int larg_tronc;
    int haut_tronc;

   
    if ((size % 2) != 0)
    {
        larg_tronc = size;
    }

    else
    {
        larg_tronc = size +1;
    }
    
    haut_tronc = size;
    space = (last_line(size) / 2) - (larg_tronc / 2);

    while (i < (haut_tronc))
    {
        while (j < space)
        {
            my_putchar(' ');
            j++;
        }

        while (k < larg_tronc)
        {
            my_putchar('|');
            k++;
        }

    my_putchar('\n');

    i++;
    j=0;
    k=0;

    }

}


void sapin(int size)
{
    int i;
    i=1;
    
    while(i <= size)
    {
        branches(i, size);
        i++;
    }
    
    tronc(size);


}


int main (int argc, char *argv[])

{
    int size;
    
    size = *argv[1] - 48;



    if (*argv[1] <= 48 || *argv[1] > 92) 
    {
        my_putstr("The argument must be positive\n");
    }
    
    else
    {
        sapin(size);
    }

    return(0);

}
