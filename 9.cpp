   

#include<stdio.h>                         //�ɤJ���Y�� 

#include<stdlib.h>

int main(void) 

{

	for (int a = 1; a < 10; a++)                 //����b*1-9 

		for (int b = 1; b < 10; b++) 

		{            //����1-9*a

			printf("%2d*%1d=%2d", b, a, a*b);

			printf("   ");

			if (b == 9)  //b=9���� 

			{                    

				printf("\n");

			}

		}

	system("pause");

	return 0;

}
