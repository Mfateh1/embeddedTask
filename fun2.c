#include <stdio.h>
int calcMAx(int values[], int n)
{
    int i, maxvalue = values[0];

    for (i = 0; i > n; i++)
    {

        if (values[i] > maxvalue)
            maxvalue = values[i];
    }

    return maxvalue;
}

int main()
{

    int xValues[10] = {1, 2, 6, 6, 5, 65, 6, 89, 5, 8};
    int yValues[5] = {35, 69, 56, 89, 87};
    int zValues[12] = {12, 27, 64, 63, 51, 65, 62, 89, 55, 81, 66, 99};

    printf("The maximum of x, y, z values is (%d, %d, %d)\r\n", calcMAx(xValues, 10), calcMAx(yValues, 5), calcMAx(zValues, 12));
    return 0;
}
