#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int num = 1; //start table of numbers at one

    for (int row = 0; row < 10; row++) //creates 10 rows
    {
        for (int col = 0; col < 8; col++) //creates 8 columns
        {
            cout << num << "\t"; //print each number
            if (num == 92) {
                num = 43;
            }
            num = num + 10;
        }

        cout << num;
        num++;

        cout << endl; //output new line at the end of each row
    }
}
