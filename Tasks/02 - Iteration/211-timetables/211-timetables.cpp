#include <stdio.h>

int main()
{
    // Outer loop 
    for (int row = 1; row <= 3; row++)        // Outer loop executes twice
    {
        printf("(%d)\n", row);

        // Inner loop
        for (int column = 1; column <= 12; column++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t%d x %d = %d\n", );  // note the use of the tab (\t) option at the start to improve the layout
        }
    }
}