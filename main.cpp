/* https://github.com/sohitfirs/2.3.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%lli", &pin1);
	printf("pin2=");
	scanf("%lli", &pin2);
	
	if(((pin1 == 123) && (pin2 == 321)) || ((pin1 == 456456456) && (pin2 == 654654654)) || ((pin1 == 999999999999999) && (pin2 == 888888888888888)))
	{
		printf("OK\n");
	}
	else
	{
		printf("ERROR\n");
	}
	system ("pause");
}
