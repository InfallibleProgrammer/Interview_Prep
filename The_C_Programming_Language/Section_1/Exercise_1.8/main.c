/* Write a program to count blanks, tabs, and newlines */

#include <stdio.h>

int main(void)
{
    int c;
    int blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    while((c = getchar()) != EOF)
    {
        if (c =='\n')
            ++newlines;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
    }

    printf("Lines: %d\t Blanks: %d\t Tabs: %d\n", newlines, blanks, tabs);

    return 0;
}