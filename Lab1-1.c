#include <stdio.h>
void funcPrint(char *pstring);
int main (void)
{
    funcPrint("el diseño gráfico es mi pasión");
    return(0);
}

/**
\brief funcPrint
\param pstring
\this variable receives the direction of the string to be printed.
*/

void funcPrint(char *pstring)
{
    printf("%s/n", pstring);
}
