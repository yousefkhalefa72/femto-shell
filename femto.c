/*
 * file : femto.c
 * author : yousef khalefa
 * created on 31/jan/2024
 */

#include <stdio.h>

void main(void)
{
	unsigned char input[50] ;			//input string
	unsigned char counter = 0;			//to check for exit
	unsigned char exit[4] = {'e','x','i','t'};	//check string
	unsigned char flag = 0;				//check flag

	while(1)
	{
		flag = 0;				//new check
		printf("in-> ");			//out "in->"
		gets(input);				//get string from user

		for(counter=0; counter<4; ++counter)	//check if input == string
		{
			if(exit[counter] == input[counter])
			{
				flag++;
			}
		}

		if(4 != flag)				//if input not exit
		{
			printf("out-> %s\n",input);	//out what user in
		}
		else					//if input is exit
		{
			printf("goodbye\n");		//print goodbye
			break;				//then end program
		}

	}
}

