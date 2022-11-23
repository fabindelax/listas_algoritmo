#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int n1, n2;
printf ("[DIGITE UM NUMERO E EM SEGUIDA OUTRO]\n");
scanf ("%i %i",&n1,&n2);
if (n1 >=n2)
{
printf ("%i E MAIOR QUE %i",n1,n2);
}
else
{
printf ("%i E MAIOR QUE %i",n2,n1);
}

}