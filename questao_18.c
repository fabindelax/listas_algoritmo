#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void){

int numero,c1,c2,c3,c4,c5,c6;
printf ("[ESCOLHA ENTRE OS N�MEROS 100, 50, 20, 10, 5 E 2] \n");
scanf ("%d",&numero);

switch (numero){
	case 100 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 50 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 10 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 5 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 2 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	default : printf ("OPERADOR INVALIDO");
	
	
	
}
}