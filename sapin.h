#ifndef SAPIN_H_
#define SAPIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


void my_putchar(char c)
{
write(1, &c, 1);
}

int my_putstr(char *str)
{
int j;

j = 0;

while (str[j] != '\0')
    {
    my_putchar(str[j]);
    j++;
    }
}


int nbr_line(int n)

{
n = n + 3;
return (n);

}

int last_line (int taille)
{

int last_line = 7;
int ajout = 6;
int i=1;

while (i < taille)
{
    if ((i % 2) != 0)
    {
        last_line = last_line + ajout;
    }

    else if (i !=1)
    {
        ajout = ajout + 2;
        last_line = last_line + ajout;
    }

    i++;
}

return(last_line);

}


int first_line (int taille)
{

int first_line = 1;
int ajout = 4;
int i=1;

while (i < taille)
{
    if ((i % 2) != 0)
    {
        first_line = first_line + ajout;
    }

    else if (i !=1)
    {
        ajout = ajout + 2;
        first_line = first_line + ajout;
    }

    i++;
}

return(first_line);

}


#endif